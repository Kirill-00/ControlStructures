#include<iostream>
#include<conio.h>
using namespace std;
//#define TASK1
void main()
{
	setlocale(LC_ALL, "");
#ifdef TASK1
	int number;
	int reverse = 0;
	cout << "Введите число: "; cin >> number;
	int buffer = number;
	while (buffer)
	{
		reverse *= 10;
		reverse += buffer % 10;
		buffer /= 10;
	}
	cout << number << endl;
	cout << reverse << endl;
#endif TASK1

	char key;
	do
	{
		key = _getch();
		switch (key)
		{
		case'w':case'W':cout << "Вперед" << endl; break;
		case'a':case'A':cout << "Влево" << endl; break;
		case's':case'S':cout << "Назад" << endl; break;
		case'd':case'D':cout << "Вправо" << endl;break;
		case' ':cout << "Прыжок" << endl;break;
		case 13:cout << "Огонь" << endl; break;
		case 27:cout << "Выход" << endl; break;
		default:cout << "Error" << endl;
		}
	} while (key != 27);
}