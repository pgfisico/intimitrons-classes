#ifndef EQUILATERAL_TRIANGLE_H_
#define EQUILATERAL_TRIANGLE_H_

#include "Polygon.h"

class EquilateralTriangle : public Polygon
{
    private:
        double side;

    public:
        EquilateralTriangle(double side);
        virtual ~EquilateralTriangle();
        double area() override;
};

#endif /* EQUILATERAL_TRIANGLE_H_ */
