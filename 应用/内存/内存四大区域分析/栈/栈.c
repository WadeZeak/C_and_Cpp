#include<stdlib.h>
#include<stdio.h>



void test()
{

	int a = 10;//自动分配 自动释放 栈的运行与更新速度非常快


	printf("%x\n", &a);
}


void main1()
{

	//auto int a = 10; //auto 自动变量  自动分配 自动释放

	test();

	printf("\n\n");

	test();
	system("pause");


}