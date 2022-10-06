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
			cout << "Вперед" << endl;
		}
		else if (key == 's')
		{
			cout << "Назад" << endl;
		}
		else if (key == 'a')
		{
			cout << "Влево" << endl;
		}
		else if (key == 'd')
		{
			cout << "Вправо" << endl;
		}
		else if (key == ' ')
		{
			cout << "Прыжок" << endl;
		}
		else if (key == Enter)
		{
			cout << "Огонь" << endl;
		}
		else
		{
			cout << "Ошибка" << endl;
		}

	char key;
	switch (key)
	{
	case'w': cout << "Вперед" << endl;break;
	}
	while(key!=Escape)
	}


