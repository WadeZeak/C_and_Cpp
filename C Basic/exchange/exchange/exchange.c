#include<stdio.h>

void main()
{

	int x=10, y=20;
	printf("x=%d,y=%d \n",x,y);

	//交换方式一
	/*
	int temp;//定义中间变量
	temp=x;
	x = y;
	y = temp;
	printf("x=%d,y=%d\n", x, y);
	*/

	//交换方式二
	//数学方法 加减法
	/*
	x=x+y;
	y= x - y;//x最初的值
	x = x - y;//y的最初的值
	printf("x=%d,y=%d", x, y);
	*/

	//交换方式三 乘除法,原理与加减法类似
	x = x*y;
	y = x / y;
	x = x / y;
	printf("x=%d,y=%d", x, y);
	getchar();
}