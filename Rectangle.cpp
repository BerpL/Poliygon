#include "Rectangle.h"
#include <math.h>
#include <ArrayPoint.h>

Point constructorPoints[4];

Point *updateConstructorPoints(const Point &p1, const Point &p2, const Point &p3, const Point &p4 = Point(0,0)){
	constructorPoints[0] = p1;
	constructorPoints[1] = p2;
	constructorPoints[2] = p3;
	constructorPoints[3] = p4;
	return constructorPoints;
}

//Rectangle::Rectangle(const Point &p1, const Point &p2) : Polygon(updateConstructorPoints(p1, Point(p1.get_x(), p2.get_y()), p2, Point(p2.get_x(), p1.get_y()) ), 4){}

Rectangle::Rectangle(const int p1x, const int p1y, const int p2x, const int p2y) : Polygon(updateConstructorPoints(Point(p1x, p1y), Point(p1x, p2y),Point(p2x, p2y), Point(p2x, p1y) ), 4){}

double Rectangle::area(){

	double base = sqrt(pow((p1.get_x()+p4.get_x()),2)+pow((p1.get_y()+p4.get_y()),2));
    double altura = sqrt(pow((p1.get_x()+p3.get_x()),2)+pow((p1.get_y()+p3.get_y()),2));
    double res = base*altura;
    return res;
}
