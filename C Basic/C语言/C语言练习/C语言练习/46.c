
/*
46.	��֪M1��3��5�ľ���, M2��5��2�ľ���, ��������M1��M2֮����

*/
#include<stdlib.h>
#include<stdio.h>


void main46()
{
	int M1[3][5] = { 0 };
	int M2[5][2] = { 0 };
	srand((unsigned)time(NULL));
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			M1[i][j] = rand() % 50;
			printf("%4d", M1[i][j]);
		}
		printf("\n");
	}

	printf("\n\n");
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			M2[i][j] = rand() % 50;
			printf("%4d", M2[i][j]);
		}
		printf("\n");
	}


	int sum = 0;
	for (int  i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			for (int k = 0; k < 5; k++)
			{
				sum += M1[i][k] * M2[k][j];
			}
			printf("%6d", sum);
		}
		printf("\n");
	}
	system("pause");


}