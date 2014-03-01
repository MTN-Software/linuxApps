#include "quadrilateral.h"
#include "shapeFuncs.h"
#include <iostream>
quadrilateral::quadrilateral()
{
    double inX, inY;
    std::cout << "Enter the following:\n\n";
    std::cout << "Point A: x = ";
    std::cin >> inX;
    std::cout << "Point A: y = ";
    std::cin >> inY;
    A.in_point(inX, inY);

    std::cout << "Enter the following:\n\n";
    std::cout << "Point B: x = ";
    std::cin >> inX;
    std::cout << "Point B: y = ";
    std::cin >> inY;
    B.in_point(inX, inY);

    std::cout << "Enter the following:\n\n";
    std::cout << "Point C: x = ";
    std::cin >> inX;
    std::cout << "Point C: y = ";
    std::cin >> inY;
    C.in_point(inX, inY);

    std::cout << "Enter the following:\n\n";
    std::cout << "Point D: x = ";
    std::cin >> inX;
    std::cout << "Point D: y = ";
    std::cin >> inY;
    D.in_point(inX, inY);

}

double quadrilateral::getHeight()
{
    // There has to be a better way to do this
    // What I am trying to do is find which points are aligned on the y axis by finding if they share the same x coord

    bool AB, BC, CD, AC, BD, AD;
    AB = A.x == B.x ? true : false;
    BC = B.x == C.x ? true : false;
    CD = C.x == D.x ? true : false;
    AC = A.x == C.x ? true : false;
    BD = B.x == D.x ? true : false;
    AD = A.x == D.x ? true : false;

    switch (true) {
    case AB:
        height = A.y - B.y;
        break;
    case BC:
        height = B.y - C.y;
        break;
    case CD:
        height = C.y - D.y;
        break;
    case AC:
        height = A.y - C.y;
        break;
    case BD:
        height = B.y - D.y;
        break;
    case AD:
        height = A.y - D.y;
        break;
    default:
        break;
    }
    return height;
}

double quadrilateral::getWidth()
{

}
