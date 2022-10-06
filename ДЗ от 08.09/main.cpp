#include <iostream>
using namespace std;
//#define FACTORIAL
//#define STEPEN 
//#define ASCI
//#define FIBANACHI_1
//#define SIMPLE_NUMBERS
void main()
{
	setlocale(LC_ALL, "");
	
#ifdef FACTORIAL
int n;
double f = 1;
	cout << "Введите число";cin >> n;
	for (int i = 1; i <= n; i++)
	{
		
		cout << i << "!=";
		f *= i;
		cout << f << endl;
	}
	cout << endl;
	cout << n << "!=" << f << endl;
	#endif
#ifdef STEPEN
	double a;//число, которое возводим
	int n;//степень
	double N=1;
	cout << "Введите число: ";cin >> a;
	cout << "Введите сетепень:";cin >> n;
		if (n < 0)
		{
			a = 1 / a;
			n = -n;
		}
		for (int i = 1;i <= n;i++)
	{
		N *= a;
	}
	cout << N << endl;
	#endif
	#ifdef ASCI
	cout << "Таблица ASCI";
	setlocale(LC_ALL, "C");
	for (int i = 0;i < 256;i++)
	{
		if (i % 16 == 0)
			cout << endl;
		cout << (char)i << " ";
	}
	setlocale(LC_ALL, "");
	cout << endl;
	#endif
#ifdef FIBANACHI
	int n;
	cout << "Введите предельное значение: ";cin >> n;
	for (int a = 0, b = 1, c = a + b; a < n;a = b, b = c, c = a + b)
	{
		cout << a << "\t";
	}
	#endif

	#ifdef SIMPLE_NUMBERS
		int n;
	cout << "Введите предельное число";cin >> n;
	for (int i = 2;i < n;i++)
	{
		bool simple = true;
		for (int j = 2;j < i;j++)
		{
			if (i % j == 0)
			{
				simple = false;
				break;
			}
		}
		if (simple)cout << i << "\t";
	}
	#endif
}
