
/*
功能：25.	Bessel函数Jn(X)有以下的递推关系：


J[n+1](x)=(2n+1)/x*J[n](x)-J[n-1](x)
并且已知：J[0]（x）=sinx/x
J[1](x)=sinx/x^2-cosx/x
编写程序，利用递推关系，由任意的n和x≠0求Jn(X)。
注：本程序不允许使用数组。


时间：16:00 2013/10/24
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<time.h>


double  Bessel(int n,int x)
{
	if (n==0)
	{
		return sin(x) / x;
	}
	else if (n == 1)
	{
		return sin(x) / (x*x) - cos(x) / x;
	}
	else
	{
		return (2*n - 1) / x*Bessel(n-1,x) - Bessel(n-2,x);
	}

}


void main25()
{
	int n = 0;
	scanf("%d", &n);

	int x = 0;
	scanf("%d", &x);
	if (!x)
	{
		printf("输入的数据不合法\n");
	}

	printf("J[n](x)=%f\n", Bessel(n, x));

	system("pause");



}

