#include <math.h>
#include "Triangle.h"

double Triangle::getArea()
{
    double s = (this->sides[0] + this->sides[1] + this->sides[2]) / 2.0;
    double area = sqrt(s * (s - this->sides[0]) * (s - this->sides[1]) * (s - this->sides[2]));
    return area;
}
