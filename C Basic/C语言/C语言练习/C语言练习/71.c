/*
建立一个链表，每个结点包括的成员为：职工号、工资。用new函数开辟新结点。
要求链表包括５个结点，从键盘输入结点中的有效数据。然后把这些结点的数据打印出来。
要求用函数creat来建立链表,用list函数来输出数据。这５个职工的职工号是101,103,105,107,109。

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



