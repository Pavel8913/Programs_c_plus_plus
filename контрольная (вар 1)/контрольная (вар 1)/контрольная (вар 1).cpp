// ����������� (��� 1).cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include<cmath>
#include <iostream>


float sred(float a,float b,float c)
{
	float x;
	x = (a + b + c)/3;
	return x;
}
using namespace std;
int main()
{
	setlocale(0, "rus");

	//������� 1:
	/*int a, b, c, g, d, x, y, s;
	cout << "������� ������ �����:";
	cin >> a;
	cout << "������� ������ �����:";
	cin >> b;
	cout << "������� ������ �����:";
	cin >> c;
	s = sred(a, b, c);
	cout << "������� ��������������:"<<s;*/

	//������� 2:
	/*int  x=0, n, p = 0, max = -99999;
	do
	{
		cout << "������� ����� ";
		cin >> n;
		p++;
	
	if (n > max)
	{
		max = n;
		
	}
	
} while (n != 0);
	
 cout << "������������ �����:"<<max<<'\n';*/




	/*int a[5], i, t,col=0;
	cout << "������� ����� x: ";
	cin >> t;
	for (i = 0; i < 5; i++)
	{
		cout << "������� ������: ";
		cin >> a[i];
		if (a[i] == t)
		{
		
			col += 1;
		}
	}
	
	if (col>0)
	{
		cout << "\n����� ����� ����";
		cout << "\n����������: "<<col;
	}

	else
	{
		cout << "\n����� ��� ";
		cout << "\n����������: " << col;

	}*/


	/*int a[5], x, i;
	for (i = 0; i < 5; i++)
	{
		cout << "������� ������: ";
		cin >> a[i];
	}
	bool metka = true;
	for (int i = 0; i < 4; i++)
	{
		if (a[i] > a[i + 1])
		{
			metka = false;
		}
	}
	if (metka == true)
	{
		cout << " ������ ����������";
	}
	else
	{
		cout << "������ �� ����������";
	}*/




	/*int a[3][3] , i, sum1 = 0, sum2 = 0, sred1, sred2,j,col=0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			cin >> a[i][j];
			col += 1;
		}
		
	}

	for (i = 0; i < 3; i++)
	{
		
		sum1 +=a[i][j];
		sred1=sum1 /col ;
		

	}

	cout << "������� �������������� ������� �������: "<<sred1;*/





int k = 0;
struct pc
{
	char name[30];
	int g;
	int dolg;
	
};
pc m[3];
for (int i = 0; i < 3; i++)
{
	cout << "�������: ";
	cin >> m[i].name;
	cout << "����: ";
	cin >> m[i].dolg;

}
for (int i = 0; i < 3; i++)
{
	if (m[i].dolg == 0)
	{
		k++;
	}
}

cout << "�����: " << k;

	


	system("pause");
    return 0;
}

