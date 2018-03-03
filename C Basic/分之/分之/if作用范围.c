

#include<stdlib.h>
#include<stdio.h>

void main()
{

	//if作用域位大括号，没有大括号，则执行最近的一个分号前的一条语句
	if (0)	
		printf("Hello World!!\n");
	    printf("Hello China!!\n");
		printf("Hello baidu!!\n");

		system("pause");
}