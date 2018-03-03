#include"Queue.h"

Queue *Init(Queue *QueueA)//初始化
{
	return NULL;
}


Queue *EnQueue(Queue *QueueA, DataType num, int pri)//入队
{

	Queue *pnew = (Queue *)malloc(sizeof(Queue));//定义新节点
	pnew->num = num;
	pnew->pri = pri;
	pnew->pNext = NULL;

	if (QueueA==NULL)//插入位置为头结点
	{
		QueueA = pnew;
		return QueueA;
	}
	else
	{
		Queue *p = QueueA;
		while (p->pNext!=NULL)//循环到队列末尾，进行插入
		{
			p = p->pNext;
		}
		p->pNext = pnew;
		//Sort(QueueA);
		return QueueA;

	}
}


Queue *DeQueue(Queue *QueueA, Queue *pout)//出队
{
	if (QueueA==NULL)//队列为空,返回失败
	{
		return NULL;
	}
	else
	{
		pout->num = QueueA->num;
		pout->pri = QueueA->pri;
		pout->pNext = NULL;
		QueueA = QueueA->pNext;
		return QueueA;
	}

}


Queue *FreeAll(Queue *QueueA)//清空
{


}



Queue * InsetionSort(Queue *QueueA,DataType num,int pri)//插入排序
{

	Queue *pnew = (Queue *)malloc(sizeof(Queue));//定义新节点
	pnew->num = num;
	pnew->pri = pri;

	if (QueueA==NULL)
	{
		pnew->pNext = NULL;
		QueueA = pnew;
		return QueueA;
	}
	else
	{
		//头部插入
		if (pnew->pri<QueueA->pri)
		{

			pnew->pNext = QueueA;
			QueueA = pnew;
			return QueueA;
		}
		else
		{
			Queue *p = QueueA;
			while (p->pNext!=NULL)//循环到队列尾部
			{
				p = p->pNext;
			}

			if (pnew->pri>p->pri)//在队列尾部插入
			{
				pnew->pNext = NULL;
				p->pNext = pnew;
				return QueueA;
			}
			else//在中间插入
			{
				Queue *p1, *p2;
				p1 = QueueA;
				p2 =NULL;
				
				while (p1->pNext!=NULL)
				{
					p2 = p1->pNext;
					if ((pnew->pri>=p1->pri)&&(pnew->pri<=p2->pri))
					{
						p1->pNext = pnew;
						pnew->pNext = p2;
						return QueueA;

					}

					p1 = p1->pNext;

				}
		}


		}

	}

}

void Sort(Queue *QueueA)//冒泡排序,根据优先级排队
{
	if (QueueA==NULL||QueueA->pNext==NULL)
	{
		return;
	}
	else
	{

		for (Queue *p1 = QueueA; p1 != NULL;p1=p1->pNext)
		{
			for (Queue *p2 = p1; p2 !=NULL;p2=p2->pNext )
			{
				if (p1->pri>p2->pri)
				{
					Queue ptemp;
					ptemp.num = p1->num;
					p1->num = p2->num;
					p2->num = ptemp.num;

					ptemp.pri = p1->pri;
					p1->pri = p2->pri;
					p2->pri = ptemp.pri;

				}
			}
		}
	}

}

void Print(Queue *QueueA)//打印数据
{
	if (QueueA==NULL)
	{
		return;
	} 
	else
	{
		printf("num=%d,pri=%d,QueueA=%p,QueueA->pNext=%p\n", QueueA->num, QueueA->pri,QueueA,QueueA->pNext);
		Print(QueueA->pNext);
	}

}