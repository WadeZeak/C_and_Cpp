#define _CRT_SECURE_NO_WARNINGS

#include"StackLinkNode.h"



void main1()
{

	StackNode *phead=(StackNode *)malloc(sizeof(StackNode));
	phead = Init(phead);
	phead = Push(phead, 1, 1);
	phead = Push(phead, 2, 20);
	phead = Push(phead, 3, 13);
	phead = Push(phead, 4, 8);
	phead = Push(phead, 5, 16);
	phead = Push(phead, 6, 36);
	phead = Push(phead, 7, 77);
	phead = Push(phead, 8, 20);
	Print(phead);

	printf("\n\n\n");
	/*{
		StackNode *pout = (StackNode *)malloc(sizeof(StackNode));
		while (phead != NULL)
		{
			phead = Pop(phead, pout);
			printf("Pop Stack:");
			printf("num=%d,data=%d\n", pout->num, pout->data);
			Print(phead);
			printf("\n\n");
		}
	}*/
	phead=FreeAll(phead);

	if (phead == NULL)
	{
		printf("链式栈释放成功!!!\n");
	}

	system("pause");

}


void main()
{

	StackNode *phead = (StackNode *)malloc(sizeof(StackNode));
	phead = Init(phead);
	int num;
	scanf("%d", &num);

	while (num)
	{
		phead = Push(phead, num / 2, num % 2);
		num /= 2;
	}

		StackNode *pout = (StackNode *)malloc(sizeof(StackNode));
		while (phead != NULL)
		{
		 phead= Pop(phead, pout);
			printf("%d", pout->data);

		}


	system("pause");
}