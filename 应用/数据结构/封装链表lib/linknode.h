#include<stdlib.h>
#include<stdio.h>

#define DataType int 

struct node
{
	int num;//���
	DataType data;//����
	struct Node *pNext;
};

typedef struct node  Node;

//��ɾ�Ĳ飬��ת������

//������˼˼��
//�ı�һ������,��Ҫ�����ĵ�ַ;�ı�һ��ָ�룬��Ҫָ��ĵ�ַ
//���ö���ָ��,�����÷���ֵ

void backaddnode(Node **ppnode, int num, DataType data);//���ӽڵ㣬����1
Node *backaddnodeA(Node **ppnode, int num, DataType data);//���ӽڵ� ������2
Node *searchnode(Node *pnode, int num);//��ѯ
void showallnode(Node *pnode);//��ʾ���нڵ�
Node *rev(Node *pnode);//������ת
int change(Node *pnode, int oldnum, int newnum);//�޸�
Node *delete(Node *pnode, int num);//ɾ�� //delete C++�ؼ���
Node * insert(Node *pnode, int findnum,int newnum,DataType data);//ǰ�����
Node *sort(Node *pnode, int vote);//����,0 ����1 ����





