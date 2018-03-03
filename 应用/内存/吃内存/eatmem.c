#include<windows.h>
#include<stdlib.h>

void main()
{ 
	while (1)
	{
		malloc(1000000);//malloc 分配内存,1000000字节
		sleep(10000);//等待1s，1000ms
	}
	}