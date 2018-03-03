/*
���ܣ�����һ������ÿ����������ѧ�š��������Ա����䡣����һ�����䣬��������еĽ����������������ڴ����䣬���˽��ɾ���������������

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
		printf("�����ڴ�ʧ��");
	}
	ps->id = ID;
	printf("������ѧ��������:");
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
			printf(",��,");
		}
		else
		{
			printf(",Ů,");
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
	printf("������ѧ��������:");
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		phead=insert(phead);
	
	}
	printf("\n\n");
	showAll(phead);
	printf("\n\n");
	int age = 0;
	printf("��������Ҫɾ����ѧ��������:");
	scanf("%d", &age);
	phead=delnode(phead, age);
	printf("\n\n");
	showAll(phead);

	system("pause");

}

