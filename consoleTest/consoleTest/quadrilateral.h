#include "shapeFuncs.h"

#ifndef QUADRILATERAL_H
#define QUADRILATERAL_H

class quadrilateral
{
public:
    quadrilateral();
    double getHeight();
    double getWidth();

private:
    double height;
    double width;
    point A, B, C, D;
};

#endif // QUADRILATERAL_H
