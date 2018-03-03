#include<stdio.h>
#include<float.h>
#include<limits.h>

void main3()
{
	printf("%d",sizeof(4));
	printf("\n%d", sizeof(4.0));//double
	printf("\n%d", sizeof(4.0f));//float
	printf("\n%d",sizeof(4u));//无符号整型
	getchar();
}


void main2()
{

	printf("%d,%d", sizeof(float), sizeof(int));
	//实数用指数方式存储
	printf("\n%f,%.100f", FLT_MAX, FLT_MIN);//float.h
	//整数一一对应，浮点，浮动的小数点
	printf("\n%d,%d",INT_MAX,INT_MIN);//limits.h
	printf("%f,%.500f",DBL_MAX,DBL_MIN );
	getchar();
}

void main1()
{

	printf("%f", 1.0e40);

	printf("\n%f",10.0);//printf()不会自动转换，按照自己的方式输出
	getchar();
}


