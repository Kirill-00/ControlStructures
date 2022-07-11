#include<iostream>
using namespace std;
//#define TASK1
//#define TASK2
#define TASK3
void main()
{
	setlocale(LC_ALL, "");
	/*for (;;)
	{
		cout << " Hello ";
	}
	int n;
	cout << "Введите колличество итераций: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << i << "\t"; 
	}*/
#ifdef TASK1
	int a, b = 1;
	cout << "Введите число: "; cin >> a;
	for (int i = 1; i <= a; i++)
	{
		b *= i;
	}
	cout << "Факториал " << a <<" = " << b << endl;
#endif TASK1
#ifdef TASK2
	int s,h,f=1;
	cout << "Основание числа: "; cin >> h;
	cout << "Степень: "; cin >> s;
	for (int i = 1; i <= s; i++)
	{
		f *= h;
	}
	cout << f;
#endif TASK2
#ifdef TASK3
	for (int i = 0; i < 256; i++) 
	{
		if (i % 16 == 0)cout << endl;
		cout << (char)i << "  ";
	}
	cout << endl;
	cout << endl;
#endif TASK3
}