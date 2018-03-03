#include<stdlib.h>
#include<stdio.h>

void maingedrg()
{

	//相等为0，不等位0
	int a = 9;//0000 1001
	int b = 3;//0000 0011


	//异或运算实现数据交换
	//不会越界
	a = a^b;//0000 1010  10
	b = b^a;//0000 1001  9
	a = a^b;//0000 0011  3
	printf("a=%d,b=%d\n",a,b );


	//交换两数据
	//a=a+b;
	//b=a-b;
	//a=a-b;
	//乘除法类似


	system("pause");
}