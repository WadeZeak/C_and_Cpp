/*
23.	有10个两位整数，把这些数作以下变化，如果它是素数，
则把它乘以2，若它是偶数则除以2，其余的数减1，
请将变化后的10个数按从小到大的次序打印出来。
*/


#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<time.h>

#define N 9

int  isPimeNumber(int num)
{
	for (int  i = 2; i <= sqrt(num); i++)
	{
		if (num%i==0)
		{
			return 0;
		}

	}

	return 1;
}


void Sort(int arr[])
{
	for (int  i = 0; i < 9; i++)
	{
		for (int j = 0; j< 9 -i-1; j++)
		{
			if (arr[j]>arr[j+1])
			{
				int tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			}
		}
	}

}


void main23()
{

	int arr[N] = { 0 };

	srand((unsigned)time(NULL)); // 利用系统时间作为随机数的种子
	

	for (int  i = 0; i < 9; i++)
	{
		int num = rand() % 100;

		if (isPimeNumber(num))
		{
			num *= 2;
		}
		else if (num%2==0)
		{
			num = num - 1;
		}
		arr[i] = num;
		printf("%d  ",num);
		
	}
	printf("\n");
	Sort(arr);
	printf("排序之后:");
	for (int i = 0; i < 9; i++)
	{
		printf("%d  ", arr[i]);
	}
	printf("\n");
	system("pause");
}