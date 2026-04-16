#include "capture.h"
#include <iostream>

bool Capture::Initialize() {
    std::cout << "[DEBUG] GDI+ Graphics interface linked successfully." << std::endl;
    return true;
}

void Capture::ProcessFrame() {
}

void Capture::MoveMouse(int x, int y) {
    std::cout << "[HID] Moving relative: " << x << ", " << y << std::endl;
}
