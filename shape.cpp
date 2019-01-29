#include "shape.h"
#include <iostream>

Shape::Shape(int x, int y): positionX{x}, positionY{y}
{

}

void Shape::draw()
{
    std::cout << "Basic shape\n";
}

void Shape::sharedPrint()
{
    std::cout << "This can do common stuff\n";
}

