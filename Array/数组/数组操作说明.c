#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>


void mainfjfj()
{

	char str[5] = { '1', 'A', '5', 's', '\0' };
	//字符数组没有\0，会一直向下访问，直到遇见\0为止

	char strm[5] = { 'c', 'a', 'l', 'c' ,'\0'};//{ }大括号进行初始化，需要在末尾加上\0
	char strx[10] = "notepad";// ""双引号进行初始化会在字符串末尾自动加上\0
	scanf("%s", strx);//只有字符串才能整体输入输出
	printf("%s", str);
	system(strm);
	system(strx);
	getchar();

}

void main6541()
{
	int a[3] = { 1, 2, 3 };
	int b[3];
	//数组名本质是地址，不能进行赋值
	//数组除了字符串以外，不能进行整体的输入输出，需要逐个进行操作
	printf("%x,%x\n",&a,&b);
	for (int i = 0; i < 3; i++)
	{
		scanf("%d", &a[i]);
		printf("%d\n", a[i]);
	}


	system("pause");

}