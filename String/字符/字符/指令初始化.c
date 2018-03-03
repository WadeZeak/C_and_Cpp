#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include<stdio.h>


//'0'  0
void main()
{
	//字符0的ASCII编号48，字符输出0
	printf("字符编号0=%d,字符0字符=%c", '0', '0');
	printf("\n整数0编号%d,整数0字符%c",0,0);//字符输出NULL

	printf("\n%d",'0'-0);
	printf("\n%d", '1' - 1);//字符串转换
	//输出都是0的编码48
	system("pause");

}

void main10()
{
	char ch = 'a';
	printf("%d,%c", ch, ch+5);//%d 打印ascii码，%c打印字符
	system("pause");

}

void main6()
{
	char str[30];
	sprintf(str, "%c%c%c%c", 67,65, 76, 67);
	//0-48,a-65,A-97
	system(str);

}