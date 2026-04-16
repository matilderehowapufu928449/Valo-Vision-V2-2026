#include <vector>
#include <cmath>

struct Pixel { unsigned char r, g, b; };

bool IsTargetColor(Pixel p) {
    if (p.r > 200 && p.g < 50 && p.b > 200) return true;
    return false;
}

void ApplySmoothing(int& dx, int& dy, float smoothing_factor) {
    dx = static_cast<int>(dx / smoothing_factor);
    dy = static_cast<int>(dy / smoothing_factor);
}
