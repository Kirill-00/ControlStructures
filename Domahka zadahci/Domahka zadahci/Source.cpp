#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");
//#define TASK1

//#define TASK2

//#define TASK3

#define TASK4

#ifdef TASK1
	float money, kopeika;
	int griven;
	cout << "������� �������� �������" << endl;
	cin >> money;
	griven = money;
	kopeika = (money - griven) * 100;
	cout << griven << " ������� " << kopeika << " ������ " << endl;
#endif TASK1

#ifdef TASK2
	double cen_t, cen_k, sum, kopeika;
	int kol_t, kol_k, griven;
	cout << "���� �������" << endl;
	cin >> cen_t;
	cout << "����������� ��������" << endl;
	cin >> kol_t;
	cout << "���� ���������" << endl;
	cin >> cen_k;
	cout << "����������� ����������" << endl;
	cin >> kol_k;
	sum = cen_t * kol_t + cen_k * kol_k;
	griven = sum;
	kopeika = (sum - griven) * 100;
	cout << "��������� �������:" << griven << " ������� " << kopeika << " ������ " << endl;
#endif TASK2

#ifdef TASK3
	double cen_t, cen_o, sum, kopeika;
	int kol_k, griven;
	cout << "���� �������" << endl;
	cin >> cen_t;
	cout << "���� �������" << endl;
	cin >> cen_o;
	cout << "����������� ����������" << endl;
	cin >> kol_k;
	sum = (cen_t + cen_o) * kol_k;
	griven = sum;
	kopeika = (sum - griven) * 100;
	cout << "��������� �������:" << griven << " ������� " << kopeika << " ������ " << endl;
#endif TASK3

#ifdef TASK4

	double km, benz100, cbenz, sum, griven;
	cout << "���������� �� ����(��)" << endl;
	cin >> km;
	cout << "������ ������� (������ �� 100 ��)" << endl;
	cin >> benz100;
	cout << "���� ����� �������(���)" << endl;
	cin >> cbenz;
	sum = (benz100 * cbenz) / 100 * km * 2;
	griven = sum;
	cout << "��������� �������(���� � �������):" << griven << " ������� " << endl;
	
#endif TASK4
}