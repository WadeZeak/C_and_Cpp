/*
����һ������ÿ���������ĳ�ԱΪ��ְ���š����ʡ���new���������½�㡣
Ҫ���������������㣬�Ӽ����������е���Ч���ݡ�Ȼ�����Щ�������ݴ�ӡ������
Ҫ���ú���creat����������,��list������������ݡ��⣵��ְ����ְ������101,103,105,107,109��

*/

#include<stdlib.h>
#include<stdio.h>


typedef struct Worker worker;
struct Worker
{
	int id;
	int wages;
	worker *pNext;
};



worker * newNode(worker *phead, int id, int wages)
{

	worker *p = (worker *)malloc(sizeof(worker));
	p->id = id;
	p->wages = wages;
	p->pNext = NULL;
	if (!phead)
	{
		phead = p;
	}
	else
	{
		worker *ptmp = phead;
		while (ptmp->pNext)
		{
			ptmp = ptmp->pNext;
		}

		ptmp->pNext = p;

	}
	return phead;

}

worker *creatLink()
{
	return NULL;

}

void List(worker *phead)
{
	worker *p = phead;
	while (p)
	{
		printf("ID=%d,wages=%d\n", p->id, p->wages);
		p = p->pNext;
	}

}



void main71()
{
	worker *phead = creatLink();
	for (int i = 101; i < 110; i+=2)
	{
		phead=newNode(phead, i, rand() % 2000 + 2000);
	}
	List(phead);
	system("pause");

}



