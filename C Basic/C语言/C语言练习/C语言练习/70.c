/*
70.	有两个链表ａ和ｂ。设结点中包含学号、姓名。
从ａ链表中删除与ｂ链表中有相同学号的那些结点

*/


#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef  struct StudentA StuA;


struct StudentA
{
	int id;
	char name[5] ;
	StuA *pNext;
};




StuA * insertA(StuA *phead,int num)
{
	
	StuA *ps=(StuA *)malloc(sizeof(StuA));
	char str[5] = { 'A' + num };
	strcpy(ps->name, str);
	ps->id = rand() % 20 + 1;
	ps->pNext = NULL;
	if (phead)
	{
		StuA *p = phead;
		while (p->pNext)
		{
			p = p->pNext;
		}

		p->pNext = ps;
	}
	else
	{
		phead = ps;
	}

	return phead;
}

void deleteSame(StuA **ppha, StuA *phb)
{
	StuA *pb =phb;

	StuA *p1 = NULL, *p2 = NULL;
	int flag = 0;
	while (pb)
	{	
		p1 = *ppha;
		flag = 0;
		while (p1)
		{
			if (p1->id == pb->id)
			{
				flag = 1;
				break;
			}
				p2 = p1;
				p1 = p1->pNext;
			
		}
		if (flag)
		{
			if (p1 == *ppha)//头结点
			{
				(*ppha) = p1->pNext;
			}
			else
			{
				p2->pNext = p1->pNext;
			}
			free(p1);//删除节点

		}
	
		pb = pb->pNext;
	}
}

void printAll(StuA *phead)
{

	StuA *p = phead;
	while (p)
	{
		printf("%d,%s\n", p->id, p->name);
		p = p->pNext;
	}
}

void main70()
{

	StuA *pha = NULL, *phb = NULL;

	int numA=0;
	int numB=0;
	printf("请输入学生的数目:");
	scanf("%d", &numA);
	scanf("%d", &numB);


	for (int i = 0; i < numA; i++)
	{
		pha = insertA(pha, i);
	}


	for (int i = 0; i < numB; i++)
	{
		phb = insertA(phb, i);
	}




	printAll(pha);
	printf("\n\n");
	printAll(phb);
	
	deleteSame(&pha, phb);
	printf("\n\n");
	printAll(pha);


	system("pause");
}