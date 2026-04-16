#ifndef CAPTURE_H
#define CAPTURE_H

#include <windows.h>

namespace Capture {
    bool Initialize();
    void ProcessFrame();
    void MoveMouse(int x, int y);
}

#endif
