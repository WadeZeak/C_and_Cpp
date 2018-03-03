
/*
36.已知有如下递推公式
F(n,x.y)=F(n-1,x,y)*(2 * y - 1) / y - F(n - 2, x, y)*(y - 1) / y
F(1)=1;
F(2)=x;

求该数列的前n项。不允许使用数组。
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
float Func(int n, float x, float y)
{
	if (n == 1)
	{
		return 1;
	}
	else if (n == 2)
	{
		return x;
	}
	else
	{
		return Func(n - 1, x, y)*(2 * y - 1) / y - Func(n - 2, x, y)*(y - 1) / y;
	}

}
void main36()
{

	int x;
	int y;
	int n;
	printf("请输入x,y,n\n");
	scanf("%f", &x);
	scanf("%f", &y);
	scanf("%d", &n);


	if (x==0||y==0||n==0)
	{
		goto Loop;
		return;
	}

	printf("%f",Func(n, x, y));
	goto Loop;
Loop:
	system("pause");



}