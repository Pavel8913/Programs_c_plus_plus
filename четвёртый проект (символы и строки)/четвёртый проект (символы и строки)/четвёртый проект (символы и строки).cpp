// четвёртый проект (символы и строки).cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include<cmath>
#include<ctime>
using namespace std;
int main()
{
	setlocale(0, "rus");


	/*char y[30];

	cin >> y;
	for (int i = 0; y[i] != '\0'; i++)
	{
		if (y[i] >= '0'&&y[i] <= '9')
		{
			y[i] = '*';
			
		}
	}
	cout << y;*/
	


	/*char y[10];
	cin >> y;
	bool metka = true;
	for (int i = 0; y[i] != '\0'; i++)
	{
		if (!(y[i] >= '0'&&y[i] <= '9'))
		{
			 metka = false;
			 break;
		}


	}
	if (metka == true)
	{
		cout << "это целое число";
	}
	else 
	{
		cout << "это не целое число";

	}*/


	/*char y[10];
	cin >> y;
	int x=0;
	bool metka = true;
	for (int i = 0; y[i] != '\0'; i++)
	{
		if (y[i]=='.')
		{
			x++;
		}
	
	else if (!(y[i] >= '0'&&y[i] <= '9'))
		{
			metka = false;
		}
		
	}
	if (metka == true&&x<=1)
	{
		cout << "это вещественное число";
	}
	else
	{
		cout << "это не вещественное число";

	}*/



	/*char y[10];
	cin >> y;
	int x = 0;
	char g[] = "aeiouyAEIOUY";
	for (int i = 0; y[i] != '\0'; i++)
	{
		for (int j = 0; g[j] != '\0'; j++)
		{
			if (y[i]==g[j])
			{
				x++;
			}

		}


	}

	cout << x;*/


	/*char y[30];
	cin >> y;
	int x = 0;
	for (int i = 0; y[i] != '\0'; i++)
	{
	
			if (!(y[i] >= '.'&&y[i] >= 'A'&&y[i] <= 'Z'))
			{

				x++;

			}
		
		
		
	}


	

		cout << "\nошибок:" << x;*/



/*char y[30];
cin >> y;
int x=0, sum = 0;
for (int i = 0; y[i] != '\0'; i++)
{


	if (y[i] >= '0'&&y[i] <= '9')
	{
		sum += y[i] - '0';
	}
}													
	cout << "сумма:" << sum;*/


		
	/*char y[30],max=0;
	cin >> y;
	int x = 0,num;
	for (int i = 0; y[i] != '\0'; i++)
	{
		if (y[i] >= '0'&&y[i] <= '9')
		{
			if (y[i] > max)
			{

			max = y[i] ;

			}
				
			
		}

	}
	
		cout << "максимальный элемент:" << max;*/






/*char y[1000];
char a, t;
for (a = 'a'; a <= 'z'; a++)
{
printf("%c\t%d\n", a, a);
}
for (t = 'A'; t <= 'Z'; t++)
{
	 printf("%c\t%d\n", t, t);

}*/


/*char y[30];
int x = 0;
cin >> y;
char a, t;
for (int i = 0; y[i] != '\0';i++)
{

	if (y[i]>='a'&&y[i]<='z')
	{
		y[i] -= 'a'; y[i] += 'A';
	}

else if (y[i] >= 'A'&&y[i] < 'Z')
{
	

	y[i] -= 'A'; y[i] += 'a';


}
}

cout << y;*/



/*char str[10],strr[10];
int x = 0;
cin >> str>>strr;
int a, t=0,k=0;
bool metka = true;
for (int i = 0; str[i] != '\0';i++)
{
	k++;

}
for (int i = 0; strr[i] != '\0';i++)
{
	t++;

}
if (k != t)
{
	cout << "не равны";
}
else
{
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != strr[i])
		{
			metka = false;
			break;
		}
	}

	if (metka == true)
	{
		cout << " строки не равны";
	}

	else
	{

		cout << "сроки равны";
	}
}*/


/*char str[10];
int x = 0;
cin >> str;	
int a, t = 0, k = 0;
for (int i = 0; str[i] != '\0'; i++)
{

	if (str[i] == '(')
	{
		k++;
	}
	else if (str[i] == ')')
	{
		k--;
	}
	if (k < 0)
	{
		break;
	}
}
	if (k == 0)
		cout << "Баланс соблюдён";
	else
		cout << "Баланс не соблюдён";*/



/*char str[30],strr[30],stt;
cin >> str>>stt;
int  k = 0, j = 0;
for (int i = 0; str[i] != '\0'; i++)
{
	
	if (str[i] != stt)
		{
			strr[j] = str[i];
			
			j++;
	}
	
}
for (int i = 0; i < j; i++)
{
	cout << strr[i];
}*/



char str[30], strr[30], stt;
cin >> str;
int  k = 0, j = 0;
for (int i = 0; str[i] != '\0'; i++)
{
	if (str[i] >='A'&& str[i]<='Z')
	{
		strr[k] = '.';
		k++;
	}
	strr[k] = str[i];
		k++;
}
for (int i = 0; i < k; i++)
{
	cout << strr[i];
}














	

    system("pause");
    return 0;
}

