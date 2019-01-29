#include <iostream>
#include "shape.h"
#include "circle.h"
#include "triangle.h"

using namespace std;

int main()
{
    cout << "Hello Inheritance!" << endl;

    Shape mShape;
    Circle mCircle{3, 6};
    Triangle mTriangle{6, 2};

    mShape.draw();

    mCircle.draw();
    mCircle.sharedPrint();

    mTriangle.draw();
    mTriangle.sharedPrint();

    return 0;
}
