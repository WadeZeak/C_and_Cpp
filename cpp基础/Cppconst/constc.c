#include<stdlib.h>
#include<stdio.h>


void main1()
{
	const int num = 100;
	//int a[num];//C语言中禁止   C语言中num是伪常量

	printf("%d\n", num);

	int *p = &num;//C语言是弱类型语言,类型检测不太严格
	*p = 50;
	printf("%d\n", num);


	system("pause");
}