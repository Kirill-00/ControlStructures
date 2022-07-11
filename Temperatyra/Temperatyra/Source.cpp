#include<iostream>
using namespace std;

//#define task1
//#define task2
#define task3

void main()
{
	setlocale(LC_ALL, "rus");

#ifdef task1
	int t;
	cout << "Температура: "; cin >> t;
	if (t > 0)
	{
		cout << "На улице тепло" << endl;
	}
	else if (t < 0)
	{
		cout << "На улице холодно" << endl;
	}
	else
	{
		cout << "На улице 0 градусов" << endl;
	}
#endif task1

#ifdef task2
	int h;
		cout << "Введите число" << endl;
	cin >> h;
	if (h <= 10 && h >= 0)
	{
		cout << "Цель поражена" << endl;
	}
	else
	{
		cout << "Вы промахнулмсь" << endl;
	}
#endif task2

#ifdef task3
	double a, b;//числа с клавиатуры
	char s;//арефм знак
		cout << "Введите арифметическое выражение: " << endl;
		cin >> a >> s >> b;
		if (s == '+')
		{
			cout << a << "+" << b << "=" << a + b << endl;
		}
		if (s == '-')
		{
			cout << a << "-" << b << "=" << a - b << endl;
		}
		if (s == '*')
		{
			cout << a << "*" << b << "=" << a * b << endl;
		}
		if (s == '/')
		{
			cout << a << "/" << b << "=" << a / b << endl;
		}
		else
		{
			cout << "Error: No operation." << endl;
		}
#endif task3

}
