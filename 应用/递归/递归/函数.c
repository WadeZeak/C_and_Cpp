#define   _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>



int add(int a, int b)
{
	printf("^%d,%d\n", a, b);
	return a + b;

}

int mul(int a, int b)
{
	printf("^%d,%d\n",a, b);
	return a * b;

}

void mainsrg()
{

	int x, y;
	scanf("%d%d",&x, &y);
	//printf("Hello World\n");
	printf("%d\n", add(x,y));
	printf("%d\n", mul(x, y));
	system("pause");
}