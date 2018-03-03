/*
功能：建立一个链表，每个结点包括：学号、姓名、性别、年龄。输入一个年龄，如果链表中的结点所包含的年龄等于此年龄，将此结点删除，输出最后的链表。

*/


#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<string.h>

static ID = 1;

struct Student
{

	int id;
	char name[10];
	int sex;
	int age;
	struct Student *pNext;

};

typedef  struct Student Stu;

Stu * insert(Stu *pHead)
{
	
	srand((unsigned)time(NULL));
	char str[10] = { 0 };

	Stu *ps = (Stu *)malloc(sizeof(Stu));
	if (!ps)
	{
		printf("分配内存失败");
	}
	ps->id = ID;
	printf("请输入学生的名称:");
	scanf("%s", str);
	strcpy(ps->name, str);
	ps->age = rand() % 10 + 10;
	ps->sex = rand() % 2;
	ps->pNext = NULL;
	ID++;

	if (pHead)
	{
		Stu *p = pHead;
		while (p->pNext)
		{
			p = p->pNext;
		}
		p->pNext = ps;
	}	
	else
	{
		pHead = ps;
	}
	return pHead;
	
}


Stu * delnode(Stu *phead,int age)
{
	Stu *ptmp = NULL;
	
	if (phead->age==age)
	{
		ptmp = phead;
		phead = phead->pNext;
		free(ptmp);
	}
	Stu *p = phead;
	
	while (p->pNext)
	{
		if (p->pNext->age==age)
		{
			ptmp = p->pNext;
			p->pNext = p->pNext->pNext;
			free(ptmp);
		}
		p = p->pNext;
	}
	return phead;
}

void showAll(Stu *pHead)
{
	while (pHead)
	{
		printf("%d,%s", pHead->id,pHead->name);
		if (!pHead->sex)
		{
			printf(",男,");
		}
		else
		{
			printf(",女,");
		}
		printf("%d", pHead->age);
		pHead = pHead->pNext;
		printf("\n");
	}
}



void main69()
{

	Stu *phead=NULL;
	int n;
	printf("请输入学生的数量:");
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		phead=insert(phead);
	
	}
	printf("\n\n");
	showAll(phead);
	printf("\n\n");
	int age = 0;
	printf("请输入需要删除的学生的年龄:");
	scanf("%d", &age);
	phead=delnode(phead, age);
	printf("\n\n");
	showAll(phead);

	system("pause");

}

