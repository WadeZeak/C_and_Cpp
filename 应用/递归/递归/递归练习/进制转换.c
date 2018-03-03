#define _CRT_SECURE_NO_WARNINGS


#include<stdlib.h>
#include<stdio.h>





void  DECtoBIN(int num)//二进制转换为十进制
{
	if (num==0)
	{
		return ;

	}
	else
	{
		DECtoBIN(num / 2);//逆序输出
		int i = num % 2;
		printf("%d", i);
		//DECtoBIN(num / 2);//顺序输出
	}
}



void main()
{
	int num;
	scanf("%d", &num);
	DECtoBIN(num);
	system("pause");
}