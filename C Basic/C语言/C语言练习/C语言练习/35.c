/*
35.	用随机函数求出10组三位正整数，每组十个数，
调用一函数打印出每组数，并编一函数求出每组中的最大数。
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>

void findMax(int arr[])
{
	int max = arr[0];
	for (int i = 1; i < 10; i++)
	{
		if (arr[i]>max)
		{
			max = arr[i];

		}
	}

	printf("       Max=%d", max);


}

void printArray(void)
{

	
	int sum = 0;
	int i = 0;
	int arr[10] = {0};

	while (i<10)
	{
		arr[i]= 100 + rand() % 900;
		printf("%6d", arr[i]);		
		sum += arr[i];
			i++;
	}

	findMax(arr);
}

void main35()
{
	
	for (int i = 0; i < 10; i++)
	{
		printArray();
		printf("\n");
	}
	system("pause");



}