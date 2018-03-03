﻿#include<stdlib.h>
#include<stdio.h>


void main()
{
	unsigned int unnum = 0xfffffffff;
	
	printf("%x\n", &unnum);
	printf("%08x\n", unnum );
	printf("%08x\n", unnum>>1);//无符号 向右移
	//1111 1111 1111 1111 1111 1111 1111 1111 
	//0111 1111 1111 1111 1111 1111 1111 1111
	//7f ff ff ff

	printf("\n\n\n");
	int  num = 0xffffffff;
	printf("%x\n", &num);
	printf("%08x\n", num);
	printf("%08x\n", num >> 1);//有符号 向右移,符号不改变(首位不变)
	//0 负号 ; 1 正号
	//1111 1111 1111 1111 1111 1111 1111 1111 
	//1111 1111 1111 1111 1111 1111 1111 1111
	//ff ff ff ff 

	printf("\n\n\n");
	int num1 = 123;
		//‭0000 0000 0000 0000 0000 0000 0111 1011‬
	int num2 =987;
		//‭0000 0000 0000 0000 0000  0011 1101 1011‬

	//&运算 AND
	printf("%08x\n", num1&num2);
	//0x0000005b
	////‭0000 0000 0000 0000 0000 0000 0111 1011‬
	////‭0000 0000 0000 0000 0000 0011 1101 1011‬
	////0000 0000 0000 0000 0000 0000 0101 1011

	// |运算 OR
	printf("%08x\n", num1|num2);
	//0x000003fb
	////‭0000 0000 0000 0000 0000 0000 0111 1011‬
	////‭0000 0000 0000 0000 0000 0011 1101 1011‬
	////0000 0000 0000 0000 0000 0011 1111 1011


	//^运算 XOR  相同的取0，不同的取1
	printf("%08x\n", num1^num2);
	//000003a0
	//‭0000 0000 0000 0000 0000 0000 0111 1011‬
	//‭0000 0000 0000 0000 0000 0011 1101 1011‬
	//0000 0000 0000 0000 0000 0011 1010 0000
	system("pause");


}