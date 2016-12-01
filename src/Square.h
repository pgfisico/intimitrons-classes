#ifndef SQUARE_H_
#define SQUARE_H_

#include "Rectangle.h"

class Square : public Rectangle
{
    public:
        Square(double side);
        virtual ~Square();
};

#endif /* SQUARE_H_ */
