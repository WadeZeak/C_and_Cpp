#include<stdlib.h>
#include<stdio.h>


typedef  int DataType;

struct stacknode
{
	int num;//���
	DataType data;//����
	struct stacknode *pNext;//ָ����
};

typedef struct stacknode StackNode;


StackNode * Init(StackNode *phead);//��ʼ��
StackNode *Push(StackNode *phead, int num, DataType data);//��ջ
StackNode *Pop(StackNode *phead, StackNode *p);//��ջ
StackNode *FreeAll(StackNode *phead);//�ͷ��ڴ�
void Print(StackNode *phead);//��ӡ