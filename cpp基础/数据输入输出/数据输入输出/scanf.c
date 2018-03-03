#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>



void main10()
{
	printf("%d%d%d", 1);
	char a = '我';
	
	printf("\n%d", sizeof(a));
	printf("\n%c", a);//输出为空

	//字符串常量预留缓冲区，4字节
	printf("\n%d", sizeof('abcd'));

	wchar_t ch = '我';//宽字符
	getchar();

}

void main789()
{
	int RMB=1;
	scanf("请给阿Q捐点钱%d", &RMB);//输入的内容与scanf中的内容一致，才能正常赋值


	printf("%d", RMB);
	system("pause");

}



void main987()
{

	int num;
	printf("%x\n", &num);
	scanf("%d", &num);
	num > 10000 ? printf("You Win!!") : printf("You Lose");
	system("pause");


}