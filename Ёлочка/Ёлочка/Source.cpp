#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	int i = 3;
	i = ++i + 1 + ++i * 2;
	cout << i << endl;



}