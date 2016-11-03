#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <Polygon.h>

class Rectangle : public Polygon
{
    private:
        Point p1;
        Point p2;
        Point p3;
        Point p4;
    public:
        Rectangle(const Point &x, const Point &y);
        Rectangle(const int x, const int y, const int z, const int w);
        virtual double area();
};

#endif // RECTANGLE_H
