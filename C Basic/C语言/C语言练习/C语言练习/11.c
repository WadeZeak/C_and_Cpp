/*
11.	判断一个给定的5×5方阵是否以第3列为轴线对称?
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>

void Input(int arr[][5])
{

	for (int  i = 0; i < 5; i++)
	{
		for (int  j = 0; j < 5; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}




}


void main11()
{

	int arr[5][5];
	Input(arr);
	for (int  i = 0; i < 5; i++)
	{
		for (int  j = 0; j < 5/2; j++)
		{
			if (arr[i][j]!=arr[i][4-j])
			{
				printf("该方阵不以第3列为轴线对称...");
				goto Loop;
				return;
			}

		}
	}


	printf("该方阵以第3列为轴线对称...");

Loop:
	system("pause");
	return;

}