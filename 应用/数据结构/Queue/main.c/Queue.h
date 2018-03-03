#include<stdlib.h>
#include<stdio.h>


#define DataType int

struct queue
{
	DataType num;//数据
	int pri;//优先级
	struct queue *pNext;//存储下一个节点的地址
};



typedef struct queue Queue;

Queue *Init(Queue *QueueA);//初始化
Queue *EnQueue(Queue *QueueA, DataType num, int pri);//入队
Queue *DeQueue(Queue *QueueA, Queue *pout);//出队
Queue *FreeAll(Queue *QueueA);//清空
void Sort(Queue *QueueA);//冒泡排序根据优先级排队
void Print(Queue *QueueA);//打印数据
Queue * InsetionSort(Queue *QueueA, DataType num, int pri);//插入排序
