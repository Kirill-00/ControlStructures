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
	cout << "������� �����: "; cin >> h;
	a = h;
	b = 0;
	c = 0;
	do
	{
		b = a % 10;
		c = c * 10 + b;
		a = a / 10;
	} while (a > 0);
	if (c == h) cout << "����� ���������";
	else cout << "����� �� ���������";
#endif TASK_1
#ifdef TASK_2
	int h,n1,n2,n3,n4,n5,n6,l,r;
	cout << "������� ����� ������: "; cin >> h;
	n1 = h / 100000;
	n2 = (h / 10000) % 10;
	n3 = (h / 1000) % 10;
	n4 = (h / 100) % 10;
	n5 = (h / 10) % 10;
	n6 = (h / 1) % 10;
	l = n1 + n2 + n3;
	r = n4 + n5 + n6;
	if (l == r) cout << "����� ����������";
	else cout << "������� �����";

#endif TASK_2
#ifdef TASK_3
	int key;
	cout << "������� ������� ��������" << endl;
	do
	{
		key = _getch();
		switch (key)
		{
		case'w':cout << "�����" << endl; break;
		case'a':cout << "�����" << endl; break;
		case's':cout << "�����" << endl; break;
		case'd':cout << "������" << endl; break;
		case' ':cout << "������" << endl; break;
		case 13: cout << "�����" << endl; break;
		}
	} while (key != 27);
#endif TASK_3
#ifdef TEST
	int key, a, f;
	do
	{
		cout << "�������� ��������" << endl;
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