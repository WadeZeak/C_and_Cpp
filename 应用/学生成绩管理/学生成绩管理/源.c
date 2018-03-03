
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#define size 20

typedef struct list//定义结构体
{
	char data[10]; struct list *next;
}list;
list* create()//创建链表
{
	list *p, *q;
	list *head;
	head = (list*)malloc(sizeof(list));
	if (head == NULL)
	{
		free(head); return NULL;
	}
	q = head;
	printf("please input a name!\n");
	char n[10];
	gets(n);
	while (strlen(n) != 0)
	{
		p = (list*)malloc(sizeof(list));
		if (p == NULL) return head;
		strcpy(p->data, n);
		q->next = p;
		q = p;
		printf("do you want to input another one?if yes,please input again.\n");
		fflush(stdin);
		gets(n);
	}
	q->next = NULL;
	return head;
}
void printlist(list* head)//打印数据
{
	list *pos;
	pos = head->next;
	while (pos != NULL)
	{
		puts(pos->data);
		pos = pos->next;
	}
}
void insertlist_h(list*head, char insertdata[])//首部插入
{
	list *cur = (list*)malloc(sizeof(list));
	strcpy(cur->data, insertdata);
	cur->next = head->next; 
		head->next = cur;
}
void insertlist_t(list* head, char insertdata[])//尾部插入
{
	list *cur = (list*)malloc(sizeof(list));
	list *p = head->next;
	while (p != NULL)
	{
		if (p->next == NULL)
		{
			strcpy(cur->data, insertdata);
			p->next = cur;
			cur->next = NULL;
			break;
		}
		else
			p = p->next;
	}
}
void destorylist(list *head)
{
	list *p;
	while (head)
	{
		p = head->next;
		free(p);
		head = p;
	}
}
void menu()
{
	printf("+++++++++++++++++++++++\n");
	printf("+ 1.create +\n");
	printf("+ 2.insert_head +\n");
	printf("+ 3.insert_tail +\n");
	printf("+ 4.print +\n");
	printf("+ 5.exit +\n");
	printf("+ 6.destory_list +\n");
	printf("+++++++++++++++++++++++\n");
}
int main()
{
	list *head = NULL;
	int n;
	while (1)
	{
		menu();
		fflush(stdin);//清空缓存区，防止读入脏数据
		printf("please input your command:");
		scanf("%d", &n);
		switch (n)
		{
		case 1: fflush(stdin);
			system("cls");//清屏
			head = create();
			system("cls");
			break;
		case 2: fflush(stdin);
			printf("input the insertdata:");
			char a[10];
			system("cls");
			scanf("%s", a);
			insertlist_h(head, a);
			system("cls");
			break;
		case 3: fflush(stdin);
			printf("input the insertdata:");
			char b[10];
			system("cls");
			scanf("%s", b);
			insertlist_t(head, b);
			system("cls");
			break;
		case 4: fflush(stdin);
			system("cls");
			if (head != NULL)
				printlist(head);
			else printf("no information!");
			getchar();
			system("cls");
			break;
		case 5: printf("exit!");
			exit(0);
			system("cls");
			break;
		case 6: fflush(stdin);
			destorylist(head);
			system("cls");
			printf("you have destoried the list!");
			getchar();
			system("cls");
			break;
		default:
			printf("input error!\n");
			break;
		}
	}
	return 0;
}

