#include<iostream>
using namespace std;
//#define SQUARE
//#define TRIANGLE_1
//#define TRIANGLE_2
//#define TRIANGLE_3
//#define TRIANGLE_4
#define
#define SHACHMAT
void main()
{
	setlocale(LC_ALL, "");

	int n;
	cout << "Введите количество звездочек"; cin >> n;
#ifdef SQUARE
	for (int i = 0;i < n;i++)
	{
		for (int i = 0;i < n;i++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif

#ifdef TRIANGLE_1
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j <= i;j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif
#ifdef TRIANGLE_2
	for (int i = 0;i < n;i++)
	{
		for (int j = i;j < n;j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif

#ifdef TRIANGLE_3
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < i;j++) cout << "  ";
		for (int j = i;j < n;j++) cout << "* ";
		cout << endl;
	}
#endif

#ifdef TRIANGLE_4
	for (int i = 0;i < n;i++)
	{
		for (int j = i;j < n;j++) cout << "  ";
		for (int j = 0;j <= i;j++) cout << "* ";
		cout << endl;
	}
#endif
#ifdef PLUS_MINUS
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < n;j++)
		{
			/*if ((i + j) % 2 == 0)cout << "+ "; else cout << "- ";*/
			//((i + j) % 2 == 0)? cout << "+ ": cout << "- ";
			//(i + j) % 2 == 0 ? cout << "+ " : cout << "- ";
			//cout << ((i + j)%2 == 0 ? "+ " : "- ");
			cout << (i % 2 == j % 2 ? "+ " : "- ");
		}

		cout << endl;
	}
	#endif

}