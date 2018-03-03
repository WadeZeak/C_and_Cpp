#include"队列.h"

void Init(Queue *MyQueue)//初始化队列
{
	MyQueue->front = MyQueue->rear = 0;//首尾起初一样

}

int IsEmpty(Queue *MyQueue)//判断队列是否为空
{

	if (MyQueue->front == MyQueue->rear)
	{
		return 1;//队列为空
	}

	else
	{
		return 0;//队列不为空
	}


}


void EnQueue(Queue *MyQueue, DataType num)//入队
{
	if (MyQueue->rear==N)//入队失败
	{
		printf("入队失败!!!\n");
		return ;
	}
	else
	{
		MyQueue->data[MyQueue->rear] = num;
		MyQueue->rear++;
	}
}




DataType Dequeue(Queue *MyQueue)//出队
{

	if (MyQueue->front==MyQueue->rear)
	{
		printf("出队失败!!!\n");

		return -1;
	}

	else
	{

		MyQueue->front++;
		return	MyQueue->data[MyQueue->front - 1];

	}

}



void PrintQueue(Queue *MyQueue)//打印队列
{
	if (MyQueue->rear==MyQueue->front)
	{
		printf("队列为空,打印失败!!!");
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


DataType GetHead(Queue *MyQueue)//获取开头的第一个元素
{
	if (MyQueue->rear == MyQueue->front)
	{
		printf("队列为空,无法获取第一个元素!!!");
		return ;
	}
	else
	{
		return MyQueue->data[MyQueue->front];
	}
}




