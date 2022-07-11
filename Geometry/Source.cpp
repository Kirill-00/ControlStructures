#include<iostream>
using namespace std;

//#define SQUARE
//#define LESENKI
//#define ROMB1
//#define ROMB2
//#define PM
#define YROK	

void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "¬ведите размер фигуры: "; cin >> n;
#ifdef SQUARE
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)cout << "* ";
		cout << endl;
	}
#endif SQUARE
#ifdef LESENKI
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)cout << "* ";
		cout << endl;
	}
	cout << endl;
	for (int i = n; i > 0; i--)
	{
		for (int j = 0; j < i; j++)cout << "* ";
		cout << endl;
	}
	cout << endl;
	for (int i = n; i >= 0; i--)
	{
		for (int j = 0; j < i; j++)cout << "  ";
		for (int l = 0; l < n - i; l++)cout << "* ";
		cout << endl;
	}
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)cout << "  ";
		for (int l = n; l > i; l--)cout << "* ";
		cout << endl;
	}
	cout << endl;
#endif LESENKI
#ifdef ROMB1
	for (int i = n; i > 0; i--)
	{
		for (int j = 1; j < i; j++)cout << " ";
		for (int l = 0; l <= n-i; l++)cout << "/";
		for (int j = 0; j <= n-i; j++)cout << "\\";
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)cout << " ";
		for (int l = n; l > i; l--)cout << "\\";
		for (int j = i; j < n; j++)cout << "/";
		cout << endl;
	}
#endif ROMB1
#ifdef ROMB2
	for (int i = n; i > 0; i--)
	{
		for (int j = 1; j < i; j++)	cout << " ";
		cout << "/";
		for (int j = 0; j < (n-i) * 2; j++)	cout << " ";
		cout << "\\";
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)cout << " ";
		cout << "\\";
		for (int j = 2; j < (n-i) * 2; j++)cout << " ";
		cout << "/";
		cout << endl;
	}
#endif ROMB2
#ifdef PM
	for (int i = 0; i < n / 2; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (j % 2 == 0)cout << "+ ";
			else cout << "- ";
		}
		cout << endl;
		for (int j = 0; j < n; j++)
		{
			if (j % 2 == 0)cout << "- ";
			else cout << "+ ";
		}
		cout << endl;
	}
#endif PM
#ifdef YROK
	/*for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
	for (int i = 0; i <= n; i++)
	{
		for (int j = i; j < n; j++)cout << "  ";
		for (int j = 0; j < i; j++)cout << "* ";
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)cout << " ";cout << "/";
		for (int j = 0; j < i; j++)cout << "  ";cout << "\\";
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)cout << " "; cout << "\\";
		for (int j = i; j < n - 1; j++)cout << "  "; cout << "/";
		cout << endl;
	}*/
	////////////////
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			//if ((i+j) % 2 == 0)cout << "+ ";else cout << "- ";
			//(i + j) % 2 == 0 ? cout << "+ " : cout << "- ";
			//cout << ((i + j) % 2 == 0 ? "+ " : "- ");
			cout << ((i + j) % 2 ? "+ " : "- ");
		}
		cout << endl;
	}
#endif YROK
}