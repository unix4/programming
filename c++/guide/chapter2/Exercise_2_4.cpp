/*Write a C++ program that two defines variables for floating-point numbers and
initializes them with the values
123.456 and 76.543
Then display the sum and the difference of these two numbers on screen.*/

#include <iostream>

using namespace std;

int main()
{
	float f1 = 123.456;
	float f2 = 76.543;
	float sum = f1 + f2;
	float dif = f1 - f2;
	
	cout << f1 << endl;
	cout << f2 << endl;
	cout << "sum: " << f1 << " + " << f2 << " = " << sum << endl;
	cout << "dif: " << f1 << " - " << f2 << " = " << dif << endl;
	
	return 0;
}
