
#include<stdlib.h>
#include<stdio.h>
#pragma comment(lib,"动态库与静态库.lib")
//头文件是声明,静态库自己有接口 

void main()
{
	printf("%d\n", add(4, 5));
	msg();

}