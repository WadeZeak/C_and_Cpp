#include<stdlib.h>
#include<stdio.h>


goA()//函数的返回类型可以为空，默认为int
{
	printf("runaddrun");
	return 1;//return后的语句有返回，后面的语句救不会被执行
	printf("goandgo");

}

//定义函数就是实现函数完整性

double jian(double a, double b)
{

	return a - b;

}

void main()
{

	goA();
	system("pause");


}