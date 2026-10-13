#include <iostream>
#include "triangle_existence.h"

int main() {
    double a, b, c;
    std::cout << "Введите длины трех сторон треугольника: ";
    std::cin >> a >> b >> c;
    
    if (!approved(a, b, c)) {
        std::cout << "Треугольник не существует." << std::endl;
        return 0;
    }
    
    else { std::cout << "Треугольник существует." << std::endl;}
    return 0;
}