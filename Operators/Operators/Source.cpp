#include<iostream>
using namespace std;

//#define ARITHMETICAL_OPERATORS

void main()
{
	setlocale(LC_ALL, "Russian");
#ifdef ARITHMETICAL_OPERATORS
	cout << 17 / 3 << endl;
	cout << 17 % 3 << endl;
	cout << 3 % 17 << endl;
#endif ARITHMETICAL_OPERATORS



}