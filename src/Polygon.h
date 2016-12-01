#ifndef POLYGON_H_
#define POLYGON_H_

class Polygon
{
    private:
        static int polygonCount;

    public:
        Polygon();
        virtual ~Polygon();
        virtual double area() = 0;
        static int getNumberOfPolygons();
};

#endif /* POLYGON_H_ */
