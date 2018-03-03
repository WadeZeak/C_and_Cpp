#include<stdlib.h>
#include<stdio.h>

void main1()
{
	int num = 1;
	printf("%d\n", num);
	//正序
	//0000 0000 
	//0000 0000
	//0000 0000 
    //0000 0001

	//内存中倒序存储
	//1000 0000 
	//0000 0000 
	//0000 0000 
	//0000 0000 



	system("pause");
}



void main2()
{
//	int num = 010;//八进制

	int num = 0x12345678;
	//低位->低字节 高位->高字节
	//78
	//56
	//43
	//21

	printf("%p\n", &num);
	printf("%x\n", num);
	system("pause");
}

