#include<stdlib.h>
#include<stdio.h>
void main()
{

	for (int i = 0; i<100; i++)
	{
		if (i%3 !=0)
		{
			continue;//提前结束本次循环,继续下一次循环
		}
		printf("%d\n", i);
	}

	system("pause");
}
void mainxxx()
{

	for (int i = 0;; i++)
	{
		if (i % 3 == 0)
		{
			printf("%d\n", i);
			break;
		}
	}

	system("pause");
}