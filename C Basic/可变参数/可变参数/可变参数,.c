
#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>
#include<string.h>
#include<memory.h>

#define X(n) n*n*n





int add(int a, ...)//...代表多少个参数都可以
{
	va_list  v;//保存可变长的参数列表
	va_start(v, a);//从参数a之后所有的参数都保存在里面

	int sum = 0;
	for (int i = 0; i < a; i++)
	{
		sum += va_arg(v, int);//按照int类型依次解析参数
		
	}
	va_end(a);//释放列表
	return sum;
}




void run(int n, ...)//尽量确定需要的参数的个数
{
	va_list  v;//保存可变长的参数列表
	va_start(v, n);//从参数n之后所有的参数都保存在里面

	for (int i = 0; i < n; i++)
	{
		char *str= va_arg(v, char *);//按照类型依次解析参数
		system(str);
	}
}






void main1()
{
printf("%d\n", add( 1, 1));
printf("%d\n",add(2 ,1, 2));
printf("%d\n",add(3 , 1, 2, 3));
printf("%d\n",add(4 , 1, 2, 3, 4));
printf("%d\n", add(5 , 1, 2, 3, 4,5));

system("pause");
}


void main2()
{

	run(5, "calc", "notepad", "mspaint", "ipconfig", "tasklist & pause");

}


void main3()
{

	printf("%d\n", X(3));//3*3*3=27
	printf("%d\n", X(1+2));//1+2*1+2*1+2==7
	system("pause");

}



void main()
{

	char str[100] = "123456789";//"123456789 \0 \0 ......
	strcpy(str, "123");//123 \0 56789 \0\0...
	memset(str, '\0', 100);//设置字符串为空  清理内存
	//memcpy 内存拷贝
	printf("%s\n", str);
	system("pause");


}