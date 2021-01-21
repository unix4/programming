// Circumference and area of circle with radius 2.5

#include <iostream>
using namespace std;

const double pi = 3.141593;

int main()
{
	double area, circle, radius = 1.5;
	
	area = pi * radius * radius;
	circle = 2 * pi * radius;
	
	cout << "\nTo Evaluate a Circle\n" << endl;
	
	cout << "Radius:        " << radius << endl
	     << "Circumference: " << circle << endl
	     << "Area:          " << area << endl;
	     
	return 0;
}
