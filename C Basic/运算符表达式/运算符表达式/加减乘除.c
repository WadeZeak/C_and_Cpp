#include<stdio.h>


void main4()
{
	int num = (1 + (2 - 3)) / 4 * 5 - 8;
	//括号运算等级最高，顺序从左向右，从内向外
	printf("%d",num);

	int num2 = 3 / 2;//
	printf("\n%d",num2);

	int num3 = 3 / 2.0;
	printf("\n%d",num3);
	 
	float num4 = 3 / 2.0;
	printf("\n%f", num4);
	//除号两边都是整数，结果也为整数，叫做整出
	//除号两边任意一边是实数，结果也为实数

	getchar();
}