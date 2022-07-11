#include<iostream>
#include<conio.h>
using namespace std;
//#define TASK_1
//#define TASK_2
#define TASK_3
//#define TEST
void main()
{
	setlocale(LC_ALL, "");
#ifdef TASK_1
	int h, a, b, c;
	cout << "Введите число: "; cin >> h;
	a = h;
	b = 0;
	c = 0;
	do
	{
		b = a % 10;
		c = c * 10 + b;
		a = a / 10;
	} while (a > 0);
	if (c == h) cout << "Число палиндром";
	else cout << "Число не палиндром";
#endif TASK_1
#ifdef TASK_2
	int h,n1,n2,n3,n4,n5,n6,l,r;
	cout << "Введите номер билета: "; cin >> h;
	n1 = h / 100000;
	n2 = (h / 10000) % 10;
	n3 = (h / 1000) % 10;
	n4 = (h / 100) % 10;
	n5 = (h / 10) % 10;
	n6 = (h / 1) % 10;
	l = n1 + n2 + n3;
	r = n4 + n5 + n6;
	if (l == r) cout << "Билет счастливый";
	else cout << "Обычный билет";

#endif TASK_2
#ifdef TASK_3
	int key;
	cout << "Нажмите клавишу дуйствия" << endl;
	do
	{
		key = _getch();
		switch (key)
		{
		case'w':cout << "Вперёд" << endl; break;
		case'a':cout << "Влево" << endl; break;
		case's':cout << "Назад" << endl; break;
		case'd':cout << "Вправо" << endl; break;
		case' ':cout << "Прыжок" << endl; break;
		case 13: cout << "Огонь" << endl; break;
		}
	} while (key != 27);
#endif TASK_3
#ifdef TEST
	int key, a, f;
	do
	{
		cout << "Выбирите сценарий" << endl;
		cout << "a\t" << "b\t" << "c" << endl;
		key = _getch();
		switch (key)
		{
		case'a':cout << "" << endl; break;

		case'b':cout << "2" << endl; break;
		case'c':cout << "3" << endl; break;
		}
	} while (key != 27);
#endif TEST
}