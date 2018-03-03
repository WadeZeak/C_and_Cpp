
/*
功能：间隔元素排序。用随机函数产生25个[25,75]之间的整数， 把它送到一维数组M中。
要求对M[I],M[I+J],M[I+2*J],…这些元素按从小到大的顺序排序。
J的值由键盘输入，I从1到J变化。实际上是以J为间隔排了J个对列，每个对列中从小到大排序。
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>

void Sort67(int arr[], int i,int J)
{


	if (i<25/J)
	{
		for (int  m = 0; m < 25/J; m++)
		{
			for (int n = i; n < 25-(m+1)*J-i; n+=J)
			{
				if (arr[n]>arr[n+J])
				{
					int tmp = arr[n];
					arr[n] = arr[n + J];
					arr[n + J] = tmp;
				}
			}
		}
	}
	else
	{
		for (int m = 0; m < 25 / J-1; m++)
		{
			for (int n = i; n < 25 - (m + 1)*J - i; n += J)
			{
				if (arr[n]>arr[n + J])
				{
					int tmp = arr[n];
					arr[n] = arr[n + J];
					arr[n + J] = tmp;
				}
			}
		}
	}
}



void main67()
{
	int arr[25] = { 0 };

	for ( int i = 0;   i < 25;   i++)
	{
		arr[i] = rand() % 51 + 25;
		printf("%4d", arr[i]);
	}


	int J = 0;
	printf("\n\n请输入间隔:");
	scanf("%d", &J);

	for (int i = 0; i < J; i++)
	{
		Sort67(arr, i, J);
	}

	printf("\n\n排序后:\n");
	for (int i = 0; i < 25; i++)
	{
		printf("%4d", arr[i]);
	}

	
	system("pause");
}