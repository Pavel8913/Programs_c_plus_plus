// пятый проект (функции).cpp: определяет точку входа для консольного приложения.
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
	printf("введите радиус: ");
	cin >> x;
	printf("введите высоту:");
	cin >> y;
	z = v(x,y);
	printf("объём циилиндра:%f\n", z);*/


	/*float x, y, z, p, a, b, c;
	printf("введите сторону a: ");
	cin >> a;
	printf("введите сторону b:");
	cin >> b;
	printf("введите сторону c:");
	cin >> c;
	x = per(a, b, c);
	printf("площадь треугольника:%f\n", x); */



	/*float x, y, z, p, a, b, c, m, max = -99999;
	printf("введите первое число: ");
	cin >> a;
	printf("введите второе число: ");
	cin >> b;
	m = maximum(a, b);
	cout<<"максимальное число : " <<m<<"\n";*/


	/*float x, y, p, a, b, c, m;
	char z;
	printf("введите первое число: ");
	cin >> a;
	printf("введите второе число: ");
	cin >> b;
	z = znaki(a, b);
	cout << a << z << b << "\n";*/


	/*float x, y, p, a, b, c, m, z = 1,n=0;
	char f;
	printf("введите n: ");
	cin >> n;
	z = faktorial(n);
	cout << z;*/



	bool c;
	char a;
	printf("введите букву: ");
	cin >> a;
	c = glasnost(a);
	if (c == true)
	{
	cout << "гласный";
	}
	else
	{
	cout << "не гласный";
	}
	

	



	

	system("pause");
	return 0;
  
}

