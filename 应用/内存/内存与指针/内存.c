#include<stdlib.h>
#include<stdio.h>

void change(int a)//创建一个新的变量
{
	a = 8;
}

void changeA(int *p)//创建一个指针p,接收&a地址
{
	*p = 8;//*(地址) 进行赋值
}
void maintktktk()
{
	int a=10;
	change(a);
	printf("%d\n", a);

	changeA(&a);
	printf("%d\n", a);



	system("pause");
}


void mainkg()
{

	int num = 100;
	int *p = &num;
	//(int *)指针,包含一个地址
	//*p 是int型数据


	//p的值一个地址，存储着num的地址
	printf("%x,%x\n", &num, &p);
	//*p，根据一个地址获取内容
	*p = 20;

	printf("%d", num);



	system("pause");
}

void mainghjf()
{

	/*int a[100] = { 0 };
	printf("%x", a);*/

	int  num = 100;
	printf("%d,%x\n", num, &num);
	printf("%d", *(&num));

	//& 取地址
	//* 取出地址中的内容
	system("pause");
}