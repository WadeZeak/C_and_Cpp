#include<stdlib.h>
#include<stdio.h>

static int num = 100;//static 限定全局变量只能在本C文件中使用


void main1tfhr()
{

	printf("num=%d\n", num);

	system("pause");


}




void main()
{


	int AAA = 5;
	printf("%d,%d\n", AAA, ++AAA);//先自增,再调用
	system("pause");

}