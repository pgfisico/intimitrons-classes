#include <iostream>

#include "Rectangle.h"

Rectangle::Rectangle(double length, double width)
        : length(length), width(width)
{
    std::cout << "Executing Rectangle constructor with length: " << length << ", width: " << width
            << std::endl;
}

Rectangle::~Rectangle()
{
    std::cout << "Executing Rectangle destructor for Rectangle with length: " << length
            << ", width: " << width << std::endl;
}

void Rectangle::setLength(double length)
{
    this->length = length;
}

void Rectangle::setWidth(double width)
{
    this->width = width;
}

double Rectangle::area()
{
    return length * width;
}
