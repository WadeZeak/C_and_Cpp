#include<stdlib.h>
#include<stdio.h>


#define DataType int

struct queue
{
	DataType num;//����
	int pri;//���ȼ�
	struct queue *pNext;//�洢��һ���ڵ�ĵ�ַ
};



typedef struct queue Queue;

Queue *Init(Queue *QueueA);//��ʼ��
Queue *EnQueue(Queue *QueueA, DataType num, int pri);//���
Queue *DeQueue(Queue *QueueA, Queue *pout);//����
Queue *FreeAll(Queue *QueueA);//���
void Sort(Queue *QueueA);//ð������������ȼ��Ŷ�
void Print(Queue *QueueA);//��ӡ����
Queue * InsetionSort(Queue *QueueA, DataType num, int pri);//��������
