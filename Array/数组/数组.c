#include<stdlib.h>
#include<stdio.h>
#define N 20

void main1()
{

	int p[N];
	//printf("%x", &N); define定义的常量不存在地址，由编译器放在常量区，没有地址则不能修改
	
	const int num=10;
	printf("%x", &num);	
	/*
	int a[num]; 不可以使用const 定义的常量定义数组大小
	const 限定的代码不能修改，在内存有实体，在内存中是可变的
	可以强制去掉常量属性
	*/
	getchar();


}

void main55()
{
	//数组越界不报错
	//因为数组外部的内存空间不确定是否具有访问权限，如果越界访问，程序可能崩溃

	int a[10];

	for (int i = 0; i < 160; i++)
	{
 		a[i] = i+1;
	}
	getchar();
}

void mainfgh()
{
	//  \0只适用于字符串
	int  num[5] = {1,2,3,4,5};//数组在内存中连续排列
	printf("%x\n", &num);
	printf("%d\n", sizeof(num));//数组大小
	printf("%d\n", sizeof(num) / sizeof(int));//元素个数

	for (int i = 0; i < 5; i++)
	{
		printf("num[%d]=%d,%x\n", i, num[i],&num[i]);
	}

	system("pause");


}