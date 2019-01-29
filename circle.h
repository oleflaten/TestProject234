#ifndef CIRCLE_H
#define CIRCLE_H
#include "shape.h"

class Circle : public Shape
{
public:
    Circle(int x = 0, int y = 0);

    void draw();
};

#endif // CIRCLE_H
