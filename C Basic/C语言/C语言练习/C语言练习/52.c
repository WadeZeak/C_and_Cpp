
/*
功能：用简单迭代法解方程   e^x - x - 2 = 0
它有两个根（如图），其迭代公式为：
1) x[n+1]= e^x*n-2
（初值X<0时）
2) x[n+1]= Ln(x[n] + 2)
（初值X>0时）

注：本程序中选取初值X0 不同时，要分别使用公式1或公式2迭代，得原方程＜0或＞0的解。（公式由来略）

*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>
#include<math.h>

#define E 2.74



double Formula1(double x, int n)
{
	return pow(E, x)*n - 2;

}

double Formula2( int n)//x[n]
{
	if (n<0)
	{
		return  2;
	}
	else
	{
		return log10f(Formula2(n - 1) + 2);
	}



}


void main52()
{
	int n;
	printf("请输入n:");
	scanf("%d", &n);
	double x;
	printf("请输入x:");
	scanf("%lf", &x);

	if (x>0)
	{
		double x1 = Formula2(n);
		printf("x=%f\n", x1);
	}
	else
	{
		double x2 = Formula1(x,n);
		printf("x=%f\n", x2);
	}
	system("pause");


}