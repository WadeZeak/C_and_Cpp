/*
22.	有一批实数，用零作终止标记。请编程序找出这批数中的最大值及最小值，
并输出该最大值数是这批数中的第几个数（若最大值数多次出现，只打印出第一个的位置）。
又问：若打印出每个最大值数的位置，程序应如何修改?
*/


#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#define N 100

float FindMax(float arr[], int len)
{

	float tmp = arr[0];
	for (int  i = 1; i < len; i++)
	{
		if (arr[i]>tmp)
		{
			tmp = arr[i];
		}
	}
	return tmp;
}

float FindMin(float arr[], int len)
{

	float tmp = arr[0];
	for (int i = 1; i < len; i++)
	{
		if (arr[i]<tmp)
		{
			tmp = arr[i];
		}
	}
	
	return tmp;


}

void main22()
{

	float arr[N] = { 0 };
	int count = 0;
	
	while (1)
	{
		float tmp = 0;
		scanf("%f", &tmp);
		if (tmp==0)
		{
			break;
		}
		arr[count] = tmp;
		count++;		
	}

	float maxnum = FindMax(arr, count);
	float minnum = FindMin(arr, count);


	printf("最小的数字为:%f\n", minnum);
	printf("最大的数字为:%f\n", maxnum);

	printf("最大数字的位置为:");
	for (int i = 0; i < count; i++)
	{
		if (arr[i]==maxnum)
		{
			printf("%d ", i);
		}

	}

	printf("\n");

	system("pause");
}