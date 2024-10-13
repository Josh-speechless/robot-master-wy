#include <iostream>
#include<stdio.h>

int main()
{
    int N = 0;
    scanf_s("%d",&N);                                        //输入需排序数的个数
    int a[100000];
    for (int i = 0; i < N; i++)                               //循环向数组输入
    {
        scanf_s("%d", &a[i], 1000000000);
    }

    int temp = 0;                                                    //冒泡法排序
    for (int j = 0; j < N; j++)
    {
        
        for (int i = 0; i < N-1; i++)
        {
            if (a[i] > a[i + 1])
            {
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
    }
   
    for (int i = 0; i < N; i++)                           //打印
    {
        printf("%d ", a[i]);
    }
}