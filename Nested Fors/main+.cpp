#include<iostream>
using namespace std;
//#define NESTED_FOR
//#define MULTIPLICATION_TABLE
//#define PIPHAGOR_TABLE

void main()
{
	setlocale(LC_ALL, "");
#ifdef NESTED_FOR
	for (int i = 0; i < 10;i++)
	{
		for (int j = 0;j < 10;j++)
		{
			cout << i << "\t" << j << endl;
		}
	}
#endif
#ifdef MULTIPLICATION_TABLE
	for (int i = 1; i <= 10;i++)
	{
		cout << "Таблица умножения на " << i << endl;
		for (int j = 1;j <= 10;j++)
		{
			if (i < 10)cout << " ";
			cout << i << " * ";
			if (j < 10)cout << " ";
			cout << j << " = ";
			if (i * j < 100)cout << " ";
			if (i * j < 10) cout << " ";
			cout << i * j << endl;
		}
		cout << endl;
	}
#endif

#ifdef PIPHAGOR_TABLE
	for (int i = 1;i <= 10;i++)
	{
		for (int j = 1;j <= 10;j++)
		{
			cout.width(5);
			cout << left;
			cout << i * j;
		}
		cout << endl;
	}
#endif
}