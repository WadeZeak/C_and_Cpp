#include<stdlib.h>
#include<stdio.h>


typedef  int DataType;

struct stacknode
{
	int num;//编号
	DataType data;//数据
	struct stacknode *pNext;//指针域
};

typedef struct stacknode StackNode;


StackNode * Init(StackNode *phead);//初始化
StackNode *Push(StackNode *phead, int num, DataType data);//入栈
StackNode *Pop(StackNode *phead, StackNode *p);//出栈
StackNode *FreeAll(StackNode *phead);//释放内存
void Print(StackNode *phead);//打印