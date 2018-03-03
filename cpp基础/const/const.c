#include <stdio.h>
#include<stdlib.h>

#define X 10 //define 内部外部都不能修改

const int num = 10;//const 伪常量，可以修改内存,程序内部不能修改

void main()
{

	//printf("%x",&X);//常量不能取地址
	printf("%x", &num);

	
	printf("%d",num);
	getchar();
}