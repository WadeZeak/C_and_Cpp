
/*
62.	�ȸ߰�: 100��ѧ�������ų�10�С�10�е������ζ��У���ÿһ����ѡ��һ����ģ�10����
, Ȼ������10��������ѡ����ߵ�һ����, �����������еĸ߸��ӡ���
������10��������վ�ص����Ե�λ��,����ÿһ����ѡ��һ������ߣ�10����
���ִ���10��������ѡ�����һ��, �����������еİ����ӡ���
�ʡ������еĸ߸��ӡ��͡������еİ����ӡ���˭�ĸ��Ӹߣ�
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>

int getGA(int arr[][10])
{
	int GA[10] = { 0 };
	for (int i = 0; i < 10; i++)
	{
		GA[i] = arr[0][i];
		for (int j = 1; j <10; j++)
		{
			if (GA[i]<arr[j][i])
			{
				GA[i] = arr[j][i];
			}
		}
	}
	printf("\n\nGA:\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%6d", GA[i]);
	}
	printf("\n\n");
	int min = GA[0];
	for (int i = 1; i < 9; i++)
	{
		if (min<GA[i])
		{
			min = GA[i];
		}
	}
	return min;
}


int getAG(int arr[][10])
{

	int AG[10] = { 0 };
	for (int i = 0; i < 10; i++)
	{
		AG[i] = arr[0][i];
		for (int j = 1; j <10; j++)
		{
			if (AG[i]>arr[j][i])
			{
				AG[i] = arr[j][i];
			}
		}
	}

	int max = AG[0];
	printf("\n\nAG:\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%6d", AG[i]);
	}
	printf("\n\n");
	for (int i = 1; i < 9; i++)
	{
		if (max<AG[i])
		{
			max = AG[i];
		}
	}
	return max;

}


void main62()
{

	int arr[10][10] = { 0 };
	srand((unsigned)time(NULL));
	for (int  i = 0; i < 10; i++)
	{
		for (int j = 0; j< 10; j++)
		{
			arr[i][j] = rand() % 100 + 100;
			printf("%6d", arr[i][j]);
		}
		printf("\n");
	}


	int GA = getGA(arr);
	int AG = getAG(arr);

	if (AG==GA)
	{
		printf("һ����\n");
	}
	else if (AG>GA)
	{
		printf("�����еĸ߸��Ӹ�\n");
	}
	else
	{
		printf("�����еİ����Ӹ�\n");
	}
	system("pause");

}