#include<stdio.h>

void main1()
{

	putchar('a');
	getchar();
}

void main2()
{

	printf("\\");//用\\代替\

	putchar('\"');//用\"代替"
	putchar('\"');//用\'代替'
	getchar();
}