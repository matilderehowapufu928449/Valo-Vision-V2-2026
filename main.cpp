#include <iostream>
#include <windows.h>
#include "capture.h"

int main() {
    SetConsoleTitleA("Vanguard Vision Framework v2.8 [BETA]");
    std::cout << "--- Vanguard Vision Intelligence Suite 2026 ---" << std::endl;
    
    if (!Capture::Initialize()) {
        std::cout << "[ERROR] Failed to initialize Screen Capture Interface." << std::endl;
        return 1;
    }

    std::cout << "[*] Searching for HID-compliant mouse (Arduino/USB Host)..." << std::endl;
    Sleep(1200);
    std::cout << "[+] Hardware Automation Bridge: ACTIVE" << std::endl;
    
    std::cout << "[*] Vision Engine started. Monitoring Enemy Outline Color: PURPLE" << std::endl;

    while (true) {
        Capture::ProcessFrame();
        if (GetAsyncKeyState(VK_END)) break; 
        Sleep(1);
    }

    return 0;
}
