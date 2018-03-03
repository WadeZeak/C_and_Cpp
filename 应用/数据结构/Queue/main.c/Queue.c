#include"Queue.h"

Queue *Init(Queue *QueueA)//��ʼ��
{
	return NULL;
}


Queue *EnQueue(Queue *QueueA, DataType num, int pri)//���
{

	Queue *pnew = (Queue *)malloc(sizeof(Queue));//�����½ڵ�
	pnew->num = num;
	pnew->pri = pri;
	pnew->pNext = NULL;

	if (QueueA==NULL)//����λ��Ϊͷ���
	{
		QueueA = pnew;
		return QueueA;
	}
	else
	{
		Queue *p = QueueA;
		while (p->pNext!=NULL)//ѭ��������ĩβ�����в���
		{
			p = p->pNext;
		}
		p->pNext = pnew;
		//Sort(QueueA);
		return QueueA;

	}
}


Queue *DeQueue(Queue *QueueA, Queue *pout)//����
{
	if (QueueA==NULL)//����Ϊ��,����ʧ��
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


Queue *FreeAll(Queue *QueueA)//���
{


}



Queue * InsetionSort(Queue *QueueA,DataType num,int pri)//��������
{

	Queue *pnew = (Queue *)malloc(sizeof(Queue));//�����½ڵ�
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
		//ͷ������
		if (pnew->pri<QueueA->pri)
		{

			pnew->pNext = QueueA;
			QueueA = pnew;
			return QueueA;
		}
		else
		{
			Queue *p = QueueA;
			while (p->pNext!=NULL)//ѭ��������β��
			{
				p = p->pNext;
			}

			if (pnew->pri>p->pri)//�ڶ���β������
			{
				pnew->pNext = NULL;
				p->pNext = pnew;
				return QueueA;
			}
			else//���м����
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

void Sort(Queue *QueueA)//ð������,�������ȼ��Ŷ�
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

void Print(Queue *QueueA)//��ӡ����
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