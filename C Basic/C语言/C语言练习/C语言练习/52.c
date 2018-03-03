
/*
���ܣ��ü򵥵������ⷽ��   e^x - x - 2 = 0
��������������ͼ�����������ʽΪ��
1) x[n+1]= e^x*n-2
����ֵX<0ʱ��
2) x[n+1]= Ln(x[n] + 2)
����ֵX>0ʱ��

ע����������ѡȡ��ֵX0 ��ͬʱ��Ҫ�ֱ�ʹ�ù�ʽ1��ʽ2��������ԭ���̣�0��0�Ľ⡣����ʽ�����ԣ�

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
	printf("������n:");
	scanf("%d", &n);
	double x;
	printf("������x:");
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