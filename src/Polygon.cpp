#include <iostream>

#include "Polygon.h"

int Polygon::polygonCount = 0;

Polygon::Polygon()
{
    std::cout << "Executing Polygon constructor (oldPolygonCount: " << polygonCount;
    polygonCount++;
    std::cout << ", newPolygonCount: " << polygonCount << ")" << std::endl;
}

Polygon::~Polygon()
{
    std::cout << "Executing Polygon destructor (oldPolygonCount: " << polygonCount;
    polygonCount--;
    std::cout << ", newPolygonCount: " << polygonCount << ")" << std::endl;
}

int Polygon::getNumberOfPolygons()
{
    return polygonCount;
}
