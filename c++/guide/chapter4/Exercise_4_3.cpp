/*
Exercise 3
Write a C++ program that reads an article number, a quantity, and a unit price
from the keyboard and outputs the data on screen as displayed on the opposite
page.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int article_number, quantity;
	float price;
	
	cout << "Article Number: " << endl;
	cin >> article_number;
	
	cout << "Quantity: " << endl;
	cin >> quantity;
	
	cout << "Price: " << endl;
	cin >> price;
	
	cout << "Article Number: " << article_number << endl;
	cout << "Quantity: " << quantity << endl;
	
	cout << "Price: " << setprecision(4) << price << "$" << endl;
	
	return 0;
}
