#include<stdlib.h>
#include<stdio.h>

#define DataType int 

struct node
{
	int num;//编号
	DataType data;//数据
	struct Node *pNext;
};

typedef struct node  Node;

//增删改查，逆转，排序

//函数构思思想
//改变一个变量,需要变量的地址;改变一个指针，需要指针的地址
//不用二级指针,必须用返回值

void backaddnode(Node **ppnode, int num, DataType data);//增加节点，方法1
Node *backaddnodeA(Node **ppnode, int num, DataType data);//增加节点 ，方法2
Node *searchnode(Node *pnode, int num);//查询
void showallnode(Node *pnode);//显示所有节点
Node *rev(Node *pnode);//链表逆转
int change(Node *pnode, int oldnum, int newnum);//修改
Node *delete(Node *pnode, int num);//删除 //delete C++关键字
Node * insert(Node *pnode, int findnum,int newnum,DataType data);//前面插入
Node *sort(Node *pnode, int vote);//排序,0 降序；1 升序





