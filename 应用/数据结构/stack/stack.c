#define _CRT_SECURE_NO_WARNINGS

#include<stdlib.h>
#include<stdio.h>
#define N 50
struct Mystack
{
	int top;//ջ��
	int data[50];//�洢����

}stack = { -1, {0} };//ջ��ʼ��


int IsEmpty()//�ж�ջ�Ƿ�Ϊ��
{
	if (stack.top == -1)
		return 0;//ջΪ�գ�����1
	else	
		return 1;
}

void SetEmpty()
{
	stack.top = -1;
}

int Push(int num)//ѹ������
{
	if (stack.top < N - 1)//ѹ�����ݳɹ�
	{

		stack.top++;//ջ�������ƶ�
		stack.data[stack.top] = num;//ѹ������
		return 1;
	}
	else//ѹ������ʧ��
		return 0;

}


int Pop()//��������
{
	if (stack.top == -1)//ջΪ��
		return 0;
	else
	{
		stack.top--;//ջ�������ƶ�
		return stack.data[stack.top + 1];//���ص���������
	}
}



void main1()
{
	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9,10 };

	for (int i = 0; i < 10; i++)//��ջ����������
	{
		Push(a[i]);
	}

	while (IsEmpty())//�����������
	{

		printf("%d\n", Pop());
	}
	system("pause");

}



//DEC TO BIN
void main2()
{
	int num;	
	scanf("%d", &num);

	while (num)
	{
		Push(num%2);
		num /= 2;
	}



	while (IsEmpty())
	{
		printf("%d", Pop());//�³�����
	}

	system("pause");

}