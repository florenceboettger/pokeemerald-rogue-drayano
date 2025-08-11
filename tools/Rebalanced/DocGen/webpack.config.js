const HtmlWebpackPlugin = require("html-webpack-plugin");
const path = require('path');

const pokemonList = require("./data/pokemon.json");

const processedList = {};
const dexNums = [];

pokemonList.forEach((p) => {
    const isRegional = ("form" in p && ["alola", "galar", "hisui", "paldea"].includes(p.form));
    let modifiedDexNum = p.natDexNum.toString() + (isRegional ? ('_' + p.form) : ""); // give regionals their own pages always
    p.speciesName += isRegional ? ("-" + p.form) : "";
    if (!dexNums.includes(modifiedDexNum)) {
        if ("formChanges" in p) {
            p.uniqueFormChanges = Array.from(new Set(p.formChanges)); // sub-forms, on the same page
        }
        dexNums.push(modifiedDexNum);
        processedList[modifiedDexNum] = p;
        p.modifiedDexNum = modifiedDexNum;
    } else {
        if (p.speciesName != "Minior") { // special exception for minior since its shields down forms all have different stats from the base form
            // any other corner cases
            const baseForm = processedList[modifiedDexNum];
            if (!("uniqueFormChanges" in baseForm && baseForm.uniqueFormChanges.includes(p.internalId))) { // ignore all form-change forms
                let isIdentical = true;
                Object.keys(p.stats).forEach((stat) => {
                    if (p.stats[stat] !== baseForm.stats[stat]) {
                        isIdentical = false;
                    }
                });
                if (!isIdentical) { // ignore all forms with identical base stats
                    baseForm.alternativePages = "alternativePages" in baseForm ? baseForm.alternativePages + 1 : 0;
                    modifiedDexNum += '_' + baseForm.alternativePages
                    dexNums.push(modifiedDexNum);
                    processedList[modifiedDexNum] = p;
                    p.modifiedDexNum = modifiedDexNum;
                }
            }
        }
    }
});

dexNums.sort((a, b) => {
   const aSplit = a.split('_');
   const bSplit = b.split('_');
   if (parseInt(aSplit[0]) - parseInt(bSplit[0]) == 0) {
       if (aSplit.length <= 1 || bSplit.length <= 1) {
           return aSplit.length - bSplit.length;
       } else {
           return ('' + aSplit[1]).localeCompare(bSplit[1]);
       }
   } else {
       return parseInt(aSplit[0]) - parseInt(bSplit[0]);
   }
});

const fs = require('fs');
fs.writeFile("data/pokemon_processed.json", JSON.stringify(processedList), (err) => {
    if (err)
        console.log(err);
});

const index = new HtmlWebpackPlugin({
    filename: "index.html",
    template: "./src/templates/index.pug",
    data: {
        pokemonList: processedList,
        dexNums: dexNums
    }
});

const pokemonHtmlPlugins = dexNums.map((modifiedDexNum) => {
    return new HtmlWebpackPlugin({
        filename: `pokemon/${modifiedDexNum}.html`,
        template: "./src/templates/pokemonEntry.pug",
        data: {
            pokemon: processedList[modifiedDexNum]
        }
    });
});

module.exports = {
    entry: "./src/code/tools.ts",
    output: {
        path: __dirname + "/build",
        filename: "index_bundle.js"
    },
    mode: "development",
    plugins: [index, ...pokemonHtmlPlugins],
    resolve: {
        extensions: ['.ts', '...'],
        fallback: {
            'fs': false
        }
    },
    resolveLoader: {
        modules: ['node_modules', path.resolve(__dirname, 'loaders')]
    },
    module: {
        rules: [
            {
                test: /\.pug$/,
                use: {
                    loader: 'simple-pug-loader',
                    options: { 
                        root: path.resolve(__dirname, 'src/templates'),
                        self: true
                    }
                }
            },
            {
                test: /\.css$/,
                use: [
                    { loader: 'style-loader' },
                    { loader: 'css-loader' }
                ]
            },
            {
                test: /\.(png|jpe?g|gif|bmp|tiff?|webp)$/,
                type: 'asset/resource',
                generator: { filename: 'img/[name]_[hash:4][ext]' }
            },
            {
                test: /\.(webm|mkv|avi|mp4|m4v)$/,
                type: 'asset/resource',
                generator: { filename: 'vid/[name]_[hash:4][ext]' }
            },
            {
                test: /\.(obj|gltf|glb|stl)$/,
                type: 'asset/resource',
                generator: { filename: 'dat/[name]_[hash:4][ext]' }
            },
            {
                test: /\.(eot|otf|ttf|woff|woff2)$/,
                type: 'asset/resource',
                generator: { filename: 'fnt/[name]_[hash:4][ext]' }
            },
            {
                test: /\.(json)$/,
                type: 'asset/source',
                generator: { filename: 'dat/[name]_[hash:4][ext]' }
            }
        ]
    }
}