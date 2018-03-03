#include"StackLinkNode.h"



StackNode * Init(StackNode *pHead)//��ʼ��
{
	return NULL;
}


StackNode *Push(StackNode *phead, int num, DataType data)//��ջ
{

	StackNode *pnew = (StackNode *)malloc(sizeof(StackNode));
	pnew->data = data;
	pnew->num = num;
	pnew->pNext = NULL;
	if (phead==NULL)//����Ϊ��
	{
		phead = pnew; 
		return phead;
	}
	else
	{
		StackNode *p = phead;
		while (p->pNext!=NULL)//��ǰ�ƶ�����������ĩβ
		{
			p = p->pNext;
		}
		p->pNext = pnew;
		return phead;

	}


}





StackNode *Pop(StackNode *phead, StackNode *pout)//��ջ
{

	if (phead==NULL)
	{
		return NULL;//û��Ԫ��,����NULL
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
		while (p->pNext->pNext!=NULL)//ѭ���������ڶ����ڵ�
		{
			p = p->pNext;
		}
		pout->data = p->pNext->data;
		pout->num = p->pNext->num;
		free(p->pNext);//�ͷ����һ���ڵ�
		p->pNext = NULL;
		return phead;

	}
}



StackNode *FreeAll(StackNode *pHead)//�ͷ��ڴ�
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