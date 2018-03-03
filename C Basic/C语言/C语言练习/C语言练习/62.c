
/*
62.	比高矮: 100个学生任意排成10行、10列的正方形队列，在每一列中选出一个最矮的（10个）
, 然后在这10个矮人中选出最高的一个人, 叫做“矮人中的高个子”。
而后这10个矮人仍站回到各自的位置,再在每一行中选出一个最高者（10个）
，又从这10个高人中选出最矮的一人, 叫做“高人中的矮个子”。
问“矮人中的高个子”和“高人中的矮个子”中谁的个子高？
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>

int getGA(int arr[][10])
{
	int GA[10] = { 0 };
	for (int i = 0; i < 10; i++)
	{
		GA[i] = arr[0][i];
		for (int j = 1; j <10; j++)
		{
			if (GA[i]<arr[j][i])
			{
				GA[i] = arr[j][i];
			}
		}
	}
	printf("\n\nGA:\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%6d", GA[i]);
	}
	printf("\n\n");
	int min = GA[0];
	for (int i = 1; i < 9; i++)
	{
		if (min<GA[i])
		{
			min = GA[i];
		}
	}
	return min;
}


int getAG(int arr[][10])
{

	int AG[10] = { 0 };
	for (int i = 0; i < 10; i++)
	{
		AG[i] = arr[0][i];
		for (int j = 1; j <10; j++)
		{
			if (AG[i]>arr[j][i])
			{
				AG[i] = arr[j][i];
			}
		}
	}

	int max = AG[0];
	printf("\n\nAG:\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%6d", AG[i]);
	}
	printf("\n\n");
	for (int i = 1; i < 9; i++)
	{
		if (max<AG[i])
		{
			max = AG[i];
		}
	}
	return max;

}


void main62()
{

	int arr[10][10] = { 0 };
	srand((unsigned)time(NULL));
	for (int  i = 0; i < 10; i++)
	{
		for (int j = 0; j< 10; j++)
		{
			arr[i][j] = rand() % 100 + 100;
			printf("%6d", arr[i][j]);
		}
		printf("\n");
	}


	int GA = getGA(arr);
	int AG = getAG(arr);

	if (AG==GA)
	{
		printf("一样高\n");
	}
	else if (AG>GA)
	{
		printf("矮人中的高个子高\n");
	}
	else
	{
		printf("高人中的矮个子高\n");
	}
	system("pause");

}