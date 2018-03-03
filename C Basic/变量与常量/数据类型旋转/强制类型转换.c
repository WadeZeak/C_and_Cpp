#include<stdio.h>

// +,-,*,/，= (赋值) 自动转换数据类型
//printf()无法自动转换


void main()
{
	printf("%c",65.0);//字符中 0 代表NULL
	printf("\n%c", (char)65.0);
	getchar();
}



void main5()
{
	//赋值符号会自动进行数据类型转换
	int num = 3.6;
	int x = 'A';
	printf("%d,%d",sizeof(num),sizeof(3.6) );
	printf("\n%d", num);
	printf("\n%d", x);//转换为ASCII码
	getchar();
}