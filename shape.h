#ifndef SHAPE_H
#define SHAPE_H


class Shape
{
public:
    Shape(int x = 0, int y = 0);

    void draw();

    void sharedPrint();

protected:
    int positionX{0};
    int positionY{0};
};

#endif // SHAPE_H
