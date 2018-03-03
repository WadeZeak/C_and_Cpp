#include<stdio.h>
#include<stdlib.h>
#include"1.h"
#pragma comment(lib,"lib.lib")//包含静态库
void msg();
void main()
{
	msg();

	printf("Hello World!!");
//	go();//无法解析的外部命令
	//没有实体
	//编译可以成功，但是无法运行
	//编译是翻译成机器语言，0与1
	system("pause");
}