#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "");
	/*for(;;)
	cout << "������ FOR!";*/

	int n;
	cout << "������� ���������� ��������" << endl;cin >> n;
	for (int i = 0;i < n;i++)
	{
		cout << i << "\t";
	}
	cout << endl;
}