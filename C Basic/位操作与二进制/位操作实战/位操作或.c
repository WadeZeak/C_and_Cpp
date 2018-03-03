#include<stdlib.h>
#include<stdio.h>

void mainsvsd()
{

	unsigned char ch = 255;//1111 1111
	unsigned char ch1 = 240;//1111 0000
	unsigned char ch2 = ch&ch1;//1111 0000
	unsigned char ch3 = ch | ch1;//1111 1111
	
	printf("%d\n", ch2);
	printf("%d\n", ch3);
	system("pause");
}