#include <QCoreApplication>
#include <iostream>
#include "quadrilateral.h"
#include "shapeFuncs.h"
#include <math.h>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    quadrilateral quad = new quadrilateral();

    return a.exec();
}


