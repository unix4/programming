/*Exercise 5
Correct the mistakes in the program on the opposite page.
*/

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	char ch;
	string word;
	
	cout << "Let's go! Press the return key: " << endl;
	cin.get();
	
	cout << "Enter a word containing three characters at most: ";
	
	cin >> setw(3) >> word;
	
	cout << "Your input: " << word << endl;
  
	return 0;
}
