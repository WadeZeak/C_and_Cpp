#include<stdio.h>
#include<stdlib.h>

void gogo(int b[10])
{
	printf("%d\n", sizeof(b));

	int c[20];//非参数实际大小
	printf("%d\n", sizeof(c));

}


void maindfgsg()
{


	int a[10];
	printf("%d\n", sizeof(a));
	gogo(a);//数组作为参数，传递的是地址，4个字节
	system("pause");


}
