
/*
功能：二维数组排序。设有4×5的数组M，通过排序使
M[1][1]≤M[1][2]≤...≤M[1][5]≤M[2][1]≤M[2][2]≤...≤M[2][5]≤...≤M[4][1]≤M[4][2]≤...≤M[4][5]。
排序时不允许引入其它数组。

*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include<math.h>

void main65()
{
	int arr[4][5] = { 0 };
	for (int  i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			arr[i][j] = rand() % 100;
			printf("%4d", arr[i][j]);
		}
		printf("\n");
	}

	for (int i=0 ; i < 19; i++)
	{
		for (int *p = &arr[0][0]; (p-&arr[0][0]) < (20-i-1); p++)
		{
			if (*p>*(p+1))
			{
				int tmp = *(p+1);
				*(p + 1) = *p;
				*p = tmp;
			}
		}
	}

	printf("\n\n\n");

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
		
			printf("%4d", arr[i][j]);
		}
		printf("\n");
	}
	system("pause");
}