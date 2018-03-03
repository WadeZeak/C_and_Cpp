#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

void main()
{
	float a, b, c;
	scanf("%f%f%f",&a,&b,&c);
	printf("a=%f,b=%f,c=%f", a, b, c);
	float s, p;
	p = (a + b + c) / 2;
	s = sqrt(p*(p-a)*(p-b)*(p-c));
	printf("三角形面积为%f", s);
	system("pause");

}