#include "Window.h"
#include "GameConnectionManager.h"

#include <stdlib.h>
#include <string>
#include <vector>
#include <Windows.h>

#pragma warning(disable: 4244)

int RogueAssistant_Main(std::vector<std::string> const& args);
bool RogueAssistant_MainLoop(Window* window, void* userData);

#ifdef _DEBUG
int main(int argc, const char** argv)
{
    std::vector<std::string> args;

    for (int i = 0; i < argc; ++i)
    {
        args.push_back(std::string(argv[i]));
    }

    return RogueAssistant_Main(args);
}

#else

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PSTR lpCmdLine, int nCmdShow)
{
    std::vector<std::string> args;

    for (int i = 0; i < __argc; ++i)
    {
        std::string str(__argv[i]);
        args.push_back(str);
    }

    return RogueAssistant_Main(args);
}

#endif

#if defined(_DEBUG)
void TestEntry();
#endif

int RogueAssistant_Main(std::vector<std::string> const& args)
{
#if defined(_DEBUG)
    TestEntry();
#endif

    WindowConfig config;
    config.title = "Rogue Assistant";
    config.imGuiEnabled = false;

    Window window(config);

    if (window.Create())
    {
        GameConnectionManager::Instance().OpenListener();

        window.EnterMainLoop(RogueAssistant_MainLoop);
        if (window.Destroy())
        {
            GameConnectionManager::Instance().CloseListener();
            return 0;
        }
    }

    return 1;
}

bool RogueAssistant_MainLoop(Window* window, void* userData)
{
    GameConnectionManager::Instance().UpdateConnections();
    return true;
}