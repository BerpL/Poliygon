#include "Triangle.h"
#include "Rectangle.cpp"

Triangle::Triangle(const Point &x, const Point &y, const Point &z) : Polygon(updateConstructorPoints(p1,p2,p3),3) {}

double Triangle::area() {
    double lado1 = sqrt(pow((p1.get_x()+p2.get_x()),2)+pow((p1.get_y()+p2.get_y()),2));
    double lado2 = sqrt(pow((p2.get_x()+p3.get_x()),2)+pow((p2.get_y()+p3.get_y()),2));
    double lado3 = sqrt(pow((p1.get_x()+p3.get_x()),2)+pow((p1.get_y()+p3.get_y()),2));
    double sp = (lado1+lado2+lado3)/2;
    double res = sqrt(sp*(sp-lado1)*(sp-lado2)*(sp-lado3));
    return res;
}
