#include "Polygon.h"
#include "ArrayPoint.h"

int Polygon::track = 0;

Polygon::Polygon(const Point ar2[],const int tam) : points(ar2,tam)
{
    ++track;
}

Polygon::Polygon(ArrayPoint &pv) : points(pv)
{
    ++track;
}

Polygon::~Polygon()
{
    --track;
}

int Polygon::getNumPolygons() const
{
    return track;
}

int Polygon::getNumSides() const
{
    return points.getSize();
}





