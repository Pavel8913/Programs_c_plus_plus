// ������ ������(���������).cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include<cmath>
#include <iostream>

using namespace std;
int main()
{

	setlocale(0, "rus");

	/*struct tovar
	{
		char name[15];
		float price;
		float n;
		int v;f
		char date[11];
	};
	tovar x;
	cout<<"Vvedite dannie o tovare:\n";
	cin>> x.name;*/


	int k=0;
	struct pc
	{
		char name[30];
		int g;
		char data[11];
	};
	pc m[3];
	for (int i = 0; i < 3; i++)
	{
		cout << "�������: ";
		cin >> m[i].name;
		cout << "������: ";
		cin >> m[i].g;
		cout << "����: ";
		cin >> m[i].data;

	}
	for (int i = 0; i < 3; i++)
	{
		if (m[i].g == 4)
			k++;
	}

	cout << "�������� � 4 ������� �����: "<<k;







	system("pause");
    return 0;
}

