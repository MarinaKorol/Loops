#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "");
	/*for(;;)
	cout << "Привет FOR!";*/

	int n;
	cout << "Введите количество итераций" << endl;cin >> n;
	for (int i = 0;i < n;i++)
	{
		cout << i << "\t";
	}
	cout << endl;
}