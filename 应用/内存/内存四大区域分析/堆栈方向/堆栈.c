#include<stdlib.h>
#include<stdio.h>

void main()
{
	//栈区向上递减，堆区向下递增
	void *p1 = malloc(100);
	void *p2 = malloc(200);

	printf("%x,%x\n", &p1,&p2);//地址在栈区
	printf("%x,%x\n",p1, p2);//堆区

	getchar();
}