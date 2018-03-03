#include <stdio.h>

void main1()
{
	int x = 1;
	//printf 本质上输出字符串，不能直接输出变量

	printf("%x\n",&x);
	printf("你好！！%d个人",x);

	printf("\n你好！！%d个人", x);

	getchar();

	//printf("%d", 10);//将10映射为字符串

}