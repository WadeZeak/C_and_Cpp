#include<stdlib.h>
#include<stdio.h>



int num= 200;//静态区
//静态区与栈区区别
//在静态区与程序共存亡，静态区分配内存优先于main函数
//栈区，反复回收，反复释放



void test()
{
	int data = 100;//栈区

	printf("%p,%p\n", &num, &data);

	num = 101;


	data = 35;

	

}


void main()
{

	test();

	printf("\n\n");


	test();

	getchar();


}