/*
11.	�ж�һ��������5��5�����Ƿ��Ե�3��Ϊ���߶Գ�?
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>

void Input(int arr[][5])
{

	for (int  i = 0; i < 5; i++)
	{
		for (int  j = 0; j < 5; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}




}


void main11()
{

	int arr[5][5];
	Input(arr);
	for (int  i = 0; i < 5; i++)
	{
		for (int  j = 0; j < 5/2; j++)
		{
			if (arr[i][j]!=arr[i][4-j])
			{
				printf("�÷����Ե�3��Ϊ���߶Գ�...");
				goto Loop;
				return;
			}

		}
	}


	printf("�÷����Ե�3��Ϊ���߶Գ�...");

Loop:
	system("pause");
	return;

}