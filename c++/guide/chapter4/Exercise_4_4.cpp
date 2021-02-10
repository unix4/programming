/*
Exercise 4
Write a C++ program that reads any given character code (a positive integer)
from the keyboard and displays the corresponding character and the character
code as a decimal, an octal, and a hexadecimal on screen.
*/

#include <iostream>
#include <iomanip>

using namespace std; 

int main()
{
	unsigned int code;
	
	cout << "Enter character code: " << endl;
	cin >> code;
	
	cout << "Decimal: " << code << endl;
	cout << "Octal: " << oct << code << endl;
	cout << "Hexadecimal: " << hex << code << endl;
	
	return 0;
}
