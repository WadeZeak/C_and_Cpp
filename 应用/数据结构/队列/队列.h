#include<stdio.h>
#include<stdlib.h>


#define N 100 //���������󳤶�
#define DataType char //������е���������


struct queue
{
	DataType data[N];//�洢����
	int front;//���п�ʼ
	int rear;//���н���

};

typedef struct queue Queue;//��


void Init(Queue *MyQueue);//��ʼ��
int IsEmpty(Queue *MyQueue);//�ж϶����Ƿ�Ϊ��
void EnQueue(Queue *MyQueue, DataType num);//���
DataType Dequeue(Queue *MyQueue);//����
void PrintQueue(Queue *MyQueue);//��ӡ����
DataType GetHead(Queue *MyQueue);//��ȡ��ͷ�ĵ�һ��Ԫ��
