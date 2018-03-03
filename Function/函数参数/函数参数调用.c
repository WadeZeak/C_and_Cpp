#include<stdio.h>
#include<stdlib.h>

void print(int a, char b, float c)
{
	printf("a=%d,b=%c,c=%f", a, b, c);
}

void main()
{
	//print(10.5,'A',1); //参数调用的时候，实参与形参应该意义对应
	//print(1, 1);	//函数调用的时候，个数要一一对应
	print(10.5,97, 1);//赋值会自动进行数据类型转换
	//函数调用的时候，会自动产生赋值。
	//实参数转换为形式参数的类型
	getchar();


}