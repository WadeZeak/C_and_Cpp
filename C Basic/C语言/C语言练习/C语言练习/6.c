/*6.	将一个6×6数组的第一行、第六行、主对角线和副对角线上的元素都存入1，
其余的元素都存入 - 1。请编程序实现。*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>

void main6()
{
	int arr[6][6];
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			if (i==0||i==5||i==j||j==5-i)
			{
				arr[i][j] = 1;
			}
			else
			{
				arr[i][j] = -1;
			}
			
		}
	}

	for (int i = 0; i < 6; i++)
	{
		for (int j= 0; j < 6; j++)
		{
			printf("%3d", arr[i][j]);

		}
		printf("\n");
	}


	system("pause");
}