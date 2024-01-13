// второй проект.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include<cmath>
using namespace std;
int main()
{
	setlocale(0, "rus");

	/*for (int i = 0; i < 10; i++)
	{
		cout << "Енин\n";
	}*/

	/*int n, i, sum;
	cout << "введите n: ";
	cin >> n;
	for ( i = 1, sum = 0; i <= n; i++)
	{
		sum += i * 2;
	}
	cout << "ответ: " << sum;*/


	/*int sum=0, x,n,p=0;
	do
	{
		cout << "введите числа ";
		cin >> n;
		sum += n;
		p++;
	} while (n!= 0);
	cout << "сумма: " << sum<<"\n";

	sum /= p;
	cout << "среднее арифмитеческое: " << sum << "\n";*/

	/*int x, y;
	cout << "x\ty\n";
	for (x = -10; x >= 10; x += 2)
	{
		y = 2 * x + 1;
		cout << x << "\t" << y << "\t";

	}*/

	/*int a, b, c;
	cout << "введите цену за кг:";
	cin >> b;
	for (a =100; a <1000; a +=100)
	{
		c = b / 1000*a;
		cout << "цена за "<< a <<" грамм: "<<c<<"\n";
	}*/

	/*int a, b, x;
	cout << "введите число:";
	cin >> b;
	bool metka = true;
	for (a = 2; a <b;a++)
	{
		if (b%a == 0)
		{
			metka = false;
			break;
		}
	}
	if (metka == true)
	{
		cout << "простое\n";
	}
	else
	{
		cout << "составное\n";
	}*/

	/*int a, b, x, y, p, t, i, p2;
	cout << "введите первое число:";
	cin >> a;
	cout << "введите второе число:";
	cin >> b;
	for (i = 1; i <= 5; i++)
	{
		x = a*b;
		cout << "попытка " << i << "\n";
		cin >> p;

		if (p == x)
		{
			cout << "вы угадали";
			break;
		}
		else
		{
			cout << "вы не угадали, ";
		}
	}*/

	/*int a=1, b, c, x, i,n;
	cout << "Введите n:";
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		a *= i;

	}
	cout << "факториал:" << a <<"\n";*/

	/*double a=0, b, c, n, i;
	cout << "введите число:";
	cin >> n;
	bool metka=true;
	for (i = 1; i <= n; i++)				//1-1/2+1/3-…+1/n
	{
		if (metka == true)
		{
			a += 1 / i;
			metka = false;
		}
		else
		{
			a -= 1 / i;
			metka = true;
		}
	}
		cout << "ответ: " << a <<"\n";*/


		/*int a, i, min=99999,n;
		for (i = 0; i < 5; i++)
		{
		cout << "введите число: ";
		cin >> a;
		if (a < min)
		{
			min = a;
		}
		}
		cout << "\nменьшее число: " << min << "\n";*/

		/*int a, i, max = -99999, n,num;
		for (i = 0; i < 5; i++)
		{
			cout << "введите число: ";
			cin >> a;
			if (a > max)
			{
				max = a;
				num = i;
			}
		}
		cout << "\nномер наибольшего числа: " << num+1 << "\n";*/

		/*int a, i, min = 99999, n;
		for (i = 0; i < 5; i++)
		{
			cout << "введите число: ";
			cin >> a;
			if (a < min&&a>0)
			{
				min = a;
			}
		}
		cout << "\nменьшее число: " << min << "\n";*/

		/*int a, b, i, x=1;
		for (i = 0; i < 6; i++)
		{
			cout << "введите число: ";
			cin >> a;
			if (a!=0)
			{
				x*=a;
			}

		}

		cout << "\nпроизведение:" << x << "\n";*/

		/*int a, b, i,col=0;
		for (i = 0; i < 6; i++)
		{
			cout << "введите число: ";
			cin >> a;
			if (a == 0)
			{
				col += 1;

			}

		}

		cout << "\nколичество нулевых элементов:" << col << "\n";*/

		/*int a, b, c, d, i, j,x;
		cout << "введите кол-во звёздочек:";
		cin >> b;
		cout << "введите кол-во звёздочек в ряд:";
		cin >> a;

		for (i = 0; i < b; i++)
		{
			for (j = 0; j < a; j++)
			{

				cout << "*\t" ;
			}
			cout << "\n";
		}*/


		/*int a;
		cout << "введите номер варианта: ";
		cin >> a;
		switch (a)
		{
		case 1 :
			cout << "первый вариант\n";
		break;
		case 2:
			cout << "второй вариант\n";
		break;

		default:
			cout << "такого варианта нет\n";
		}*/



		/*int a;
		cout << "введите цифру: ";
		cin >> a;
		switch (a)
		{
		case 0:
			cout << "ноль";
			break;
		case 1:
			cout << "один";
		break;
		case 2:
			cout << "два";
		break;
		case 3:
			cout << "три";
		break;
		case 4:
		cout << "четыре";
		break;
		case 5:
		cout << "пять";
		break;
		case 6:
		cout << "шесть";
		break;
		case 7:
		cout << "семь";
		break;
		case 8:
		cout << "восемь";
		break;
		case 9:
		cout << "девять";
		break;
		case 10:
			cout << "десять";
			break;
		default:
			cout << "нету";
			break;
		}*/

		/*int a;
		cout << "месяц цифрой: ";
		cin >> a;
		switch (a)
		{
		case 11:
			cout << "ноябрь";
			break;
		case 1:
			cout << "январь";
			break;
		case 2:
			cout << "февраль";
			break;
		case 3:
			cout << "март";
			break;
		case 4:
			cout << "апрель";
			break;
		case 5:
			cout << "май";
			break;
		case 6:
			cout << "июнь";
			break;
		case 7:
			cout << "июль ";
			break;
		case 8:
			cout << "август";
			break;
		case 9:
			cout << "сентябрь";
			break;
		case 10:
			cout << "октябрь";
			break;
		case 12:
			cout << "декабрь";
			break;
		default:
			cout << "такого месяца нет";
			break;
		}*/


		/*int a, b, i, c, z1=0,z2=1,z3=0,z5=1;
		cout << "1-cумма\n2-произведение\n3-среднее арифмитическое";
		cout << "\nвведите дейстие: ";
		cin >> a;
		switch (a)
		{
		case 1:
			for (i = 0; i < 6;i++)
		{
			cout << "введите число: " << "\n";
			cin >> b;
			z1 += b ;

		}
			cout << "сумма: " << z1 << "\n";
		break;
		case 2:
			for (i = 0; i < 6; i++)
			{
				cout << "введите число: " << "\n";
				cin >> b;
				z2 *= b;

			}
		cout << "произведение: " << z2 << "\n";
		break;
		case 3:
			for (i = 0; i < 6; i++)
			{
				cout << "введите число: " << "\n";
				cin >> b;
				z3 += b;
				z5 = z3 / 6;

			}
			cout << "среднее арифмитическое: " << z5 << "\n";
			break;
		default:
			cout << "такого действия нет";

		}*/
		/*int a, b, i, c, z1 = 0, z2 = 1, z3 = 1, z5 = 1, z4, b1, b2, b3, b4;
		cout << "1 - сложение двух чисел\n2 - умножение двух чисел\n3 - разница двух чисел\n4 - деление двух чисел\n5 - возведение в степень\n0 – выход";
		cout << "\nвведите дейстие: ";
		cin >> a;
		do {
			switch (a)
			{
			case 1:
			{
				cout << "\nвведите первое число: " << "\n";
				cin >> z1;
				cout << "введите второе число: " << "\n";
				cin >> b1;
				z1 += b1;

			}
			cout << "сумма: " << z1 << "\n";
			cout << "1 - сложение двух чисел\n2 - умножение двух чисел\n3 - разница двух чисел\n4 - деление двух чисел\n5 - возведение в степень\n0 – выход";
			break;
			case 2:
			{
				cout << "\nвведите первое число: " << "\n";
				cin >> z2;
				cout << "введите второе число: " << "\n";
				cin >> b2;
				z2 *= b2;

			}
			cout << "произведение: " << z2 << "\n";
			cout << "1 - сложение двух чисел\n2 - умножение двух чисел\n3 - разница двух чисел\n4 - деление двух чисел\n5 - возведение в степень\n0 – выход";
			break;
			case 3:

			{
				cout << "\nвведите первое число: " << "\n";
				cin >> z3;
				cout << "введите второе число: " << "\n";
				cin >> b3;
				z3 -= b3;

			}
			cout << "разница двух чисел: " << z3 << "\n";
			cout << "1 - сложение двух чисел\n2 - умножение двух чисел\n3 - разница двух чисел\n4 - деление двух чисел\n5 - возведение в степень\n0 – выход";
			break;
			case 4:
			{
				cout << "\nвведите первое число: " << "\n";
				cin >> z4;
				cout << "введите второе число: " << "\n";
				cin >> b4;
				z4 /= b4;

			}
			cout << "частное двух чисел: " << z4 << "\n";
			cout << "1 - сложение двух чисел\n2 - умножение двух чисел\n3 - разница двух чисел\n4 - деление двух чисел\n5 - возведение в степень\n0 – выход";
			break;
			case 5:
			{
				cout << "\nкакое число хотите возвести в степень?: " << "\n";
				cin >> z4;
				cout << "в какую степень хотите возвести?: " << "\n";
				cin >> b4;
				c = pow(z4, b4);

			}
			cout << "степень: " << c << "\n";
			cout << "1 - сложение двух чисел\n2 - умножение двух чисел\n3 - разница двух чисел\n4 - деление двух чисел\n5 - возведение в степень\n0 – выход";
			break;
			default:
				cout << "такого действия нет";
			case 0:
			{
				cout << "выход";

			}
			}
		} while (a != 0);*/

											//МАССИВЫ


/*int a[5],i,b;
for (i = 0; i < 5; i++)
{
	cout << "введите массив: ";
	cin >> a[i];
}
for (i = 0; i < 5; i++)
{
if (a[i] < 0)
	{
		a[i] = 0;
	}
		
}
for (i = 0; i < 5; i++)
{
	cout << "\t" <<a[i] ;
}*/


/*int a[5], i, b,sum=0,p=1;
for (i = 0; i < 5; i++)
{
	cout << "введите массив: ";
	cin >> a[i];
}
for (i = 0; i < 5; i++)
{
	
	sum += a[i];
	p *= a[i];
}

cout<<"\nсумма: "<<sum;

cout<<"\nпроизведение: "<<p;*/







/*int a[5], i, b;
for (i = 0; i < 5; i++)
{
	cout << "введите массив: ";
	cin >> a[i];
}
for (i = 0; i < 5; i++)
{
	if (a[i] < 0)
	{
		a[i] = 0;
	}

}
for (i = 0; i < 5; i++)
{
	cout << "\t" << a[i];
}*/




system("pause");
		return 0;
	}