/*
已知有9个数，请求出这些数中的最大值、最小值及平均值，以及有多少个数等于平均值?
*/
#define _CRT_SECURE_NO_WARNINGS

#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int FindMaxX(int arr[])
{
	int max = arr[0];
	for (int i = 1; i < 9; i++)
	{
		if (max<arr[i])
		{
			max = arr[i];
		}
	}

	return max;

}


int FindMinX(int arr[])
{
	int min = arr[0];
	for (int i = 1; i < 9; i++)
	{
		if (min>arr[i])
		{
			min = arr[i];
		}
	}

	return min;

}


void Average(int arr[])
{
	int sum = 0;

	for (int i = 0; i < 9; i++)
	{
		sum += arr[i];
	}
	int avg = sum / 9;
	printf("avg=%d\n", avg);
	int count=0;
	for (int i = 0; i < 9; i++)
	{
		if (avg==arr[i])
		{
			count++;
		}
	}

	printf("等于平均值的数个数:%d" , count);
}

void main28()
{


	srand((unsigned)time(NULL));
	int arr[9] = { 0 };

	for (int i = 0;  i < 9;  i++)
	{
		arr[i] = rand() % 100;
		printf("%d  ", arr[i]);
	}

	printf("\n");
	printf("%d\n", FindMaxX(arr));
	printf("%d\n", FindMinX(arr));
	Average(arr);
	system("pause");


}