#include<stdlib.h>
#include<stdio.h>

void change(int a)
//形参可以单独开辟一小段内存
{
	a = 100;
	printf("chang a=%x\n", &a);
}
//形参与实参地址不同
void maindffdh()
{
	int a=10;
	change(a);
	printf("main x=%x\n", &a);
	printf("%d\n", a);
	getchar();


}