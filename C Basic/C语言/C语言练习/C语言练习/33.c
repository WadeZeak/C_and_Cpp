/*
���ܣ���һ��һά�����е�ż�����ν�����������8��Ԫ�أ� �����е�1��4��5��Ԫ����ż��ʱӦ����ͼ������
���ӣ� a[]={2��3��1��6��8��7��9��5}
change to    {8, 3, 1, 2, 6, 7, 9, 5}

*/
#define _CRT_SECURE_NO_WARNINGS

#include<stdlib.h>
#include<stdio.h>
#include<time.h>

void main33()
{
	int n=0;
	printf("������������Ԫ�ظ���:");
	scanf("%d", &n);
	if (n==0||n==1)
	{
		printf("Ԫ�ظ���̫��\n");
		goto Loop;
		return;
	}
	printf("\n");
	int *pnum = (int *)malloc(sizeof(int)*n);
	
	srand((unsigned int)time(NULL));
	int count = 0;
	for (int  i = 0; i < n; i++)
	{
		*(pnum + i) = rand() % 100;
		printf("%d  ", *(pnum + i));
		if (*(pnum+i)%2==0)
		{
			count++;
		}
	}
	
	if (count==0)
	{
		printf("û��ż��\n");
		goto Loop;
		return;
	}
	printf("\n");
	int *pos = (int *)malloc(sizeof(int)*count);


	for (int i = 0,j=0; i < n; i++)
	{
		if (pnum[i]%2==0)
		{
			pos[j] = i;
			j++;
		}
	}
	int next = pnum[pos[0]];
	int tmp = 0;
	for (int i = 0; i < count-1; i++)
	{
		tmp = pnum[pos[i + 1]];
		if (i==count-2)
		{
			pnum[pos[0]] = tmp;
		}
		pnum[pos[i + 1]] =next;
		next = tmp;
	}

	for (int i = 0; i < n; i++)
	{
		printf("%d  ", *(pnum + i));
	}

Loop:
	system("pause");

}