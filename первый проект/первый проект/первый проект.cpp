// ������ ������.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(0, "rus");
	/*int a, b, c;
	cout << "������� a: ";
	cin >> a;
	cout << "������� B: ";
	cin >> b;

	c = a + b;
	cout << "�����: " << c << endl;
	c = a - b;
	cout << "��������: " << c << endl;
	c = a * b;
	cout << "������������: " << c << endl;
	c = a / b;
	cout << "�������: " << c << endl;*/

	
	
	
	/*double a, z, b, c, d;
	cout << "������� ���� �������: ";		//���� �������� 2.75 ���-�� 5
	cin >> a;								//���� ��������� 0.85 ���-�� 2
	cout << "������� ���������� ��������: ";
	cin >> b;
	cout << "������� ���� ���������: ";
	cin >> c;
	cout << "������� ���������� ����������: ";
	cin >> d;
	z = a*b + c*d;
	cout << "����� ������� : " << z << endl;*/

	//z=(a+b)/c
	/*int a, b, c, z;
	cout << "������� A: ";
	cin >> a;
	cout << "������� B: ";
	cin >> b;
	cout << "������� C: ";
	cin >> c;
	
	if (c == 0)
	{
		cout << "�� �������";
	}
	else
	{
		z = (a + b) / c;
		cout << "�����: " << z << endl;
	}*/



	/*double a, b, c ;
	cout << "������� ������ ������� ������������: ";
	cin >> a;
	cout << "������� ������ ������� ������������: ";
	cin >> b;
	cout << "������� ������ ������� ����������: ";
	cin >> c;
	if (a + b > c&&b + c > a&&c + a > b)
	{
		cout << "������� ������������\n";
	}
	else
	cout << "�� �������� ���������\n";
	if (a + b + c == 180)
	{
		cout << "��� ����\n";
	}
	else
		cout << "��� �� ����\n";



	/*double x,y;
	cout << "������� x: ";
	cin >> x;
	if (x<0)
	{
		cout << "������ ������� ������!\n";
	}
	else
	{
		y = sqrt(x);
		cout << "������" << y << "\n";
	}
	/*int a; 
	cin >> a;
	if (a < 0)
	{
		cout << "�������������\n";
	}

	else if (a == 0)
	{
		cout << "����";
	}
	else
	{ 
		cout << "�������������";
	}*/

	double a, z;
	cout << "������� ��������� ���� �������: ";		
	cin >> a;
	if (a >= 1000 && a < 3000)
	{
		cout << "������ 10%";
		a-=a/ 100 * 10;
		cout << "���� ��������� ������� � ������ ������: " << a << endl;
	}
	else if (a >= 3000 && a < 5000)
	{
		cout << "������ 20%";
		a -= a / 100 * 20;
		cout << "���� ��������� ������� � ������ ������: " << a << endl;
	}
	else if (a < 1000)
	{
		cout << "� ��� ��� ������"; 
	}
	else
	{

		cout << "������ 50%";
		a -= a / 100 * 50;
		cout << "���� ��������� ������� � ������ ������: " << a << endl;

	}
/*int a;
cout << "������� �����: ";
cin >> a;
if (a % 2 == 0)
{
	cout << "������ �����\n";
}
else
{
	cout << "�� ������ �����\n";
}*/

/*double a, b, c;
cout << "������� ������ �����: ";
cin >> a ;
cout << "������� ������ �����: ";
cin >> b;
cout << "������� ������ �����: ";
cin >> c;
if (a > b&& a>c)
{
	cout << "������ ����� ������\n";
}
else if (a == b&&a==c)
{
	cout << "����� �����\n";
}
else if (c > b&&c > a)
{
	cout << "������ ����� ������\n";
}
else
{
	cout << "������ ����� ������\n";
}*/

/*double a, b, c, x1, x2, x, D;
cout << "������� a: ";			//ax2+bx+c=0
cin >> a;
cout << "������� b: ";
cin >> b;
cout << "������� c: ";
cin >> c;
D = b*b - 4 * 2 * c;
if (D > 0)
{
	x1 = (-b + sqrt(D)) / 2 * a;
	x2 = (-b - sqrt(D)) / 2 * a;
	cout << "������ 1: " << x1 << endl;
	cout << "������ 2: " << x2 << endl;

}
else if (D == 0)
{
	x1 = -b / 2 * a;
	cout << "������: " << x1 << endl;
}
else
{
	cout << "������ ���";
}*/
/*double x, y;
cout << "������� x: ";
cin >> x;
if (x >= 0)

{
	cout << "����� �������������\n";
	y = x - 7 * sqrt(x);
	if (y < 0)
		cout << "x �������������";
	else if (y > 0)
	{	
		cout << "����� �������������\n";
	}



}

else
{
	cout << "x �������������\n";
}*/

/*double R1, R2, n, R;
cout << "������� ����� ����: ";
cin >> n;
cout << "������� �������� R1: ";
cin >> R1;
cout << "������� �������� R2: ";
cin >> R2;
if (n==1)
{ 
	R = (R1 + R2);
	cout << "1 ���������������� �����: " << R  << endl;

}
else if (n==2)
{
	R = R1*R2 / (R1 + R2);
	cout << "2 ������������ �����: " << R << endl;

}*/







	system("pause");
	return 0;
}

