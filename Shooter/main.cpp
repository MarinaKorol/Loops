#include <iostream>
#include<conio.h>
using namespace std;

#define Enter 13
#define Escape 27
void main()
{
	setlocale(LC_ALL, "");

	char key;
	do
	 {
	key = _getch();

		//	/*cout << (int)key << "\t" << key << endl;*/
	while (key != Escape);
	{

		if (key == 'h')
		{
			cout << "������" << endl;
		}
		else if (key == 's')
		{
			cout << "�����" << endl;
		}
		else if (key == 'a')
		{
			cout << "�����" << endl;
		}
		else if (key == 'd')
		{
			cout << "������" << endl;
		}
		else if (key == ' ')
		{
			cout << "������" << endl;
		}
		else if (key == Enter)
		{
			cout << "�����" << endl;
		}
		else
		{
			cout << "������" << endl;
		}

	char key;
	switch (key)
	{
	case'w': cout << "������" << endl;break;
	}
	while(key!=Escape)
	}


