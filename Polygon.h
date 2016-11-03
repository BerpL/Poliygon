#ifndef POLYGON_H
#define POLYGON_H
#include <ArrayPoint.h>


class Polygon
{
    private:
        ArrayPoint points;
        static int track;
    public:
        Polygon(const Point points[],const int mysize);
        Polygon(ArrayPoint &pv);
        ~Polygon();
        virtual double area() const = 0;
        int getNumPolygons() const;
        int getNumSides() const;
        const ArrayPoint *getPoints() const {return &points;}
};

#endif // POLYGON_H
