#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");

	double a, b;
	char s;
	char c = 'ඞ ';
	cout << "Введите арефметическое выражение: ";
	cin >> a >> s >> b;
	switch (s)
	{
	case'+':cout << a << " + " << b << " = " << a + b << endl; break;
	case'-':cout << a << " - " << b << " = " << a - b << endl; break;
	case'*':cout << a << " * " << b << " = " << a * b << endl; break;
	case'/':cout << a << " / " << b << " = " << a / b << endl; break;
	default: cout << "Вы промазали по кнопке вы "<< c << endl;
	}

}