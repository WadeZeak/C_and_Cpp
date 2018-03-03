#include<stdlib.h>
#include<stdio.h>

void main()
{
	while (1)
	{
		char ch = getchar();
		getchar();//处理回车
		if (ch >= '0' && ch <= '9')
		{
			printf("输入的是数字");
		}
		else if (ch >= 'A'&&ch <= 'Z')
		{
			printf("输入的是大写字母");
		}
		else if (ch >= 'a'&&ch <= 'a')
		{
			printf("输入的是小写字母");
		}
		else
		{
			printf("输入的是其他字符");
		}
	}


}