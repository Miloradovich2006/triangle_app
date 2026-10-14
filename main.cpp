#include <iostream>
#include "triangle_existence.h"
#include "triangle_perimeter.h"
#include "triangle_area.h"

int main() {
    double a, b, c;
    std::cout << "Введите длины трех сторон треугольника: ";
    std::cin >> a >> b >> c;
    
    if (!approved(a, b, c)) {
        std::cout << "The triangle does not exist." << std::endl;
        return 0;
    }
    
    else { std::cout << "The triangle exists." << std::endl;}

    std::cout << "Perimeter: " << perimeter(a, b, c) << std::endl;
    std::cout << "Area: " << area(a, b, c) << std::endl;
    return 0;
}