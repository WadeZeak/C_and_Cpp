#define _CRT_SECURE_NO_WARNINGS


#include<stdlib.h>
#include<stdio.h>

//316=11*x+13*y


void main()
{
	int i=0;
	while (1)
	{

		if ((316 - i * 11) %13 == 0)
		{
			printf("316=11*%d+13*%d", i, (316 - i * 11) / 13);
			break;
		}
		i++;
	}
	system("pause");

}

void mainxx()
{
	for (int i = 0;;i++)
	{
		printf("%d\n", i);
		if (i == 999)
			break;//跳出死循环
	}


	system("pause");
}
void mainss()
{

	int num;
	scanf("%d", &num);
	for (int i = 1000; i < 2000; i++)
	{
		if (i == num)
		{
			printf("找到了");
			break;//节约计算机资源
		}
	}
	system("pause");
}