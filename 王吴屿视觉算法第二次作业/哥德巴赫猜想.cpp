#include <iostream>
#include <stdio.h>

int prime(int n)                               //判断是否为素数
{
	if (n <= 1)                                  //小于等于1的都不是素数
	{
		return 0;
	}

	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)                         //循环除以小于该数的除1外的正整数，若可以整除，则不为素数
		{
			return 0;
		}
	}

	return 1;                                     //若为满足上面两个条件，则为素数
}

int  main()
{
	int N = 0;
	scanf_s("%d", &N);
	if (N < 4 || N>10000)
	{
		printf("false\nrestart\n");
		return 0;
	}
	for (int j = 4; j <= N; j += 2)                   //列出所有大于4小于N的偶数
	{
		for (int k = 2; k < N; k++)                  //k为第一个加数
		{
			if (prime(k))                               //第一个加数为素数
			{
				int sub = j - k;                           //sub为第二个加数
				if (prime(sub))                          //第二个加数也为素数
				{
					printf("%d=%d+%d\n", j, k, sub);
					break;
				}
			}
		}
	}
	return 0;
}

