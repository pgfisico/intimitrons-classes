#include <cmath>
#include <iostream>

#include "EquilateralTriangle.h"

EquilateralTriangle::EquilateralTriangle(double side)
        : side(side)
{
    std::cout << "Executing EquilateralTriangle constructor with side: " << side << std::endl;
}

EquilateralTriangle::~EquilateralTriangle()
{
    std::cout << "Executing EquilateralTriangle destructor with side: " << side << std::endl;
}

double EquilateralTriangle::area()
{
    return (std::sqrt(3) / 4) * std::pow(side, 2);
}
