#include<stdio.h>

void main1()
{

	putchar('a');
	getchar();
}

void main2()
{

	printf("\\");//��\\����\

	putchar('\"');//��\"����"
	putchar('\"');//��\'����'
	getchar();
}