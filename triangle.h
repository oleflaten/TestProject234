#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "shape.h"

class Triangle : public Shape
{
public:
    Triangle(int x = 0, int y = 0);

    void draw();
};

#endif // TRIANGLE_H
