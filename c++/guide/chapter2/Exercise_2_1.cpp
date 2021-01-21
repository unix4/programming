 /*
 The sizeof operator can be used to determine the number of bytes occupied
in memory by a variable of a certain type. For example, sizeof(short) is
equivalent to 2.
Write a C++ program that displays the memory space required by each
fundamental type on screen.
 */
 
#include <iostream>

using namespace std;

//char, short,int,long,double,float,bool,  

int main()
{
	char c = 'A';
	wchar_t w_ch = 'B';
	short s = 10;
	int i = 20;
	long l = 10L;
	double d = 20.2;
	float f = 20.2;
	bool b = true;
	long double ld = 200.001;
	
	cout << "char: " << c << " size: " << sizeof(c) << " Bytes " << endl;
	cout << "wchar_t: " << w_ch << " size: " << sizeof(w_ch) << " Bytes " << endl;
	cout << "short: " << s << " size: " << sizeof(s) << " Bytes " << endl;
	cout << "int: " << i << " size: " << sizeof(i) << " Bytes " << endl;
	cout << "long: " << l << " size: " << sizeof(l) << " Bytes " << endl;
	cout << "double: " << d << " size: " << sizeof(d) << " Bytes " << endl;
	cout << "float: " << f << " size: " << sizeof(f) << " Bytes " << endl;
	cout << "bool: " << b << " size: " << sizeof(b) << " Bytes " << endl;
	cout << "long-double: " << ld << " size: " << sizeof(ld) << " Bytes " << endl;
	
	return 0;
}


 
