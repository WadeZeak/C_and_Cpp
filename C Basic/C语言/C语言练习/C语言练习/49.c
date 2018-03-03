/*
���ܣ���������������Ƶ������������ķ�ʽ�����������е��ƽ�������ģ�
������ԭ��3�������ź���ץ1�����ƣ����������ƵĴ�����ԭ���ĵ�2����֮�󣬵�
3����֮ǰ����ô�Ͱ��������Ʒ��ڵ�3���Ƶ�λ���ϣ�ԭ���ĵ�3�Ÿ�Ϊ��4�ţ�
Ȼ����ץ���ơ���������㷨����дһ���������
ע����ʼһ����Ҳû�У��ӵ�һ���ƿ�ʼץ��

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
	printf("�������Ƶ�����:");
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