#include<stdlib.h>
#include<stdio.h>
#include<limits.h>

void main8()
{

	int x = 1;
	int y = -1;

	printf("%p,%p\n", &x, &y);
	system("pause");

}


void main9()
{
	//int/unsigned int 4字节 32位

	//1111 1111 1111 1111 1111 1111  1111 1111 1111 //正数   全是数字
	//0111 1111 1111 1111 1111 1111  1111 1111 1111 //有符号 最高一位代表符号 0 :+  ; 1-> -
	printf("%d,%d\n", INT_MAX, INT_MIN);//%d范围 INT_MIN -- INT_MAX 
	printf("%d,%d\n", INT_MAX-1, INT_MIN-1);
	printf("%u,%u\n", 0, UINT_MAX);//%u 范围 0--UINT_MAX



	system("pause");
}

void main11()
{
	int num = UINT_MAX;//-1

	//1111 1111 1111 1111 1111 1111 1111 1111
	//无符号,没有符号为，全部是数据  4294967285
	//有符号 ,先取反码,再取补码 -1

	printf("%u,%d\n",num, num);

	//0000 0000 0000 0000 0000 0000 0000 0001   1 原码 （补码，反码均一样）

	//1000 0000 0000 0000 0000 0000 0000 0001  -1 原码
	//1111 1111 1111 1111 1111 1111 1111 1110 -1  反码
	//1111 1111 1111 1111 1111 1111 1111 1111  -1 补码


	int y = -1;
	printf("%d,%u\n", y, y);



	system("pause");

}



void hrh757()
{


	unsigned int num = -1;
	printf("%u,%d\n", num, num);

	system("pause");
}