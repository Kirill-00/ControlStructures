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
	cout << "�����������: "; cin >> t;
	if (t > 0)
	{
		cout << "�� ����� �����" << endl;
	}
	else if (t < 0)
	{
		cout << "�� ����� �������" << endl;
	}
	else
	{
		cout << "�� ����� 0 ��������" << endl;
	}
#endif task1

#ifdef task2
	int h;
		cout << "������� �����" << endl;
	cin >> h;
	if (h <= 10 && h >= 0)
	{
		cout << "���� ��������" << endl;
	}
	else
	{
		cout << "�� ������������" << endl;
	}
#endif task2

#ifdef task3
	double a, b;//����� � ����������
	char s;//����� ����
		cout << "������� �������������� ���������: " << endl;
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
