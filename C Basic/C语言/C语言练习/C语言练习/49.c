/*
功能：插入排序。许多玩牌的人是以这样的方式来对他们手中的牌进行排序的：
设手中原有3张牌已排好序，抓1张新牌，若这张新牌的次序在原来的第2张牌之后，第
3张牌之前，那么就把这张新牌放在第3张牌的位置上，原来的第3张改为第4张，
然后再抓新牌。按着这个算法，编写一个排序程序。
注：开始一张牌也没有，从第一张牌开始抓起。

*/


#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
typedef  struct Card CARD;

struct Card
{
	int num;
	CARD *pNext;
};



CARD *InsertionSort(CARD *pHead,int num)
{

	CARD *p = (CARD *)malloc(sizeof(CARD));
	p->num = num;
	p->pNext = NULL;
	if (pHead == NULL)
	{		
		pHead = p;
	}
	else 
	{
		CARD *ptmp = pHead;
		

		if (p->num<pHead->num)
		{
			p->pNext = pHead;
			pHead = p;
		}
		else
		{
			while (ptmp->pNext != NULL)
			{
				ptmp = ptmp->pNext;
			}
			if (ptmp->num<=p->num)
			{
				ptmp->pNext = p;			
			}
			else
			{
				CARD *pt = pHead;
				while (pt->pNext&&pt)
				{
					if ((p->num>pt->num)&&(pt->pNext->num>p->num))
					{
						p->pNext = pt->pNext;
						pt->pNext = p;
					}

					pt = pt->pNext;
				}
			}
		}	
	}
	return pHead;
}

void show(CARD *pHead)
{
	while (pHead)
	{
		printf("%4d", pHead->num);
		pHead = pHead->pNext;
	}
}

void main49()
{
	CARD *pHead=NULL;
	int num = 0;
	printf("请输入牌的张数:");
	scanf("%d", &num);
	int n = 0;
	srand((unsigned)time(NULL));
	for ( int i = 0; i < num; i++)
	{
		n = rand() % 100;
		pHead = InsertionSort(pHead, n);
		show(pHead);
		printf("\n");

	}
	system("pause");
}