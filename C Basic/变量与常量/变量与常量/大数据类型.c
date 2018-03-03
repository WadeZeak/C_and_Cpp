#include<stdio.h>
#include<stdlib.h>
#include<limits.h>



void main5()
{
	//win 32 平台，long double 的范围与double 一样
	printf("%d",sizeof(long double));
}




//%d - int ; %u - unsigned int;%c - char;%s -string
//%f- float %lf-double ;long long -%f 

void main3()
{
	//无符号越界，向前进位
	//有符号越界，出错
	//unsigned long long num1 = UINT_MAX;
	//printf("%u",num1);
// long long  num2= UINT_MAX;
	//printf("%d", (float)num2);

	printf("%f,%f", (float)LLONG_MAX, (float)LLONG_MIN);//数据类型转换
	printf("\n%d,%d", LLONG_MAX, LLONG_MIN);//打印错误

	long long num3 = UINT_MAX;//使用float打印long long 类型的
	printf("%d,%u",num3,num3 );
	getchar();
}

void main2()
{
	printf("%d\n",sizeof(long long));
	float num = 2147483647.0+1 ;
	printf("%f",num);
	getchar();

}