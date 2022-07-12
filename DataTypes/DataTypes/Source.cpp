#include<iostream>
using namespace std;

//#define INTEGRAL_TYPES
//#define pomen_mest
void main()
{
	setlocale(LC_ALL, "rus");
	//cout << true << endl;
	//cout << false << endl;

#ifdef INTEGRAL_TYPES
	cout << sizeof(int) << endl;

	cout << "unsigned int:" << 0 << " ... " << UINT_MAX << endl;
	cout << "signed int:" << INT_MIN << " ... " << INT_MAX << endl;
#endif  //INTEGRAL_TYPES

	//cout << sizeof(float) << endl;
	//cout << FLT_MAX << "..." << FLT_MAX << endl;
	//cout << sizeof(double) << endl;
	//cout << DBL_MIN << "..." << DBL_MAX << endl;
#ifdef pomen_mest
	int a = 2, b = 3;
	cout << a << "\t" << b << endl;
	int c = a;
	a = b;
	b = c;
	cout << a << "\t" << b << endl;
#endif pomen_mest
}