/*10.	编程序计算下述函数在X＝-7，-1，0，7时的值。  Exp  log absf

*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<math.h>


double Exp(double num)
{
	return exp(num);
}

int Abs(int num)
{
	return abs(num);
}

double Log(double num)
{
	return log(num);
}

void main10()
{

	int num = 0;
	scanf("%d",&num);
	printf("%d\n", Abs(num));
	printf("%f\n", Exp(num));
	printf("%f\n", Log(num));
	system("pause");

}