#include<stdio.h>



void main2()
{

	int num = 1 + 2 + 3 -( 4 / 5) * 6;//表达式可以当做操作数
	// int num1=3*/5; 运算符不能相邻,加减例外，在最新的编译器中会被解释为正负
	int num2 = 5 * +3;
	printf("%d",num);
	getchar();
}