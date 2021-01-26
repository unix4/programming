/*
Exercise 3
Create a C++ program that defines a string containing the following character
sequence:
I have learned something new again!
and displays the length of the string on screen.
Read two lines of text from the keyboard. Concatenate the strings using " * "
to separate the two parts of the string. Output the new string on screen.
*/

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	string s("I have learned something new again!");
	int s_length(s.length());
	
	string input1, input2, end_result;
	
	cout << s << " (" << s_length << " chars long)" << endl;
	
	// Read two lines of text from keyboard
	getline(cin, input1);
	getline(cin, input2);
	
	end_result = input1 + " * " + input2;
	
	cout << end_result << endl;
		
	return 0;
}
