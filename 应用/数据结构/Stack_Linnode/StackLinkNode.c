#include"StackLinkNode.h"



StackNode * Init(StackNode *pHead)//初始化
{
	return NULL;
}


StackNode *Push(StackNode *phead, int num, DataType data)//入栈
{

	StackNode *pnew = (StackNode *)malloc(sizeof(StackNode));
	pnew->data = data;
	pnew->num = num;
	pnew->pNext = NULL;
	if (phead==NULL)//链表为空
	{
		phead = pnew; 
		return phead;
	}
	else
	{
		StackNode *p = phead;
		while (p->pNext!=NULL)//向前移动，到达链表末尾
		{
			p = p->pNext;
		}
		p->pNext = pnew;
		return phead;

	}


}





StackNode *Pop(StackNode *phead, StackNode *pout)//出栈
{

	if (phead==NULL)
	{
		return NULL;//没有元素,返回NULL
	}
	else if (phead->pNext==NULL)
	{
		pout->data = phead->data;
		pout->num = phead->num;
		pout->pNext = NULL;
		free(phead);
		phead = NULL;
		return phead;
	}
	else
	{

		StackNode *p = phead;
		while (p->pNext->pNext!=NULL)//循环到倒数第二个节点
		{
			p = p->pNext;
		}
		pout->data = p->pNext->data;
		pout->num = p->pNext->num;
		free(p->pNext);//释放最后一个节点
		p->pNext = NULL;
		return phead;

	}
}



StackNode *FreeAll(StackNode *pHead)//释放内存
{

	if (pHead==NULL)
	{
		return NULL;
	}
	else
	{

		StackNode *p1, *p2;
		p1 = pHead;
		p2 =NULL;
		while (p2!=NULL)
		{
			p2 = p1->pNext;
			p1->pNext = p2->pNext;
			free(p2);
		}
		free(pHead);
		pHead = NULL;
		return pHead;
	}
}




void Print(StackNode *phead)
{
	if (phead==NULL)
	{
		return;
	}
	else
	{
		printf("num=%d,data=%d,pNext=%p\n",phead->num,phead->data,phead->pNext);
		phead = phead->pNext;
		Print(phead);
	}
}