/* What does the following page output on screen? */

#include <iostream>
using namespace std;

void pause(); // Prototype

int main()
{
	cout << endl << "Dear reader, "
		 << endl << "have a ";
	pause();
	cout << "!" << endl;
	
	return 0; 
}

void pause()
{
	cout << "BREAK";
}

/* Output:
Dear reader,
have a BREAK !
*/
