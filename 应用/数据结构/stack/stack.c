#define _CRT_SECURE_NO_WARNINGS

#include<stdlib.h>
#include<stdio.h>
#define N 50
struct Mystack
{
	int top;//栈顶
	int data[50];//存储数据

}stack = { -1, {0} };//栈初始化


int IsEmpty()//判断栈是否为空
{
	if (stack.top == -1)
		return 0;//栈为空，返回1
	else	
		return 1;
}

void SetEmpty()
{
	stack.top = -1;
}

int Push(int num)//压入数据
{
	if (stack.top < N - 1)//压入数据成功
	{

		stack.top++;//栈顶向上移动
		stack.data[stack.top] = num;//压入数据
		return 1;
	}
	else//压入数据失败
		return 0;

}


int Pop()//弹出数据
{
	if (stack.top == -1)//栈为空
		return 0;
	else
	{
		stack.top--;//栈顶向下移动
		return stack.data[stack.top + 1];//返回弹出的数据
	}
}



void main1()
{
	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9,10 };

	for (int i = 0; i < 10; i++)//往栈中输入数据
	{
		Push(a[i]);
	}

	while (IsEmpty())//逆序输出数据
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
		printf("%d", Pop());//吐出数据
	}

	system("pause");

}