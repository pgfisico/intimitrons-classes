#include <iostream>

#include "Square.h"

Square::Square(double side)
        : Rectangle(side, side)
{
    std::cout << "Executing Square constructor with side: " << side << std::endl;
}

Square::~Square()
{
    std::cout << "Executing Square destructor for Square with side: " << width << std::endl;
}
