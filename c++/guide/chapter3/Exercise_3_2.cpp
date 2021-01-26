/*Exercise 2
The program on the opposite page contains several errors! Correct the errors
and ensure that the program can be executed.*/

// Corrected Version

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;


int main()
{
	string message("\nLearn from your mistakes!");
	cout << message << endl;
	
	int len = message.length();
	cout << "Length of the string: " << len << endl;
	
	srand(20);
	// And a random number in addition:
	int a,b;
	a = rand();
	b = rand();
	
	cout << "\nRandom number: " << a << endl;
	cout << "\nRandom number: " << b << endl;
	
	return 0;
}
