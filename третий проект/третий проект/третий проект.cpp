// третий проект.cpp: определ€ет точку входа дл€ консольного приложени€.
//

#include "stdafx.h"
#include <iostream>
#include<cmath>
#include<ctime>
using namespace std;
int main()
{

	setlocale(0, "rus");



	/*int a[5], i, b;
	for (i = 0; i < 5; i++)
	{
		cout << "введите массив: ";
		cin >> a[i];
	}
	for (int i = 4; i >= 0;i--)
	{
		cout <<a[i]<<"\t";

	}*/


	/*int a[5], i, b, metka, x, t;
	cout << "введите число: ";
	cin >> t;
	for (i = 0; i < 5; i++)
	{
		cout << "введите массив: ";
		cin >> a[i];


	}

		bool metka = false;
		for (i = 0; i = t; i++)
		{

			if (metka == false)
			{
				metka = false;
				break;
			}
		}


		if (metka == true)
		{
			a[i] = i;
			cout << "такое число есть\n";
		}
		else
		{
			cout << "такого числа нет\n";
		}




	}*/


	/*int a[5], i, t;
	cout << "введите число: ";
	cin >> t;
	bool metka = false;
	for (i = 0; i < 5; i++)
	{
		cout << "введите массив: ";
		cin >> a[i];
		if (a[i] == t)
		{
		metka = true;
		}
	}
	if (metka == true)
	{
		cout << "\nтакое число есть";
	}

	else
	{
		cout << "\nчисла нет ";
	}*/


	/*int a[5], i, min = 99999, n,max=-99999;
	for (i = 0; i < 5; i++)
	{
		cout << "введите мaссив ";
		cin >> a[i];
		if (a[i] < min)
		{
			min = a[i];

		}
		if (a[i] > max)
		{
			max = a[i];
		}
	}
	cout << "\nменьшее число: " << min << "\n";
	cout << "\nбольшее число: " << max << "\n";*/


	/*int a[5], x, i;
	for (i = 0; i < 5; i++)
	{
		cout << "введите массив";
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
	cout << " массив упор€дочен";
}
else
{
	cout << "массив не упор€дочен";
}*/

/*int a[3], i, r[3], x,sum=0;
for (i = 0; i < 3; i++)
{
	cout << "введите первый массив: ";
	cin >> a[i];
}
for (int i = 0; i < 3; i++)
{
	cout << "введите второй массив: ";
	cin >> r[i];
}
for (int i = 0; i < 3; i++)
{
	sum += a[i] * r[i];
}
cout << "\nскал€рное произведение: " << sum;*/



/*int a, i, x;
cout << "¬ведите число:";
cin >> a;
for (i = 0; i != 0; i++)
{
	x = a % 2;
}
if (a % 2 == 0)
{
	a >= 0;
	cout << "\n";
}
else
{
	cout << "\n";
}*/






/*int a[5], i, max =-99999, n, num;
for (i = 0; i < 5; i++)
{
	cout << "введите массив: ";
	cin >> a[i];
	if (a[i] > max&&a[i]<0)
	{
		max = a[i];
		num = i;
	}
}
	cout << "\nномер наибольшего отрицательного числа: " << num +1 << "\n";*/


	/*int a[5], i, max = -99999,  min=99999,num1,num2;
	for (i = 0; i < 5; i++)
	{
		cout << "введите массив: ";
		cin >> a[i];
		if (a[i] > max)
		{
			max = a[i];
			num1 = i;
		}
		if (a[i] < min)
		{
			min = a[i];
			num2 = i;
		}
	}
	a[num1] = min;
	a[num2] = max;
	for (int i = 0; i < 5; i++)
	{
		cout << a[i] << "\t";


	}
	cout << "\nмаксимальный элемент:" << max <<"\n";
	cout << "минимальный элемент:" << min << "\n";*/



	/*int a[7], i, x=0, sum = 0, num, col = 0;
		for (i = 0; i < 7; i++)
		{
			cout << "введите рост ученика:";
			cin >> a[i];
			sum += a[i];
			num = i;
			if (a[i] < x)
			{
				a[i] = x;
			}
		}

		x = sum / 7;

	for (i = 0; i < 7; i++)
	{
		if (a[i] > x)
		{
			col += 1;

		}
	}

		cout << "\nсредний рост учеников:" << x << "\n";
		cout << "\nколичество самых высоких:" << col  << "\n";*/


		/*int a[5], i, max1 =-99999, min = 99999, num1, num2, y, max2=- 99999;
		for (i = 0; i < 5; i++)
		{
			cout << "введите массив: ";
			cin >> a[i];
			if (a[i] > max1)
			{
				max1 = a[i];


			}


		}
		for (i = 0; i < 5; i++)
		{
			if ( max2<a[i]&&max1 > a[i])
			{

				max2 = a[i];

			}


		}
			cout << "\nмаксимальный элемент:" << max1 << "\n";
			cout << "второй по величине массив:" <<max2  << "\n";*/


			/*int a[3], b[3], i,sum=0,d;
			for (i = 0; i < 3; i++)
			{
				cout << "введите первый массив: ";
				cin >> a[i];
			}
			for (i = 0; i < 3; i++)
			{
				cout << "введите второй массив: ";
				cin >> b[i];
			}

			for (i = 0; i < 3; i++)
			{

				sum +=(a[i] - b[i] )* (a[i] - b[i]);

			}

			d=sqrt ( sum);

			cout << "\ d = " <<d << "\n";*/


			/*float a[3][3],sum=0;
			for (int i = 0; i < 3; i++)
			{
				for (int j = 0; j < 3; j++)
				{
					cin >> a[i][j];
				}
			}
			for (int i = 0; i < 3; i++)
			{
				for (int j = 0; j < 3; j++)
				{
					cout << a[i][j] << "\t";
				}
				cout << "\n";
				for (int i = 0; i < 3; i++)
				{

				}
			}
			for (int i = 0; i < 3; i++)
			{
			for (int j = 0; j < 3; j++)
			{
				if (i == j)
				{
					sum += a[i][j];

				}
			}
			}

			cout << "сумма диоганальных элнментов: " <<sum << "\n";*/



			float a[3][3], sum = 0;
			bool metka = true;
			for (int i = 0; i < 3; i++)
			{
				for (int j = 0; j < 3; j++)
				{
					cin >> a[i][j];
				}
			}
			for (int i = 0; i < 3; i++)
			{
				for (int j = 0; j < 3; j++)
				{
					cout << a[i][j] << "\t";
				}
				cout << "\n";

			}
			for (int i = 0; i < 3; i++)
			{
				for (int j = 0; j < 3; j++)
				{
					if (a[i][j]!=0&&i != j)
					{
						metka = false;


																																	//булл =фолс
					}

				}
			}

					if (metka == false)
					{
						cout << "матрица диагональна€ "  << "\n";
					}
					else
					{
						cout << "матрица не диагональна€ " << "\n";
					}




					/*float a[3][3], sum = 0;
					bool metka = true;
					for (int i = 0; i < 3; i++)
					{
						for (int j = 0; j < 3; j++)
						{
							cin >> a[i][j];
						}
					}
					for (int i = 0; i < 3; i++)
					{
						for (int j = 0; j < 3; j++)
						{
							cout << a[i][j] << "\t";
						}
						cout << "\n";

					}
					for (int i = 0; i < 3; i++)
					{
						for (int j = 0; j < 3; j++)
						{
							if (a[i][j] != a[j][i])
							{
								metka = false;
							}

						}
					}

					if (metka == false)
					{
						cout << "матрица не семитрична€ " << "\n";
					}
					else
					{
						cout << "матрица симитрична€ " << "\n";
					}*/







					/*float a[3][3], sum = 0;
					bool metka = true;
					for (int i = 0; i < 3; i++)
					{
						for (int j = 0; j < 3; j++)
						{
							cin >> a[i][j];
						}
					}
					for (int i = 0; i < 3; i++)
					{
						for (int j = 0; j < 3; j++)
						{
							cout << a[i][j] << "\t";
						}
						cout << "\n";

					}

					for (int i = 0; i < 3; i++)
					{
						sum = 0;
						for (int j = 0; j < 3; j++)
						{
							sum += a[i][j];
						}
					cout << "1 строка: " << sum << "\n";
					}*/


					/*float a[3][3], sum = 0,t;
					bool metka = true;
					for (int i = 0; i < 3; i++)
					{
						for (int j = 0; j < 3; j++)
						{
							cin >> a[i][j];
						}
					}
					for (int i = 0; i < 3; i++)
					{
						for (int j = 0; j < 3; j++)
						{
							cout << a[i][j] << "\t";
						}
						cout << "\n";

					}
					for (int i = 0; i < 3; i++)
					{
						for (int j = i; j < 3; j++)
						{

								t = a[i][j];
								a[i][j] = a[j][i];
								a[j][i] = t;

						}
					}

					cout << "\n";
					for (int i = 0; i < 3; i++)
					{
						for (int j = 0; j < 3; j++)
						{
							cout << a[i][j] << "\t";
						}
						cout << "\n";
					}*/



	/*float a[3][3], sum = 0, max = -99999, num;
	bool metka = true;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> a[i][j];
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << a[i][j] << "\t";
		}
		cout << "\n";

	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{

			max = a[i][j];
			num = j;

		}
	}

	cout << "номер столбца с максимальным элементом: "<<num<< "\n";*/



	/*srand(time(NULL));

	float a[3][3], sum = 0, max = -99999, num,r1,r2,r3, min= 99999,r[3];
	bool metka = true;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
		
			/*r1 = rand() % 10;
			r2 = rand() % 201 - 100;
			r3 = rand() % ((max + 1) - min) + min;


		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			r[i] = rand() % 2001 - 1000;
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << a[i][j] << "\t";
		}
		cout << "\n";

	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{

			max = a[i][j];
			num = j;

		}
	}

	cout << "номер столбца с максимальным элементом: " << num << "\n";*/




/*float a[3][3], v;

for (int i = 0; i < 3; i++)
{
	for (int j = 0; j < 3; j++)
	{
		cin >> a[i][j];
	}
}
for (int i = 0; i < 3; i++)
{
	for (int j = 0; j < 3; j++)
	{
		cout << a[i][j] << "\t";
	}
	cout << "\n";
}
for (int k = 0; k < 3; k++)
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (a[k][j] > a[k][i])
			{
				v = a[k][j];
				a[k][j] = a[k][i];
				a[k][i] = v;
			}
		}
	}
}
cout << "\n";
for (int i = 0; i < 3; i++)
{
	for (int j = 0; j < 3; j++)
	{
		cout << a[i][j] << "\t";
	}
	cout << "\n";
}*/





system("pause");
	return 0;
}