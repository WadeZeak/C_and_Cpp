/*
�ֱ�����N��M����������A������B�С���ֻ������һ�������г��ֵ���Щ�����뵽����C�У���ָ��������A��B�����е�λ�á�
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>

void main44()
{
	int M = 0;
	printf("�������������Ԫ�صĸ���M:");
	scanf("%d", &M);

	int N = 0;
	printf("�������������Ԫ�صĸ���N:");
	scanf("%d", &N);


	int *pA = (int *)malloc(sizeof(int)*M);
	int *pB = (int *)malloc(sizeof(int)*N);
	int *pC = (int *)malloc(sizeof(int)*(M+N));

	srand((unsigned)time(NULL));
	for (int i = 0; i < M; i++)
	{
		pA[i] = rand() % 30;
	}

	for (int i = 0; i < N; i++)
	{
		pB[i] = rand() % 30;
	}

	int flag = 0;
	int k = 0;
	//A��B�Ƚ�
	for (int i = 0; i < M; i++)
	{
		flag = 0;
		for (int j = 0; j < N; j++)
		{
			if (pA[i]==pB[j])
			{
				flag = 1;
				break;
			}
		}
		if (!flag)
		{
			pC[k] = pA[i];
			printf("%d,A:%d   ", pA[i], i);
			k++;
		}
	}
	printf("\n");
	//B��A�Ƚ�
	for (int i = 0; i < N; i++)
	{
		flag = 0;
		for (int j = 0; j < M; j++)
		{
			if (pB[i] == pA[j])
			{
				flag = 1;
				break;
			}
		}
		if (!flag)
		{
			pC[k] = pB[i];
			printf("%d,B:%d   ",pB[i],i );
			k++;
		}
	}

	printf("\n");
	//��ӡC
	for (int i = 0; i < k; i++)
	{
		printf("%d  ", pC[i]);
	}
	system("pause");
}