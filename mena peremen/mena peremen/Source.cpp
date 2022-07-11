#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");
	int a = 2, b = 3, c;
	cout << a << "\t" << b << endl;

	c = a - b;
	a = a - c;
	b = b + c;

	cout << a << "\t" << b << endl;

}