#ifndef TRIANGLE_H
#define TRIANGLE_H
#include <ArrayPoint.h>
#include <Polygon.h>

class Triangle : public Polygon
{
    private:
        Point p1;
        Point p2;
        Point p3;
    public:
        Triangle(const Point &p1, const Point &p2, const Point &p3);
        virtual double area();
};

#endif // TRIANGLE_H
