#include <iostream>
#include<stdio.h>

int main()
{
	int n = 0;
	scanf_s("%d", &n);                                    //数组中数的个数
	int a[31];
	for (int i = 0; i < n; i++)                           //向数组输入值
	{
		scanf_s("%d", &a[i]);
	}
	printf("\n");

	int feibo[31];                                             //求斐波那契数列的数组
	feibo[1] = { 1 };
	feibo[2] = { 1 };
	for (int i = 3; i < 31; i++)
	{
		feibo[i] = feibo[i - 1] + feibo[i - 2];
	}

	int temp = 0;                                            //打印
	for (int i = 0; i < n; i++)
	{
		temp = a[i];
		printf("%d\n", feibo[temp]);
	}
}
