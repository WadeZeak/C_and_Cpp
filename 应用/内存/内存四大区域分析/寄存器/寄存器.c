#include<stdio.h>
#include<stdlib.h>

void main1()
{

	int a = 1;


	int b = a + 1;//a+1 不在内存中，在寄存器中
	//寄存器中不能保存实体



	b = a + 2;

	b = a + 3;


	getchar();


}

void main()
{

	//register int a = 10;
	//&a;//地址指的是内存的地址，在CPU中没有地址
	//寄存器变量上的“&”

	int a = 10;
	int b;

	//汇编实现 b=a+5 
	_asm{

		mov eax, 10

		add eax ,5

		mov b, eax

	}

	//赋值只能对内存保存结果的进行赋值,CPU用于中间的计算

	printf("%d\n", b);
	system("pause");

}