#include <stdio.h>

void main3()
{
	int num = 1;

	printf("%x", &num);//打印num的地址，%x 十六进制  79fc78

	num = 3;

	num = 5;

	printf("\n%d", num);
	getchar();
}


