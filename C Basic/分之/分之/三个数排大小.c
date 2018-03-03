#define _CRT_SECURE_NO_WARNINGS


#include<stdlib.h>
#include<stdio.h>
#include<Windows.h>


void mainaaa()
{
	double a, b, c;
	scanf("%lf%lf%lf", &a, &b, &c);
	printf("a%f,b=%f,c=%f\n", a, b, c);
	if (a < b)//
	{

	double temp;
		temp = a;
		a = b;
		b = temp;
	}
	//不使用中间变量
	if (a < c)
	{
		a = a + c;
		c = a - c;
		a = a - c;
	}

	if (b < c)
	{
		double temp;
		temp = b;
	   b = c;
		c = temp;
	}
	printf("a%f,b=%f,c=%f\n", a, b, c);

	system("pause");


}