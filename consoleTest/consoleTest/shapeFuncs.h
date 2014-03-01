#ifndef SHAPEFUNCS_H
#define SHAPEFUNCS_H
#include <iostream>
#include <math.h>

struct point
{
    double x;
    double y;
    void in_point(double inX, double inY)
    {
        x = inX;
        y = inY;
    }
};

double slope(point lower, point upper)
{
    double delta_X = upper.x - lower.x;
    double delta_Y = upper.y - lower.y;
    double slope = delta_Y / delta_X;
    return slope;
}


double distance(point lower, point upper)
{
    double delta_X = upper.x - lower.x;
    double delta_Y = upper.y - lower.y;
    delta_X = pow(delta_X, 2);
    delta_Y = pow(delta_Y, 2);
    double dist = sqrt((delta_X - delta_Y));
    return dist;
}

#endif // SHAPEFUNCS_H
