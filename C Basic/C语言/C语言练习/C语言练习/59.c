/*
���ܣ���д�����ƽ̨����ĳ���
��n������a1,a2, ... an, ������a1��a2�� ... �� an ��
����Ϊ����n�����������ƽ̨������������£���n����������ͬ��
�����ƽֵ̨Ϊ1������n���������������m��������ֵ��ȣ������ƽֵ̨Ϊm��
����: n=10ʱ
1,2,3,4,5,6,6,7,4,5    �����ƽ̨
1,1,2,2,2,2,2,2,2,2    ���ƽֵ̨Ϊ8
1,1,2,2,2,3,3,4,4,5    ���ƽֵ̨Ϊ3
0,1,2,3,4,5,6,7,8,9    ���ƽֵ̨Ϊ1

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
	printf("\n���ƽ̨��:%d\n",getBigst(arr));
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