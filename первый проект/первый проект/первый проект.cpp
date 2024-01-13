// первый проект.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(0, "rus");
	/*int a, b, c;
	cout << "Введите a: ";
	cin >> a;
	cout << "Введите B: ";
	cin >> b;

	c = a + b;
	cout << "сумма: " << c << endl;
	c = a - b;
	cout << "разность: " << c << endl;
	c = a * b;
	cout << "произведение: " << c << endl;
	c = a / b;
	cout << "частное: " << c << endl;*/

	
	
	
	/*double a, z, b, c, d;
	cout << "введите цену тетради: ";		//цена тетрадей 2.75 кол-во 5
	cin >> a;								//цена карандаша 0.85 кол-во 2
	cout << "введите количество тетрадей: ";
	cin >> b;
	cout << "введите цену карандаша: ";
	cin >> c;
	cout << "введите количество карандашей: ";
	cin >> d;
	z = a*b + c*d;
	cout << "сумма покупки : " << z << endl;*/

	//z=(a+b)/c
	/*int a, b, c, z;
	cout << "введите A: ";
	cin >> a;
	cout << "введите B: ";
	cin >> b;
	cout << "введите C: ";
	cin >> c;
	
	if (c == 0)
	{
		cout << "Не делится";
	}
	else
	{
		z = (a + b) / c;
		cout << "ответ: " << z << endl;
	}*/



	/*double a, b, c ;
	cout << "введите первую сторону треугольника: ";
	cin >> a;
	cout << "введите вторую сторону треугольника: ";
	cin >> b;
	cout << "введите третью сторону треугоника: ";
	cin >> c;
	if (a + b > c&&b + c > a&&c + a > b)
	{
		cout << "стороны треугольника\n";
	}
	else
	cout << "не является сторонами\n";
	if (a + b + c == 180)
	{
		cout << "это углы\n";
	}
	else
		cout << "это не углы\n";



	/*double x,y;
	cout << "введите x: ";
	cin >> x;
	if (x<0)
	{
		cout << "Корень извлечь нельзя!\n";
	}
	else
	{
		y = sqrt(x);
		cout << "Корень" << y << "\n";
	}
	/*int a; 
	cin >> a;
	if (a < 0)
	{
		cout << "Отрицательное\n";
	}

	else if (a == 0)
	{
		cout << "Ноль";
	}
	else
	{ 
		cout << "Положительное";
	}*/

	double a, z;
	cout << "введите стоимость всей покупки: ";		
	cin >> a;
	if (a >= 1000 && a < 3000)
	{
		cout << "скидка 10%";
		a-=a/ 100 * 10;
		cout << "ваша стоимость покупки с учётом скидки: " << a << endl;
	}
	else if (a >= 3000 && a < 5000)
	{
		cout << "скидка 20%";
		a -= a / 100 * 20;
		cout << "ваша стоимость покупки с учётом скидки: " << a << endl;
	}
	else if (a < 1000)
	{
		cout << "у вас нет скидки"; 
	}
	else
	{

		cout << "скидка 50%";
		a -= a / 100 * 50;
		cout << "ваша стоимость покупки с учётом скидки: " << a << endl;

	}
/*int a;
cout << "введите число: ";
cin >> a;
if (a % 2 == 0)
{
	cout << "чётное число\n";
}
else
{
	cout << "не чётное число\n";
}*/

/*double a, b, c;
cout << "введите первое число: ";
cin >> a ;
cout << "введите второе число: ";
cin >> b;
cout << "введите третье число: ";
cin >> c;
if (a > b&& a>c)
{
	cout << "первое число больше\n";
}
else if (a == b&&a==c)
{
	cout << "числа равны\n";
}
else if (c > b&&c > a)
{
	cout << "третье число больше\n";
}
else
{
	cout << "второе число больше\n";
}*/

/*double a, b, c, x1, x2, x, D;
cout << "введите a: ";			//ax2+bx+c=0
cin >> a;
cout << "введите b: ";
cin >> b;
cout << "введите c: ";
cin >> c;
D = b*b - 4 * 2 * c;
if (D > 0)
{
	x1 = (-b + sqrt(D)) / 2 * a;
	x2 = (-b - sqrt(D)) / 2 * a;
	cout << "корень 1: " << x1 << endl;
	cout << "корень 2: " << x2 << endl;

}
else if (D == 0)
{
	x1 = -b / 2 * a;
	cout << "корень: " << x1 << endl;
}
else
{
	cout << "корней нет";
}*/
/*double x, y;
cout << "введите x: ";
cin >> x;
if (x >= 0)

{
	cout << "число положительное\n";
	y = x - 7 * sqrt(x);
	if (y < 0)
		cout << "x положительный";
	else if (y > 0)
	{	
		cout << "ответ положительный\n";
	}



}

else
{
	cout << "x отрицательный\n";
}*/

/*double R1, R2, n, R;
cout << "введите номер цепи: ";
cin >> n;
cout << "введите значения R1: ";
cin >> R1;
cout << "введите значение R2: ";
cin >> R2;
if (n==1)
{ 
	R = (R1 + R2);
	cout << "1 последовательное равно: " << R  << endl;

}
else if (n==2)
{
	R = R1*R2 / (R1 + R2);
	cout << "2 параллельное равно: " << R << endl;

}*/







	system("pause");
	return 0;
}

