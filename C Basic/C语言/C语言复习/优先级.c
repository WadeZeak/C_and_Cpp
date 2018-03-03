#include<stdlib.h>
#include<stdio.h>

void main2()
{

	int a[] = { 1, 2, 3, 4, 5, 6 };
	int *p = a;


	//优先级，同一操作数，优先执行
	//结合性优先级相等的情况下，计算方向


	//printf("%d\n", *p++);//++ 的优先级大于 * 等价于  p++先调用,再自增  *(p++) 
	//printf("%d\n", *++p);//2 先自增,再调动
	printf("%d\n", ++*p);//优先级必须要接触    先结合,再自增 结合性

	getchar();



}


void main3()
{
	int i = 0;
	while (i++<5)
	{
		printf("gogogogo\n");

	}

	getchar();

}




void main4()
{

	int a = 10; 
	int b = 0;
	//printf("%d\n", b&&++a); //短路运算 ++a没有生效
	//printf("%d,%d\n", a ,b);

	printf("%d\n", b||++a); //短路运算
	printf("%d,%d\n", a, b);

	getchar();

}




void main5()
{


	long long  data = 11234567890;//long long 8字节
	printf("%lld\n", data);
	getchar();



}