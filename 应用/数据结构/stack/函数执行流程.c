#include<stdlib.h>
#include<stdio.h>



void print2()
{
	printf("Hell Stack!!");
	printf("Hello BaiDu!!\n");


}

void print1()
{
	printf("Hello World!!\n");
	print2();
	printf("Hello China!!\n");
}




void main()
{

	print1();
	printf("1\n");
	printf("2\n");
	system("pause");
}

//’ª«¯≈≈¡–
//Hello World!!
//Hell Stack!!
//Hello BaiDu!!
//Hello China!!
//1
//2