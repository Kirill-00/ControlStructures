#include<iostream>
#include<conio.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	/*int i = 0;//������� �����
	int n;//���������� ��������
	cout << "������� ���������� ��������: "; cin >> n;
	while (i<n)
	{
		cout << i++ << " Hello World" << endl;
	}*/
	/*int n;
	cout << "������� ���������� ��������: "; cin >> n;
	while (n--)
	{
		cout << n << " Hello World\n";
	}*/
	char key,e;//��� ���������� ����� ������� ��� �������
	do
	{
		key = 13;
		key = _getch();//������� _getch() ������� ������� ������� 
		//� ���������� ���� ��� ������� �������
		//������� _getch() ��������� � ���������� conio.h
		cout << (int)key << "\t" << key << endl;
		
	} while (key != 27);
}
