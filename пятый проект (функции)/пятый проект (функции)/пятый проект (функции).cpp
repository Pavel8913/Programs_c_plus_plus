// ����� ������ (�������).cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
#include<cmath>
using namespace std;

float perimeter(float a, float b, float c)
	{
		float p;
		p = a + b + c;
		return p;
	}

float v(float x, float y)
	{
		float z;
		z = x*x*y;
		return z;
	}


float pl(float a, float b, float c)
{
	float t;
	t = (a + b + c) / 2;
	return t;
}

float per(float a, float b, float c)
{
	float s,t;
	t = pl(a,b,c);
	s = t*(t - a)*(t - b)*(t - c);
	s = sqrt(s);
	return s;
}

float maximum(float a, float b)
{
	float m;
	if (a > b)
	{
		return a;
	}
	else
	{
		return b;
	}
return m;
}


char znaki(float a, float b)
{

	if (a > b)
	{
		return  '>';
	}
	else if (a == b)
	{
		return'=';
	}

	else
	{
		return '<';
	}
}

float faktorial(float n)
{
	float z = 1;
	for (float i = 1; i <= n; i++)

	{
		z *= i;

	}
	return z;


}


bool glasnost(char a)
{
	bool metka = false;
	char g[] = "aeiouyAEIOUY";
	for (int j = 0; g[j] != '\0'; j++)
	{
		if (a == g[j])
		{
			metka = true;
		}

	}
	return metka;
}



int main()


{
	setlocale(0, "rus");



	/*float x, y, z, p;
	printf("Vvedite storoni: ");
	cin >> x >> y >> z;
	p = perimeter(x, y, z);
	printf("Perimetr=%f\n", p);*/


	/*float x, y, z, p;
	printf("������� ������: ");
	cin >> x;
	printf("������� ������:");
	cin >> y;
	z = v(x,y);
	printf("����� ���������:%f\n", z);*/


	/*float x, y, z, p, a, b, c;
	printf("������� ������� a: ");
	cin >> a;
	printf("������� ������� b:");
	cin >> b;
	printf("������� ������� c:");
	cin >> c;
	x = per(a, b, c);
	printf("������� ������������:%f\n", x); */



	/*float x, y, z, p, a, b, c, m, max = -99999;
	printf("������� ������ �����: ");
	cin >> a;
	printf("������� ������ �����: ");
	cin >> b;
	m = maximum(a, b);
	cout<<"������������ ����� : " <<m<<"\n";*/


	/*float x, y, p, a, b, c, m;
	char z;
	printf("������� ������ �����: ");
	cin >> a;
	printf("������� ������ �����: ");
	cin >> b;
	z = znaki(a, b);
	cout << a << z << b << "\n";*/


	/*float x, y, p, a, b, c, m, z = 1,n=0;
	char f;
	printf("������� n: ");
	cin >> n;
	z = faktorial(n);
	cout << z;*/



	bool c;
	char a;
	printf("������� �����: ");
	cin >> a;
	c = glasnost(a);
	if (c == true)
	{
	cout << "�������";
	}
	else
	{
	cout << "�� �������";
	}
	

	



	

	system("pause");
	return 0;
  
}

