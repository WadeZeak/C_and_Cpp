
/*
50.	求N阶方阵（即N×N数组）中各条反斜线上的元素之和。如4×4数组共有7条反斜线：
25	   1	   8	  12
7	  100	   3	  15
2	   5	   7	   9
8	  11	  22	   6
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>


void main50()
{
	int N = 0;
	printf("请输入矩阵的阶数:");
	scanf("%d", &N);

	srand((unsigned)time(NULL));
	int**p = (int **)malloc(sizeof(int *)*N);
	for (int i = 0; i < N; i++)
	{
		p[i] = (int *)malloc(sizeof(int)*N);
	}


	for (int  i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			p[i][j] = rand() % 100;
			printf("%4d", p[i][j]);
		}
		printf("\n");
	}
	int Sum = 0;

	for (int  i = 0; i < N; i++)//左上角
	{
		for (int j = 0,k=i;k>=0&&j<N ;k--, j++)
		{
			Sum += p[k][j];
		}
	
		printf("%d\n", Sum);
		Sum = 0;
	}

	for (int i=1; i< N; i++)//右下角
	{
		for (int j = N-1,k=i; j >0 &&k<N; j--,k++)
		{
			Sum += p[k][j];
		}

		printf("%d\n", Sum);
		Sum = 0;

	}
	system("pause");



}