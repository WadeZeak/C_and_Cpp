/*
23.	��10����λ����������Щ�������±仯���������������
���������2��������ż�������2�����������1��
�뽫�仯���10��������С����Ĵ����ӡ������
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

	srand((unsigned)time(NULL)); // ����ϵͳʱ����Ϊ�����������
	

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
	printf("����֮��:");
	for (int i = 0; i < 9; i++)
	{
		printf("%d  ", arr[i]);
	}
	printf("\n");
	system("pause");
}