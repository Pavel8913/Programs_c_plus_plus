// ������ ������.cpp: ���������� ����� ����� ��� ����������� ����������.
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
		cout << "����\n";
	}*/

	/*int n, i, sum;
	cout << "������� n: ";
	cin >> n;
	for ( i = 1, sum = 0; i <= n; i++)
	{
		sum += i * 2;
	}
	cout << "�����: " << sum;*/


	/*int sum=0, x,n,p=0;
	do
	{
		cout << "������� ����� ";
		cin >> n;
		sum += n;
		p++;
	} while (n!= 0);
	cout << "�����: " << sum<<"\n";

	sum /= p;
	cout << "������� ��������������: " << sum << "\n";*/

	/*int x, y;
	cout << "x\ty\n";
	for (x = -10; x >= 10; x += 2)
	{
		y = 2 * x + 1;
		cout << x << "\t" << y << "\t";

	}*/

	/*int a, b, c;
	cout << "������� ���� �� ��:";
	cin >> b;
	for (a =100; a <1000; a +=100)
	{
		c = b / 1000*a;
		cout << "���� �� "<< a <<" �����: "<<c<<"\n";
	}*/

	/*int a, b, x;
	cout << "������� �����:";
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
		cout << "�������\n";
	}
	else
	{
		cout << "���������\n";
	}*/

	/*int a, b, x, y, p, t, i, p2;
	cout << "������� ������ �����:";
	cin >> a;
	cout << "������� ������ �����:";
	cin >> b;
	for (i = 1; i <= 5; i++)
	{
		x = a*b;
		cout << "������� " << i << "\n";
		cin >> p;

		if (p == x)
		{
			cout << "�� �������";
			break;
		}
		else
		{
			cout << "�� �� �������, ";
		}
	}*/

	/*int a=1, b, c, x, i,n;
	cout << "������� n:";
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		a *= i;

	}
	cout << "���������:" << a <<"\n";*/

	/*double a=0, b, c, n, i;
	cout << "������� �����:";
	cin >> n;
	bool metka=true;
	for (i = 1; i <= n; i++)				//1-1/2+1/3-�+1/n
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
		cout << "�����: " << a <<"\n";*/


		/*int a, i, min=99999,n;
		for (i = 0; i < 5; i++)
		{
		cout << "������� �����: ";
		cin >> a;
		if (a < min)
		{
			min = a;
		}
		}
		cout << "\n������� �����: " << min << "\n";*/

		/*int a, i, max = -99999, n,num;
		for (i = 0; i < 5; i++)
		{
			cout << "������� �����: ";
			cin >> a;
			if (a > max)
			{
				max = a;
				num = i;
			}
		}
		cout << "\n����� ����������� �����: " << num+1 << "\n";*/

		/*int a, i, min = 99999, n;
		for (i = 0; i < 5; i++)
		{
			cout << "������� �����: ";
			cin >> a;
			if (a < min&&a>0)
			{
				min = a;
			}
		}
		cout << "\n������� �����: " << min << "\n";*/

		/*int a, b, i, x=1;
		for (i = 0; i < 6; i++)
		{
			cout << "������� �����: ";
			cin >> a;
			if (a!=0)
			{
				x*=a;
			}

		}

		cout << "\n������������:" << x << "\n";*/

		/*int a, b, i,col=0;
		for (i = 0; i < 6; i++)
		{
			cout << "������� �����: ";
			cin >> a;
			if (a == 0)
			{
				col += 1;

			}

		}

		cout << "\n���������� ������� ���������:" << col << "\n";*/

		/*int a, b, c, d, i, j,x;
		cout << "������� ���-�� ��������:";
		cin >> b;
		cout << "������� ���-�� �������� � ���:";
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
		cout << "������� ����� ��������: ";
		cin >> a;
		switch (a)
		{
		case 1 :
			cout << "������ �������\n";
		break;
		case 2:
			cout << "������ �������\n";
		break;

		default:
			cout << "������ �������� ���\n";
		}*/



		/*int a;
		cout << "������� �����: ";
		cin >> a;
		switch (a)
		{
		case 0:
			cout << "����";
			break;
		case 1:
			cout << "����";
		break;
		case 2:
			cout << "���";
		break;
		case 3:
			cout << "���";
		break;
		case 4:
		cout << "������";
		break;
		case 5:
		cout << "����";
		break;
		case 6:
		cout << "�����";
		break;
		case 7:
		cout << "����";
		break;
		case 8:
		cout << "������";
		break;
		case 9:
		cout << "������";
		break;
		case 10:
			cout << "������";
			break;
		default:
			cout << "����";
			break;
		}*/

		/*int a;
		cout << "����� ������: ";
		cin >> a;
		switch (a)
		{
		case 11:
			cout << "������";
			break;
		case 1:
			cout << "������";
			break;
		case 2:
			cout << "�������";
			break;
		case 3:
			cout << "����";
			break;
		case 4:
			cout << "������";
			break;
		case 5:
			cout << "���";
			break;
		case 6:
			cout << "����";
			break;
		case 7:
			cout << "���� ";
			break;
		case 8:
			cout << "������";
			break;
		case 9:
			cout << "��������";
			break;
		case 10:
			cout << "�������";
			break;
		case 12:
			cout << "�������";
			break;
		default:
			cout << "������ ������ ���";
			break;
		}*/


		/*int a, b, i, c, z1=0,z2=1,z3=0,z5=1;
		cout << "1-c����\n2-������������\n3-������� ��������������";
		cout << "\n������� �������: ";
		cin >> a;
		switch (a)
		{
		case 1:
			for (i = 0; i < 6;i++)
		{
			cout << "������� �����: " << "\n";
			cin >> b;
			z1 += b ;

		}
			cout << "�����: " << z1 << "\n";
		break;
		case 2:
			for (i = 0; i < 6; i++)
			{
				cout << "������� �����: " << "\n";
				cin >> b;
				z2 *= b;

			}
		cout << "������������: " << z2 << "\n";
		break;
		case 3:
			for (i = 0; i < 6; i++)
			{
				cout << "������� �����: " << "\n";
				cin >> b;
				z3 += b;
				z5 = z3 / 6;

			}
			cout << "������� ��������������: " << z5 << "\n";
			break;
		default:
			cout << "������ �������� ���";

		}*/
		/*int a, b, i, c, z1 = 0, z2 = 1, z3 = 1, z5 = 1, z4, b1, b2, b3, b4;
		cout << "1 - �������� ���� �����\n2 - ��������� ���� �����\n3 - ������� ���� �����\n4 - ������� ���� �����\n5 - ���������� � �������\n0 � �����";
		cout << "\n������� �������: ";
		cin >> a;
		do {
			switch (a)
			{
			case 1:
			{
				cout << "\n������� ������ �����: " << "\n";
				cin >> z1;
				cout << "������� ������ �����: " << "\n";
				cin >> b1;
				z1 += b1;

			}
			cout << "�����: " << z1 << "\n";
			cout << "1 - �������� ���� �����\n2 - ��������� ���� �����\n3 - ������� ���� �����\n4 - ������� ���� �����\n5 - ���������� � �������\n0 � �����";
			break;
			case 2:
			{
				cout << "\n������� ������ �����: " << "\n";
				cin >> z2;
				cout << "������� ������ �����: " << "\n";
				cin >> b2;
				z2 *= b2;

			}
			cout << "������������: " << z2 << "\n";
			cout << "1 - �������� ���� �����\n2 - ��������� ���� �����\n3 - ������� ���� �����\n4 - ������� ���� �����\n5 - ���������� � �������\n0 � �����";
			break;
			case 3:

			{
				cout << "\n������� ������ �����: " << "\n";
				cin >> z3;
				cout << "������� ������ �����: " << "\n";
				cin >> b3;
				z3 -= b3;

			}
			cout << "������� ���� �����: " << z3 << "\n";
			cout << "1 - �������� ���� �����\n2 - ��������� ���� �����\n3 - ������� ���� �����\n4 - ������� ���� �����\n5 - ���������� � �������\n0 � �����";
			break;
			case 4:
			{
				cout << "\n������� ������ �����: " << "\n";
				cin >> z4;
				cout << "������� ������ �����: " << "\n";
				cin >> b4;
				z4 /= b4;

			}
			cout << "������� ���� �����: " << z4 << "\n";
			cout << "1 - �������� ���� �����\n2 - ��������� ���� �����\n3 - ������� ���� �����\n4 - ������� ���� �����\n5 - ���������� � �������\n0 � �����";
			break;
			case 5:
			{
				cout << "\n����� ����� ������ �������� � �������?: " << "\n";
				cin >> z4;
				cout << "� ����� ������� ������ ��������?: " << "\n";
				cin >> b4;
				c = pow(z4, b4);

			}
			cout << "�������: " << c << "\n";
			cout << "1 - �������� ���� �����\n2 - ��������� ���� �����\n3 - ������� ���� �����\n4 - ������� ���� �����\n5 - ���������� � �������\n0 � �����";
			break;
			default:
				cout << "������ �������� ���";
			case 0:
			{
				cout << "�����";

			}
			}
		} while (a != 0);*/

											//�������


/*int a[5],i,b;
for (i = 0; i < 5; i++)
{
	cout << "������� ������: ";
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
	cout << "������� ������: ";
	cin >> a[i];
}
for (i = 0; i < 5; i++)
{
	
	sum += a[i];
	p *= a[i];
}

cout<<"\n�����: "<<sum;

cout<<"\n������������: "<<p;*/







/*int a[5], i, b;
for (i = 0; i < 5; i++)
{
	cout << "������� ������: ";
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