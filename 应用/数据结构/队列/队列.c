#include"����.h"

void Init(Queue *MyQueue)//��ʼ������
{
	MyQueue->front = MyQueue->rear = 0;//��β���һ��

}

int IsEmpty(Queue *MyQueue)//�ж϶����Ƿ�Ϊ��
{

	if (MyQueue->front == MyQueue->rear)
	{
		return 1;//����Ϊ��
	}

	else
	{
		return 0;//���в�Ϊ��
	}


}


void EnQueue(Queue *MyQueue, DataType num)//���
{
	if (MyQueue->rear==N)//���ʧ��
	{
		printf("���ʧ��!!!\n");
		return ;
	}
	else
	{
		MyQueue->data[MyQueue->rear] = num;
		MyQueue->rear++;
	}
}




DataType Dequeue(Queue *MyQueue)//����
{

	if (MyQueue->front==MyQueue->rear)
	{
		printf("����ʧ��!!!\n");

		return -1;
	}

	else
	{

		MyQueue->front++;
		return	MyQueue->data[MyQueue->front - 1];

	}

}



void PrintQueue(Queue *MyQueue)//��ӡ����
{
	if (MyQueue->rear==MyQueue->front)
	{
		printf("����Ϊ��,��ӡʧ��!!!");
		return;
	}
	else
	{

		for (int i = MyQueue->front; i < MyQueue->rear; i++)
		{
			printf("%c  ", MyQueue->data[i]);
		}
		printf("\n");
	}

}


DataType GetHead(Queue *MyQueue)//��ȡ��ͷ�ĵ�һ��Ԫ��
{
	if (MyQueue->rear == MyQueue->front)
	{
		printf("����Ϊ��,�޷���ȡ��һ��Ԫ��!!!");
		return ;
	}
	else
	{
		return MyQueue->data[MyQueue->front];
	}
}




