// 程序使用sprintf 将各种数据格式化后置于字符数组buffer中
#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
int maingdh(void)

{
	char  buffer[200], s[] = "computer", c = 'l';
	int   i = 35, j;
	float fp = 1.7320534f;
	// 格式化并打印各种数据到buffer
	j = sprintf(buffer, "   String:    %s\n", s); // C4996
	printf("%d\n", j);//字符个数
	j += sprintf(buffer + j, "   Character: %c\n", c); // C4996
	printf("%d\n", j);
	j += sprintf(buffer + j, "   Integer:   %d\n", i); // C4996
	printf("%d\n", j);
	j += sprintf(buffer + j, "   Real:      %f\n", fp);// C4996
	printf("%d\n", j);
	printf("Output:\n%s\ncharacter count = %d\n", buffer, j);
	system("pause");
}