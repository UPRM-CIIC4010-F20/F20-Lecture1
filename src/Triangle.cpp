#include <math.h>
#include "Triangle.h"

double Triangle::getArea()
{
    double s = (this->side1 + this->side2 + this->side3) / 2.0;
    double area = sqrt(s * (s - this->side1) * (s - this->side2) * (s - this->side3));
    return area;
}
