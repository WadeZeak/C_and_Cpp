
#include<stdio.h>
#include<stdlib.h>

int returntest()
{	
printf("Hello World\n");
	return 1;
	//printf("Hello World\n");
	return 2;
	printf("Hello China\n");
	return 3;
	printf("End!!!\n");
}


void main()
{

	int i = returntest();
	printf("i=%d\n", i);
	getchar();

}