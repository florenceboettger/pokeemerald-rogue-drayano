using Newtonsoft.Json.Linq;
using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Net;
using System.Net.Http;
using System.Text;
using System.Threading.Tasks;

namespace PokemonDataGenerator
{
	public static class MonPresetGenerator
	{
		private class PokemonPreset
		{
			public List<string> CategorySources = new List<string>();
			public List<string> Moves = new List<string>();
			public string HiddenPowerType = "NONE";
			public string Ability;
			public string Item;
			public string Name;

			public bool ContainsHiddenPower
			{
				get => Moves.Where((m) => m.StartsWith("Hidden Power", StringComparison.CurrentCultureIgnoreCase)).Any();
			}

			public bool IsCompatible(PokemonPreset otherPreset)
			{
				return HiddenPowerType == otherPreset.HiddenPowerType
					&& Ability == otherPreset.Ability
					&& Item == otherPreset.Item
					&& Enumerable.SequenceEqual(Moves, otherPreset.Moves);
			}
		}

		private class PokemonData
		{
			public string PokemonName;
			public List<PokemonPreset> Presets = new List<PokemonPreset>();
			public List<PokemonPreset> AdditionalPresets = new List<PokemonPreset>();
			public List<PokemonPreset> ObsoletePresets = new List<PokemonPreset>();
			public HashSet<string> ContainedMoves = new HashSet<string>();
			public HashSet<string> AdditionalContainedMoves = new HashSet<string>();

			public void AppendMove(string move)
            {
				ContainedMoves.Add(move);
			}

			public void AppendAdditionalMove(string move)
			{
				AdditionalContainedMoves.Add(move);
			}
		}

		private static Dictionary<string, PokemonData> s_PerPokemonData = new Dictionary<string, PokemonData>();

		private static PokemonData FindOrCreate(string pokemon)
		{
			PokemonData output;

			pokemon = FormatKeyword(pokemon).ToLower().Trim();
			if (!s_PerPokemonData.TryGetValue(pokemon, out output))
			{
				output = new PokemonData();
				output.PokemonName = pokemon;
				s_PerPokemonData.Add(pokemon, output);
			}

			return output;
		}

		private static string FormatKeyword(string keyword)
		{
			return keyword.Trim()
				.Replace(".", "")
				.Replace("’", "")
				.Replace("'", "")
				.Replace("%", "")
				.Replace(":", "")
				.Replace(" ", "_")
				.Replace("-", "_")
				.Replace("é", "e")
				.ToUpper();
		}

		private static void AppendPreset(PokemonPreset preset, List<PokemonPreset> presetList, string category)
		{
			foreach (var otherPreset in presetList)
			{
				if (otherPreset.IsCompatible(preset))
				{
					otherPreset.CategorySources.Add(category);
					return;
				}
			}

			preset.CategorySources.Add(category);
			presetList.Add(preset);
		}

		private static void ReplacePreset(PokemonData pokemonData, PokemonPreset newPreset, string categoryName)
        {
			for (int i = pokemonData.Presets.Count - 1; i >= 0; i--)
            {
				var preset = pokemonData.Presets[i];
				if (preset.Name == newPreset.Name && preset.CategorySources.Contains(categoryName))
                {
					pokemonData.ObsoletePresets.Add(preset);
					pokemonData.Presets.RemoveAt(i);
                }
            }
        }

		private static string ModifyName(string pokemonName)
        {
			if (pokemonName.Equals("Eevee-starter", StringComparison.CurrentCultureIgnoreCase))
				return null;

			if (pokemonName.StartsWith("Deoxys", StringComparison.CurrentCultureIgnoreCase))
			{
				// Only use the normal form, as others don't exist in emerald for AI
				if (pokemonName.Equals("Deoxys", StringComparison.CurrentCultureIgnoreCase))
					pokemonName = "Deoxys";
				else
					return null;
			}

			if (pokemonName.StartsWith("Darmanitan-Zen", StringComparison.CurrentCultureIgnoreCase))
				pokemonName = "Darmanitan-Zen-Mode" + pokemonName.Substring("Darmanitan Zen".Length);

			if (pokemonName.Equals("Darmanitan-Galar-Zen", StringComparison.CurrentCultureIgnoreCase))
				pokemonName = "Darmanitan-Zen-Mode-Galar";

			if (pokemonName.Equals("Meowstic-f", StringComparison.CurrentCultureIgnoreCase))
				pokemonName = "Meowstic-female";

			if (pokemonName.Equals("Indeedee-f", StringComparison.CurrentCultureIgnoreCase))
				pokemonName = "Indeedee-female";

			if (pokemonName.StartsWith("Calyrex-", StringComparison.CurrentCultureIgnoreCase))
				pokemonName += "-rider";

			if (pokemonName.EndsWith("Urshifu-rapid-strike", StringComparison.CurrentCultureIgnoreCase))
				pokemonName += "-style";

			if (pokemonName.EndsWith("Wormadam-Sandy", StringComparison.CurrentCultureIgnoreCase))
				pokemonName += "-cloak";
			if (pokemonName.EndsWith("Wormadam-Trash", StringComparison.CurrentCultureIgnoreCase))
				pokemonName += "-cloak";

			if (pokemonName.EndsWith("Alola", StringComparison.CurrentCultureIgnoreCase))
				pokemonName += "n";
			if (pokemonName.EndsWith("Galar", StringComparison.CurrentCultureIgnoreCase))
				pokemonName += "ian";

			return pokemonName;
		}

		private static void AddSets(string pokemonName, string categoryName, JObject sets, bool useGen3Format, bool additionalSets)
        {
			/*if (pokemonName.Equals("Eevee-starter", StringComparison.CurrentCultureIgnoreCase))
				return;

			if (pokemonName.StartsWith("Deoxys", StringComparison.CurrentCultureIgnoreCase))
			{
				// Only use the normal form, as others don't exist in emerald for AI
				if (pokemonName.Equals("Deoxys", StringComparison.CurrentCultureIgnoreCase))
					pokemonName = "Deoxys";
				else
					return;
			}

			if (pokemonName.StartsWith("Darmanitan-Zen", StringComparison.CurrentCultureIgnoreCase))
				pokemonName = "Darmanitan-Zen-Mode" + pokemonName.Substring("Darmanitan Zen".Length);

			if (pokemonName.Equals("Darmanitan-Galar-Zen", StringComparison.CurrentCultureIgnoreCase))
				pokemonName = "Darmanitan-Zen-Mode-Galar";

			if (pokemonName.Equals("Meowstic-f", StringComparison.CurrentCultureIgnoreCase))
				pokemonName = "Meowstic-female";

			if (pokemonName.Equals("Indeedee-f", StringComparison.CurrentCultureIgnoreCase))
				pokemonName = "Indeedee-female";

			if (pokemonName.StartsWith("Calyrex-", StringComparison.CurrentCultureIgnoreCase))
				pokemonName += "-rider";

			if (pokemonName.EndsWith("Urshifu-rapid-strike", StringComparison.CurrentCultureIgnoreCase))
				pokemonName += "-style";

			if (pokemonName.EndsWith("Wormadam-Sandy", StringComparison.CurrentCultureIgnoreCase))
				pokemonName += "-cloak";
			if (pokemonName.EndsWith("Wormadam-Trash", StringComparison.CurrentCultureIgnoreCase))
				pokemonName += "-cloak";

			if (pokemonName.EndsWith("Alola", StringComparison.CurrentCultureIgnoreCase))
				pokemonName += "n";
			if (pokemonName.EndsWith("Galar", StringComparison.CurrentCultureIgnoreCase))
				pokemonName += "ian";*/

			pokemonName = ModifyName(pokemonName);

			if (pokemonName == null)
            {
				return;
            }

			var pokemonData = FindOrCreate(pokemonName);

			foreach (var setKvp in sets)
			{
				PokemonPreset preset = new PokemonPreset();
				var set = (JObject)setKvp.Value;
				string setName = setKvp.Key;
				preset.Name = setName;

				foreach (var move in set["moves"])
				{
					string moveString = move.ToString();
					if (moveString.StartsWith("Hidden Power", StringComparison.CurrentCultureIgnoreCase)) // Not tracking the Hidden power type
					{
						preset.HiddenPowerType = moveString.Substring("Hidden Power".Length).Trim().ToUpper();
						moveString = "Hidden Power";
					}
					else if (useGen3Format)
					{
						if (moveString.Equals("High Jump Kick", StringComparison.CurrentCultureIgnoreCase))
						{
							moveString = "Hi Jump Kick";
						}
						else if (moveString.Equals("Feint Attack", StringComparison.CurrentCultureIgnoreCase))
						{
							moveString = "Faint Attack";
						}
					}
					else
					{
					}

					preset.Moves.Add(moveString);
					if (additionalSets && !pokemonData.ContainedMoves.Contains(moveString))
						pokemonData.AppendAdditionalMove(moveString);
					else
						pokemonData.AppendMove(moveString);
				}

				preset.Ability = null;
				if (set.ContainsKey("ability"))
				{
					preset.Ability = set["ability"].ToString();

					if (preset.Ability.Equals("As One (GLASTRIER)", StringComparison.CurrentCultureIgnoreCase))
						preset.Ability = null;
					else if (preset.Ability.Equals("As One (SPECTRIER)", StringComparison.CurrentCultureIgnoreCase))
						preset.Ability = null;
				}

				preset.Item = null;
				if (set.ContainsKey("item"))
				{
					preset.Item = set["item"].ToString();

					if (!useGen3Format)
					{
						if (preset.Item.Equals("Stick", StringComparison.CurrentCultureIgnoreCase))
							preset.Item = "Leek";
					}
				}

				if (additionalSets)
				{
					AppendPreset(preset, pokemonData.AdditionalPresets, categoryName);
					ReplacePreset(pokemonData, preset, categoryName);
				}
				else
					AppendPreset(preset, pokemonData.Presets, categoryName);
			}
		}

		public static void AdditionalSetsFromPath(string path, bool useGen3Format)
        {
			using (StreamReader r = new StreamReader(path))
			{
				 AdditionalSetsFromJson(r.ReadToEnd(), useGen3Format);
			}
		}

		public static void AdditionalSetsFromJson(string jsonStr, bool useGen3Format)
        {
			JObject library = JObject.Parse(jsonStr);

			foreach (var pokemonKvp in library)
            {
				string pokemonName = pokemonKvp.Key;
				var pokemonSets = (JObject)pokemonKvp.Value;
				if (pokemonSets.ContainsKey("movesets"))
				{
					var movesets = (JObject)pokemonSets["movesets"];
					foreach (var categoryKvp in movesets)
					{
						string categoryName = categoryKvp.Key;
						var sets = (JObject)categoryKvp.Value;

						AddSets(pokemonName, categoryName, sets, useGen3Format, true);
					}
				}

				pokemonName = ModifyName(pokemonName);

				if (pokemonName == null)
                {
					return;
                }

				var pokemonData = FindOrCreate(pokemonName);

				if (pokemonSets.ContainsKey("extra_moves"))
					foreach (var move in pokemonSets["extra_moves"])
						if (!pokemonData.ContainedMoves.Contains(move.ToString()))
							pokemonData.AppendAdditionalMove(move.ToString());
            }

        }

		public static void GenerateFromURL(string url, bool useGen3Format)
		{
			using (HttpClient web = new HttpClient())
			{
				var task = web.GetStringAsync(url);
				task.Wait();
				GenerateFromJson(task.Result, useGen3Format);
			}
		}

		public static void GenerateFromJson(string jsonStr, bool useGen3Format)
		{
			JObject library = JObject.Parse(jsonStr);

			foreach (var categoryKvp in library)
			{
				var category = (JObject)categoryKvp.Value;

				if (categoryKvp.Key.EndsWith("hackmons", StringComparison.CurrentCultureIgnoreCase) ||
					categoryKvp.Key.EndsWith("cap", StringComparison.CurrentCultureIgnoreCase))
					continue;

				string categoryName = categoryKvp.Key;
				Console.WriteLine($"Including: '{categoryName}'");

				// There is stats too, although they don't seem to be as populated?
				var entries = (JObject)(category.ContainsKey("dex") ? category["dex"] : category["stats"]);

				foreach (var pokemonKvp in entries)
				{
					string pokemonName = pokemonKvp.Key;
					var sets = (JObject)pokemonKvp.Value;

					AddSets(pokemonName, categoryName, sets, useGen3Format, false);
				}
			}
		}

		private static void AppendPresetString(PokemonPreset preset, HashSet<string> containedCategories, StringBuilder upperBlock)
        {
			foreach (var c in preset.CategorySources)
				containedCategories.Add(c);
			/*foreach (var m in preset.Moves)
				containedMoves.Add(m);*/

			upperBlock.AppendLine("\t{");

			upperBlock.AppendLine($"\t\t.flags = {string.Join(" | ", preset.CategorySources.Select(str => FormatKeyword("MON_FLAGS_" + str)))},");

			upperBlock.AppendLine($"\t\t.hiddenPowerType = TYPE_{FormatKeyword(preset.HiddenPowerType)},");

			if (preset.Ability == null || preset.Ability.Equals("No Ability", StringComparison.CurrentCultureIgnoreCase))
				upperBlock.AppendLine($"\t\t.abilityNum = ABILITY_NONE,");
			else
				upperBlock.AppendLine($"\t\t.abilityNum = ABILITY_{FormatKeyword(preset.Ability)},");
			if (preset.Item == null)
				upperBlock.AppendLine($"\t\t.heldItem = ITEM_NONE,");
			else
				upperBlock.AppendLine($"\t\t.heldItem = ITEM_{FormatKeyword(preset.Item)},");

			upperBlock.Append($"\t\t.moves = {{ ");

			for (int i = 0; i < 4; ++i)
			{
				if (i != 0)
					upperBlock.Append($", ");

				if (i < preset.Moves.Count)
					upperBlock.Append($"MOVE_{FormatKeyword(preset.Moves[i])}");
				else
					upperBlock.Append($"MOVE_NONE");
			}

			upperBlock.AppendLine($"}}");

			upperBlock.AppendLine("\t},");
		}

		public static void ExportToHeader(string filePath)
		{
			StringBuilder upperBlock = new StringBuilder();
			StringBuilder lowerBlock = new StringBuilder();

			upperBlock.AppendLine("// == WARNING ==");
			upperBlock.AppendLine("// DO NOT EDIT THIS FILE");
			upperBlock.AppendLine("// This file was automatically generated by PokemonDataGenerator\n");

			lowerBlock.AppendLine("const struct RogueMonPresetCollection gPresetMonTable[NUM_SPECIES] =");
			lowerBlock.AppendLine("{");

			foreach (var pokemon in s_PerPokemonData.Values)
			{
				bool newPokemon = pokemon.Presets.Count + pokemon.ObsoletePresets.Count == 0 && pokemon.AdditionalPresets.Count > 0;
				if (newPokemon)
					upperBlock.AppendLine("#ifdef ROGUE_DRAYANO");
				upperBlock.AppendLine($"static const struct RogueMonPreset sRoguePresets_{FormatKeyword(pokemon.PokemonName)}[] = ");
				upperBlock.AppendLine("{");

				IEnumerable<PokemonPreset> presets = pokemon.Presets;
				//if (presets.Where((p) => !p.ContainsHiddenPower).Any())
				//{
				//	// We have presets which don't contain hidden power so prefer those
				//	// As we're not controlling the hidden power typing
				//	presets = presets.Where((p) => !p.ContainsHiddenPower);
				//}

				HashSet<string> containedCategories = new HashSet<string>();
				HashSet<string> additionalCategories = new HashSet<string>();
				HashSet<string> obsoleteCategories = new HashSet<string>();
				//HashSet<string> containedMoves = new HashSet<string>();

				foreach (var preset in pokemon.Presets)
				{
					AppendPresetString(preset, containedCategories, upperBlock);
				}

				if (pokemon.ObsoletePresets.Count > 0)
                {
					upperBlock.AppendLine("#ifndef ROGUE_DRAYANO");
					foreach (var preset in pokemon.ObsoletePresets)
					{
						AppendPresetString(preset, obsoleteCategories, upperBlock);
					}
					upperBlock.AppendLine("#endif");
				}

				if (pokemon.AdditionalPresets.Count > 0)
                {
					if (!newPokemon)
						upperBlock.AppendLine("#ifdef ROGUE_DRAYANO");
					foreach (var preset in pokemon.AdditionalPresets)
                    {
						AppendPresetString(preset, additionalCategories, upperBlock);
                    }
					if (!newPokemon)
						upperBlock.AppendLine("#endif");
                }

				upperBlock.AppendLine("};");
				if (newPokemon)
					upperBlock.AppendLine("#endif");
				upperBlock.AppendLine("");

				// Moveset
				if (newPokemon)
					upperBlock.AppendLine("#ifdef ROGUE_DRAYANO");
				upperBlock.AppendLine($"static const u16 sRoguePresets_{FormatKeyword(pokemon.PokemonName)}_Moveset[] = ");
				upperBlock.AppendLine("{");
				//foreach(var move in containedMoves)
				foreach (var move in pokemon.ContainedMoves)
					upperBlock.AppendLine($"\tMOVE_{FormatKeyword(move)},");

				if (pokemon.AdditionalContainedMoves.Count > 0)
				{
					if (!newPokemon)
						upperBlock.AppendLine("#ifdef ROGUE_DRAYANO");
					foreach (var move in pokemon.AdditionalContainedMoves)
						upperBlock.AppendLine($"\tMOVE_{FormatKeyword(move)},");
					if (!newPokemon)
                        upperBlock.AppendLine("#endif");
				}

				upperBlock.AppendLine("};");
				if (newPokemon)
					upperBlock.AppendLine("#endif");
				upperBlock.AppendLine("");


				if (newPokemon)
					lowerBlock.AppendLine("#ifdef ROGUE_DRAYANO");
				lowerBlock.AppendLine($"\t[SPECIES_{FormatKeyword(pokemon.PokemonName)}] = {{");

				if (FormatKeyword(pokemon.PokemonName) == "FLAPPLE")
				{
					int i = 0;
				}

				obsoleteCategories.UnionWith(containedCategories);
				HashSet<string> newCategories = new HashSet<string>(additionalCategories);
				newCategories.ExceptWith(obsoleteCategories);
				if (newCategories.Count > 0)
                {
					if (!newPokemon)
					{
						lowerBlock.AppendLine("#ifndef ROGUE_DRAYANO");
						obsoleteCategories.UnionWith(containedCategories);
						lowerBlock.AppendLine($"\t\t.flags = {string.Join(" | ", obsoleteCategories.Select(str => FormatKeyword("MON_FLAGS_" + str)))},");
						lowerBlock.AppendLine("#endif");
						lowerBlock.AppendLine("#ifdef ROGUE_DRAYANO");
					}
					additionalCategories.UnionWith(containedCategories);
					lowerBlock.AppendLine($"\t\t.flags = {string.Join(" | ", additionalCategories.Select(str => FormatKeyword("MON_FLAGS_" + str)))},");
					if (!newPokemon)
						lowerBlock.AppendLine("#endif");
				}
				else
					lowerBlock.AppendLine($"\t\t.flags = {string.Join(" | ", obsoleteCategories.Select(str => FormatKeyword("MON_FLAGS_" + str)))},");


				lowerBlock.AppendLine($"\t\t.presetCount = ARRAY_COUNT(sRoguePresets_{FormatKeyword(pokemon.PokemonName)}),");
				lowerBlock.AppendLine($"\t\t.presets = sRoguePresets_{FormatKeyword(pokemon.PokemonName)},");
				lowerBlock.AppendLine($"\t\t.movesCount = ARRAY_COUNT(sRoguePresets_{FormatKeyword(pokemon.PokemonName)}_Moveset),");
				lowerBlock.AppendLine($"\t\t.moves = sRoguePresets_{FormatKeyword(pokemon.PokemonName)}_Moveset,");
				lowerBlock.AppendLine("\t},");
				if (newPokemon)
					lowerBlock.AppendLine("#endif");
				lowerBlock.AppendLine("");
			}

			lowerBlock.AppendLine("};");

			string fullStr = upperBlock.ToString() + "\n" + lowerBlock.ToString();
			File.WriteAllText(filePath, fullStr);

			Console.WriteLine($"Output to '{filePath}'");
		}
	}
}
