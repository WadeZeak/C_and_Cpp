/*

计算Yn的值，直到|Yn - Yn-1|<10-6为止，并打印出此时共作了多少次COS计算。
提示：Yn+1=COS（Yn），故本题适用于使用迭代法。

*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdlib.h>
#include<stdio.h>
#include<math.h>


int  Yn(double x,int count)//正序的递归
{
	if (abs(cos(x)-x)<pow(10.0,-6))//|Yn - Yn-1|<10-6
	{
		return ++count;
	}
	else
	{
		return Yn(cos(x),++count);
	}



}

void main27()
{
	double x;
	scanf("%d", &x);
	
	printf("%d", Yn(x, 0));

	system("pause");


}