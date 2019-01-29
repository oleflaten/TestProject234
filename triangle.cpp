#include "triangle.h"
#include <iostream>

Triangle::Triangle(int x, int y): Shape{x, y}
{

}

void Triangle::draw()
{
    std::cout << "Triangle shape at " << positionX << ", " << positionY << "\n";
}
