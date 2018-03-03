#include<stdlib.h>
#include<stdio.h>


void main1()
{


	for (int  i = 0; i < 10; i++)
	{

		int a = 10;//使用完就回收内存
		static int b = 20;//静态局部变量，与程序共存亡,编译时就初始化
		a = a + 1;
		b = b + 1;
		printf("a=%d,b=%d\n", a, b);
	}

	system("pause");

}

void main2()
{


	for (int i = 1; i <= 100; i++)
	{
		static int sum = 0;//static 只初始化一次

		sum += i;
		printf("%d\n", sum);
	}
	system("pause");
}