#include<iostream>
#include<conio.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	/*int i = 0;//счетчик цткла
	int n;//количество итераций
	cout << "Введите количество операций: "; cin >> n;
	while (i<n)
	{
		cout << i++ << " Hello World" << endl;
	}*/
	/*int n;
	cout << "Введите количество итераций: "; cin >> n;
	while (n--)
	{
		cout << n << " Hello World\n";
	}*/
	char key,e;//эта переменная будет хранить код клавиши
	do
	{
		key = 13;
		key = _getch();//функция _getch() ожидает нажатие клавиши 
		//и возвращает аски код нажатой клавиши
		//вункция _getch() объявлена в библеотеке conio.h
		cout << (int)key << "\t" << key << endl;
		
	} while (key != 27);
}
