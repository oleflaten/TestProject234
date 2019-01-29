#include "circle.h"
#include <iostream>

Circle::Circle(int x, int y): Shape{x, y}
{

}

void Circle::draw()
{
    //Kall opp baseklassens versjon av draw():
    Shape::draw();
    std::cout << "Circle shape at " << positionX << ", " << positionY << "\n";

}
