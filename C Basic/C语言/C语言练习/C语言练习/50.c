
/*
50.	��N�׷��󣨼�N��N���飩�и�����б���ϵ�Ԫ��֮�͡���4��4���鹲��7����б�ߣ�
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
	printf("���������Ľ���:");
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

	for (int  i = 0; i < N; i++)//���Ͻ�
	{
		for (int j = 0,k=i;k>=0&&j<N ;k--, j++)
		{
			Sum += p[k][j];
		}
	
		printf("%d\n", Sum);
		Sum = 0;
	}

	for (int i=1; i< N; i++)//���½�
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