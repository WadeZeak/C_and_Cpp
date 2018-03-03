#define _CRT_SECURE_NO_WARNINGS


#include<stdlib.h>
#include<stdio.h>
#include<Windows.h>
#include<locale.h>//本地化

void main1a()
{
	char str[10] = { "我" };//一个汉字占两个字节
	printf("%c%c\n", str[0], str[1]);//可以正常输出，将两子节拼接后解析输出
	printf("%s\n", str);
	getchar();

}



void main2a()
{
	
	MessageBoxA(0, "你好ABC", "你好ABC", 0);//指定窄字符

	MessageBoxW(0, L"你好ABC", L"你好ABC", 0);//指定宽字节

	MessageBox(0,L"你好ABC", L"你好ABC", 0);
	//使用多字节字符集 MessageBoxA
	//使用Unicode字符集 MessageBoxW

	MessageBox(0, TEXT("你好ABC"), TEXT("你好ABC"), 0);//TEXT()可以实现兼容
}




void main3a()
{

	wchar_t wchr = L'我';//将汉字当作字符

	printf("%d\n", sizeof(wchr));

	wchar_t *pwch = L"大天朝万岁!!";//定义宽字符指针
	setlocale(LC_ALL,"chs");//设定本地化中文 zh-CH 

	putwchar(wchr);//打印宽字符
	_putws(pwch);//打印宽字符串

	wprintf(L"%lc\n", wchr);//实现宽字符输出
	wprintf(L"%ls\n", pwch);//输出宽字符串


	system("pause");


}


void main4a()
{

	char str[100] = { 0 };
	scanf("%s", str);//字符串的缓冲区
	printf("\n%s\n", str);
	system("pause");


}



void main8a()
{
	printf("%c\n", *(stdin->_ptr));//取出缓冲区内容
	printf("%d\n", stdin->_cnt);//缓冲区还有多少个字符
	printf("\n\n");

	char chr = getchar();
	printf("\n\n");
	printf("%c\n", *(stdin->_ptr));//取出缓冲区内容
	printf("%d\n", stdin->_cnt);//缓冲区还有多少个字符

	putchar(chr);


	chr = getchar();
	printf("\n\n");
	printf("%c\n", *(stdin->_ptr));//取出缓冲区内容
	printf("%d\n", stdin->_cnt);//缓冲区还有多少个字符

	putchar(chr);
	system("pause");

	//stdout stdin不需要刷新，会及时更新，非缓冲
	//file  fflush,刷新缓冲区

	//char str[100] = "12345"; sizeof(str)=100      strlen(str)=5

	//sizeof 运算符，不依赖任何头文件
}




int add(int a, int b)
{

	return 10.0;//return返回,自动进行数据类型转换
}


void main573()
{


//	printf("%d\n", add(1, 2));
	//在寄存器中产生常量


	//printf()不会进行数据类型转换
	double db = 10.9;
	printf("%d\n",(int)db);



	system("pause");



}

void main()
{
	int num = 10;
	printf("%d,%d", num, num++);
	//getchar();
	exit(0);//正常退出

	system("pause");

}























