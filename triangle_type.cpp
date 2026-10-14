#include "triangle_type.h"
#include <cmath>
#include <algorithm>

std::string getTypeBySides(double a, double b, double c) {
    if (a == b && b == c) return "equilateral";
    if (a == b || b == c || a == c) return "isosceles";
    return "scalene";
}

// Обратите внимание на фигурную скобку { в конце этой строки!
std::string getTypeByAngles(double a, double b, double c) { 
    double sides[3] = {a, b, c};
    std::sort(sides, sides + 3);
    double x = sides[0], y = sides[1], z = sides[2];
    
    double z_sq = z * z;
    double xy_sq = x * x + y * y;
    
    if (std::abs(z_sq - xy_sq) < 1e-9) return "right-angled";
    if (z_sq < xy_sq) return "acute-angled";
    return "obtuse-angled";
}