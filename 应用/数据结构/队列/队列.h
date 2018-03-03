#include<stdio.h>
#include<stdlib.h>


#define N 100 //定义队列最大长度
#define DataType char //定义队列的数据类型


struct queue
{
	DataType data[N];//存储数据
	int front;//队列开始
	int rear;//队列结束

};

typedef struct queue Queue;//简化


void Init(Queue *MyQueue);//初始化
int IsEmpty(Queue *MyQueue);//判断队列是否为空
void EnQueue(Queue *MyQueue, DataType num);//入队
DataType Dequeue(Queue *MyQueue);//出队
void PrintQueue(Queue *MyQueue);//打印队列
DataType GetHead(Queue *MyQueue);//获取开头的第一个元素
