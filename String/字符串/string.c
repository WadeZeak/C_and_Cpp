#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>


void mainearte()
{

	char *p;
	p = "tasklist";//p是变量
	system(p);
	p = "notepad";
	system(p);

	system("pause");


}

void mainthrh()
{
	//
	//char str[10];
	//str = "tasklist";//初始化方法错误

}
void mainzz()
{
	
	char *p = malloc(sizeof(char)*20);//指针必须指向一片内存
	printf("%x\n", p);
	scanf("%s", p);
	printf("%s", p);
	system(p);
	system("pause");
}



void main76()
{
	char *p= "tasklost";//tasklost 常量 不可以修改
	char *t;
	t = p + 5;
	*t = 'i';//写入位置 0x******** 时发生访问冲突。
	system(p);
	system("pause");

}




//修改字符串中的字符
void main768()
{
	char str[10] = "tasklost";
	char *p =str ;//指针指向了一片内存
	p = p + 5;
	*p = 'i';

	printf("%s", str);
	system(str);
	system("pause");

}



void maing()
{

	char str[4][10] = { { "notepad" },
						{ "mspaint" },
						{"calc" },
						{ "ipconfig" }};

	char(*p)[10] = str;//指向二维数组的指针
	printf("%x,%x\n", &p, *p);//*p=str[0]
	for (int i = 0; i < 4; i++)
	{
		system(*(p+i));//字符串元素的首地址
	}

	
	system("pause");

}