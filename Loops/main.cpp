#include<iostream>
#include<conio.h>
using namespace std;
//#define Escape 27
//#define PALINDROM
//#define LUCKY_TICKET
void main()
{
	setlocale(LC_ALL, "Rus");

#ifdef PALINDROM
	int number;
	int reverse = 0;
	cout << "������� �����: ";cin >> number;
	int buffer = number;
	while (buffer)
	{
		reverse *= 10;
		reverse += buffer % 10;
		buffer /= 10;
	}
	cout << number << endl;
	cout << reverse << endl;
	if (reverse == number)
	{
		cout << "����� - ���������." << endl;
	}
	else
	{
		cout << "��� ������� �����." << endl;

	}
#endif 

#ifdef LUCKY_TICKET
	int number;
	cout << "������� �����!";cin >> number;
	int sum1, sum2;
	sum1 = sum2 = 0;
	while (number > 999)
	{
		sum1 += number % 10;
		number /= 10;
	}
	while (number)
	{
		sum2 += number % 10;
		number /= 10;
	}
	if (sum1 == sum2)
	{
		cout << "� ��� ���������� �����!" << endl;
	}
	else
	{
		cout << "�� � ���� ���!" << endl;
	}
#endif

#ifdef Escape 27
	char key;
	do
	{
		key = _getch();
		cout << (int)key << "\t" << key << endl;
	} while (key!=Escape);
#endif
	
}