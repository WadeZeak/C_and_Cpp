/*
功能：编写求最大平台问题的程序。
有n个整数a1,a2, ... an, 若满足a1≤a2≤ ... ≤ an ，
则认为在这n个数中有最大平台。在这种情况下，若n个数互不相同，
则最大平台值为1，若在n个数中最多有连续m个整数的值相等，则最大平台值为m。
例如: n=10时
1,2,3,4,5,6,6,7,4,5    无最大平台
1,1,2,2,2,2,2,2,2,2    最大平台值为8
1,1,2,2,2,3,3,4,4,5    最大平台值为3
0,1,2,3,4,5,6,7,8,9    最大平台值为1

*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>

#define N 10
int judge59(int arr[]);
int getBigst(int arr[]);
int Sort59(int arr);
void main59()
{



	int arr[N] = { 0 };

	srand((unsigned)time(NULL));

	for (int  i = 0; i < N; i++)
	{
		arr[i] = rand() % 10;
		printf("%4d", arr[i]);
	}
	printf("\n\n\n");
	if (rand()%2)
	{
		Sort59(arr);
		for (int i = 0; i < N; i++)
		{
			printf("%4d", arr[i]);
		}
	}
	if (judge59(arr))
	{
	printf("\n最大平台数:%d\n",getBigst(arr));
	}
	system("pause");

}

int judge59(int arr[])
{
	

	for (int i = 0; i < 9; i++)
	{
		if (arr[i]>arr[i+1])
		{
			return 0;
		}
	}
	return 1;
}

int getBigst(int arr[])
{
	int mflag = 0;
	int tmp = 0;
	
	for (int i = 0; i < N; i++)
	{
		tmp = 0;
		for (int j = 0; j < N; j++)
		{
			if (arr[i] == arr[j])
				tmp++;
		}
		if (mflag < tmp)
			mflag = tmp;
		
	}

	return mflag;
}

int Sort59(int arr[])
{

	for (int i = 0; i < N-1; i++)
	{
		for (int j = 0; j < N-i-1; j++)
		{
			if (arr[j]>arr[j+1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}

}