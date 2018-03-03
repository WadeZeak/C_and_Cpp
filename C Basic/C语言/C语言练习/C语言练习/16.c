/*
找规律，编程序打印6×6的矩阵:

1   2   3   5   8   13
1   4   9  17  30   51
1   6  19  45  92  173
. . .

*/


#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
void main16()
{

	int arr[6][6] = { 0 };
	arr[0][0] = 1; 
	arr[0][1] = 2;

	for (int  i = 1; i < 6; i++)
	{
		arr[i][0] = 1;
	}

	for (int i = 2; i < 6; i++)
	{
		arr[0][i] = arr[0][i - 1] + arr[0][i - 2];

	}

	for (int  i = 1; i < 6; i++)
	{
		for (int j = 1; j < 6; j++)
		{
			arr[i][j] = arr[i - 1][j] + arr[i][j - 1] + arr[i - 1][j - 1];
		}
	}

	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			printf("%6d", arr[i][j]);
		}
		printf("\n");
	}
	system("pause");


}