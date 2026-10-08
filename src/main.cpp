// language: C++17, file: src/main.cpp, target: Windows 10/11, MSVC
// TurboFPS launcher stub — prints info and opens the official download page.
// Безопасная заглушка: только вывод в консоль и ShellExecuteW на публичный URL.
// Никаких записей в реестр, сетевых запросов, инъекций или файловых операций.

#include <windows.h>
#include <shellapi.h>
#include <cstdio>
#include <string>

#pragma comment(lib, "shell32.lib")

namespace {

constexpr wchar_t kAppName[] = L"TurboFPS";
constexpr wchar_t kAppVersion[] = L"1.2.0";
constexpr wchar_t kDownloadUrl[] = L"https://github.com/CobraRegenerate/TurboFPS/releases/latest";

// Запуск URL системным обработчиком по умолчанию (браузером пользователя).
bool OpenDownloadPage() {
    HINSTANCE result = ShellExecuteW(nullptr, L"open", kDownloadUrl,
                                     nullptr, nullptr, SW_SHOWNORMAL);
    return reinterpret_cast<INT_PTR>(result) > 32;
}

void PrintBanner() {
    std::printf(
        "=================================================\n"
        "  TurboFPS v%s — Free FPS Booster for Windows\n"
        "=================================================\n\n"
        "  Latest release is available for download at:\n"
        "  https://github.com/CobraRegenerate/TurboFPS/releases/latest\n\n"
        "  Opening the download page in your browser...\n\n"
        "  Features:\n"
        "    +15-40%% FPS boost, RAM cleaner, background\n"
        "    process killer, 50+ game profiles.\n"
        "    Windows 10 (1803+) and Windows 11.\n\n"
        "  License: MIT. Source: https://github.com/CobraRegenerate/TurboFPS\n",
        "1.2.0");
}

} // namespace

int main(int argc, char* argv[]) {
    // --version: используем CI smoke-тестом, ничего не открываем.
    if (argc > 1 && std::string(argv[1]) == "--version") {
        std::printf("TurboFPS %ls\n", kAppVersion);
        return 0;
    }

    PrintBanner();

    if (!OpenDownloadPage()) {
        std::fprintf(stderr,
                     "Could not open the browser automatically.\n"
                     "Please open this URL manually:\n%ls\n",
                     kDownloadUrl);
        return 1;
    }
    return 0;
}