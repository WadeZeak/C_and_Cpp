#include<stdlib.h>
#include<stdio.h>

//函数存放在代码区
void gogo()
{
	printf("%d,%d\n", 10, 20);


}

void main1()
{


	printf("%x\n", gogo);//函数名存放函数的地址
	//代码区只能读不能写
	gogo();//直接调用
	void(*p)()= gogo;//指针函数
	p();//间接调用
	system("pause");
}


void main()
{

	char *p = "ABCDEFGH";//p存储常量字符串的地址
	//常量字符串在代码区，只能读
	printf("%d,%d\n", sizeof(p), sizeof("ABCDEFH"));
	printf("%p\n", p);//常看字符串地址
	printf("%p\n",&p);//查看指针变量的地址

	getchar();


}