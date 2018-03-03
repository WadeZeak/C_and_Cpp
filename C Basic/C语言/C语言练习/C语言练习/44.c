/*
分别输入N和M个数到数组A和数组B中。把只在其中一个数组中出现的那些数送入到数组C中，并指出它们在A或B数组中的位置。
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>

void main44()
{
	int M = 0;
	printf("请输入数组的中元素的个数M:");
	scanf("%d", &M);

	int N = 0;
	printf("请输入数组的中元素的个数N:");
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
	//A与B比较
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
	//B与A比较
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
	//打印C
	for (int i = 0; i < k; i++)
	{
		printf("%d  ", pC[i]);
	}
	system("pause");
}