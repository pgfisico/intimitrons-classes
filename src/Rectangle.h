#ifndef RECTANGLE_H_
#define RECTANGLE_H_

#include "Polygon.h"

class Rectangle : public Polygon
{
    protected:
        double length;
        double width;

    public:
        Rectangle(double length, double width);
        virtual ~Rectangle();
        void setLength(double length);
        void setWidth(double width);
        double area() override;
};

#endif /* RECTANGLE_H_ */
