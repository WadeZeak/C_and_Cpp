#include<stdio.h>
#include<stdlib.h>



int a = 3;


void main()
{
	printf("%d\n", a);//全局变量
	int a = 100;//出现重名,无法使用全局变量
	printf("%d\n", a);
	system("pause");
}