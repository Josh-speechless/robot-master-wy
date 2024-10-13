#include <iostream>
#include <stdio.h>

int main()
{
	for (int n = 100; n < 1000; n++)
	{
		int a = n % 10;                               //个位
		int b = (n % 100 - a) / 10;              //十位
		int c = n / 100;                               //百位
		if (n == a * a * a + b * b * b + c * c * c)          //判断
		{
			printf("%d\n",n);
		}
	}
}
