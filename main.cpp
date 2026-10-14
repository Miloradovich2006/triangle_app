#include <iostream>
#include "triangle_existence.h"
#include "triangle_perimeter.h"
#include "triangle_area.h"
#include "triangle_type.h"

int main() {
    double a, b, c;
    std::cout << "Enter the sides: ";
    std::cin >> a >> b >> c;
    
    if (!approved(a, b, c)) {
        std::cout << "The triangle does not exist." << std::endl;
        return 0;
    }
    
    else { 
        std::string typeAngles = getTypeByAngles(a, b, c);
        std::string typeSides = getTypeBySides(a, b, c);
        std::cout << "The triangle exists, he is " << typeAngles << "(and " << typeSides << ")" << std::endl;}

    std::cout << "Perimeter: " << perimeter(a, b, c) << std::endl;
    std::cout << "Area: " << area(a, b, c) << std::endl;
    return 0;
}