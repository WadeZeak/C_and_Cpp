#define  _CRT_SECURE_NO_WARNINGS

#include<stdlib.h>
#include<stdio.h>

void main()
{
	double num = 123456789;
	printf("KB=%f", num / 1024);
	printf("\nMB=%f", num / (1024 * 1024));
	printf("\nGB=%f", num / (1024*1024 * 1024));
	printf("%f", num / 1024/ 1024 / 1024 / 1024);
	system("pause");
}


void main1()
{
	int num;
	scanf("%d",&num);
	printf("%d,%o,%x", num, num,num);
	char str[32];

	//参数一：要转换的数据
	//参数二：存储的字符串
	//参数三：进制
	_itoa(num,str,2);
	printf("\n%s", str);
	system("pause");

}