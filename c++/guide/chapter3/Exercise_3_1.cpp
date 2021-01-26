 /*
 Exercise 3_1
 Create a program to calculate the square roots of the numbers
 4 12.25 0.0121
 and output them as shown opposite.Then read a number from the keyboard and
 output the square root of this number.
 To calculate the square root, use the function sqrt(), which is defined by the
 following prototype in the math.h (or cmath ) header file:
 double sqrt( double x);
 The return value of the sqrt() function is the square root of x.
 
 */
 
 #include <iostream>
 #include <cmath>
 #include <string>
 
 using namespace std;
 
 int main()
 {
 	float value1 = 4;
 	float value2 = 12.25;
 	float value3 = 0.0121;
 	
 	string s_input;
 	
 	cout << value1 << " sqrt: " << sqrt(value1) << endl;
 	cout << value2 << " sqrt: " << sqrt(value2) << endl;
 	cout << value3 << " sqrt: " << sqrt(value3) << endl;
 	
 	getline(cin, s_input);
 	float input = stof(s_input);
 	
 	cout << "Your input is: " << input << " sqrt: " << sqrt(input) << endl;
 	
 	return 0;
 }
 
