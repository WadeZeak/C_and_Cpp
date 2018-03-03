/*
已知有N个无规律的正整数，请编程序求出其中的素数并打印出能被5整除的数之积。
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<time.h>

int  isPimeNumberX(int num)
{
	for (int i = 2; i <= sqrt(num); i++)
	{
		if (num%i == 0)
		{
			return 0;
		}

	}

	return 1;
}

void main24()
{

	int arr[5] = { 0 };

	srand((unsigned)time(NULL));
	int product = 0;

	printf("素数为:");
	for (int  i = 0; i < 5; i++)
	{
		arr[i] = rand();
	
		if (isPimeNumberX(arr[i]))
		{
			printf("%d ", arr[i]);
		}
		if (arr[i]%5==0)
		{
			product *= arr[i];
		}
	}

	printf("\n能被5整除的数之积:%d\n", product);

	for (int  i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}


	system("pause");



}