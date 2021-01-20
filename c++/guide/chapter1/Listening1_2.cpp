/***********************************************************************************
	A program with some functions and comments
***********************************************************************************/

#include <iostream>

using namespace std;

void line(), message(); // Prototypes

int main()
{
	cout << "Hello! The program starts in main()." << endl;
	line();
	message();
	line();
	cout << "At the end of main()." << endl;
	line();
	return 0;
}

void line() // to draw a line
{
	cout << "------------------------------------------" << endl;
}

void message()
{
	cout << "In function message()." << endl;
}
