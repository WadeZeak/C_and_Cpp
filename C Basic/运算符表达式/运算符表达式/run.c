#include<stdio.h>

void main1()
{
	int num = 10;
	num = num+5;
	//printf("%d", num);

	//插入汇编语言
	_asm
	{
	mov eax,num //eax是存储器，将num的值存到eax中

	add eax,5 //eax + 5

	mov num,eax//将eax的值赋值给num
	}
	printf("\n%d", num);
	getchar();


}