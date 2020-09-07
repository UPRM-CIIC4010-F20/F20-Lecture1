#include <iostream>
#include <math.h>

#include "Triangle.h"

using namespace std;

// static double getArea(double s1, double s2, double s3)
// {
//   double s = (s1 + s2 + s3) / 2.0;
//   double area = sqrt(s * (s - s1) * (s - s2) * (s - s3));
//   return area;
// }

// static bool largerThan(Triangle t1, Triangle t2)
// {
//    // Determine if first triangle is larger than the second

// }

// static double sumAreas(Triangle triangle[])
// {
//   // Code to sum the areas of the Triangle's in the array

// }


int main()
{
 
  // Here we are testing some functions created in class

  Triangle *t1 = new Triangle(10.0, 10.0, 10.0);
  cout << "Area 1: " << t1->getArea() << endl;
  Triangle *t2 = new Triangle(20.0, 20.0, 20.0);
  cout << "Area 2: " << t2->getArea() << endl;
  Triangle *t3 = new Triangle(10.0, 20.0, 29.0);
  cout << "Area 3: " << t3->getArea() << endl;

  Triangle *triangleList[] = { t1, t2, t3 };
  cout << "Area total: " << Triangle::sumAreas(triangleList, 3) << endl;

  t1->enlarge(3);
  cout << "Area 1 Enlarged: " << t1->getArea() << endl;

  t1->enlarge();
  cout << "Area 1 Enlarged: " << t1->getArea() << endl;


  cout << "t1 is equilateral ? " << (Triangle::isEquilateral(t1) ? "true" : "false") << endl;

  return 0;
}
