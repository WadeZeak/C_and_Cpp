#include<stdio.h>
#include<stdlib.h>

void main1()
{
	//数据类型指明了二进制如何解析
	int num1 = 10;
	float num2 = 10.0;
	printf("%x,%x\n", &num1, &num2);

	printf("%f,%x\n", num1, num1);//同一个变量第一次解析出错，之后的解析会一直出错

	printf("%x,%f\n", num2, num2);
	

	getchar();
}