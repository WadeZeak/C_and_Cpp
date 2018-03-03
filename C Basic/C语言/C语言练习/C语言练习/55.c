/*
功能：已知A是有30个元素的整型数组，编写一个对A[I1]到A[I2]（I1≤I2）之间的元素排序的函数（从大到小排序）
请调用上述函数先将A[5]至A[20]之间的元素排序，然后将A中的所有元素值输出。再调用上述函数对A[15]至A[30]之间的元素排序，
最后再将A中30个元素值输出。
要求：1) 输入输出均由主函数实现。
2) 输出时每10个元素占1行。

*/


#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>

void Sort55(int A[],int I1, int I2)
{

	for (int i = I1 - 1; i < I2-1 ; i++)
	{
		for (int j = I1-1; j < I2-(i+1-I1)-1; j++)
		{
			if (A[j]>A[j+1])
			{
				int tmp = A[j];
				A[j] = A[j + 1];
				A[j + 1] = tmp;
			}
		}
	}
}


void main55()
{
	int A[30] = { 0 };
	for (int i = 0; i < 30; i++)
	{
		A[i] = rand()%100;
	}

	for (int i = 0; i < 30; i++)
	{
		printf("%4d", A[i]);
		if ((i+1) % 10 == 0)
		{
			printf("\n");
		}
	}
	int I1 = 0;
	int I2 = 0;
	
	printf("\n请输入I1和I2(I1<=I2):");

	scanf("%d", &I1);
	scanf("%d", &I2);
	Sort55(A, I1, I2);
	printf("\n第一次排序后\n");
	for (int i = 0; i < 30; i++)
	{
		printf("%4d", A[i]);
		if ((i+1)%10==0)
		{
			printf("\n");
		}
	}


	printf("\n\n\n请输入I1和I2(I1<=I2):");

	scanf("%d", &I1);
	scanf("%d", &I2);

	Sort55(A, I1, I2);
	printf("\n第二次排序后\n");

	for (int  i = 0; i < 30; i++)
	{
		printf("%4d", A[i]);
		if ((i+1) % 10 == 0)
		{
			printf("\n");
		}
	}

	system("pause");
}