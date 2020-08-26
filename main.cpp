#include <iostream>
#include <math.h>

using namespace std;

static double getArea(double s1, double s2, double s3)
{
  double s = (s1 + s2 + s3) / 2.0;
  double area = sqrt(s * (s - s1) * (s - s2) * (s - s3));
  return area;
}

int main()
{
  cout << "Area 1: " << getArea(10.0, 10.0, 10.0) << endl;
  cout << "Area 2: " << getArea(20.0, 20.0, 20.0) << endl;
  cout << "Area 3: " << getArea(10.0, 20.0, 29.0) << endl;
  return 0;
}
