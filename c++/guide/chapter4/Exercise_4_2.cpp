/*Exercise 2
Formulate statements to perform the following:
a. Left-justify the number 0.123456 in an output field with a width of 15.
b. Output the number 23.987 as a fixed point number rounded to two decimal
places, right-justifying the output in a field with a width of 12.
c. Output the number –123.456 as an exponential and with four decimal
spaces. How useful is a field width of 10?
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	double d1 = 0.123456;
	double d2 = 23.987;
	double d3 = -123.456;
	
	cout <<  left << setw(15) << d1 << endl;
	cout <<  right << fixed << setprecision(2) << setw(12) << d2 << endl;
	cout << scientific << setprecision(4)  << d3 << endl;
	return 0;
	
}
