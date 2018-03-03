#include<stdio.h>
#include<stdlib.h>
#include<limits.h>


void int_max_min()
{
	//win32平台上，%d的范围同int一样；%u的范围同unsigned int 一样
	printf("%d,%d",INT_MAX,INT_MIN);
	printf("\n%d,%d", INT_MAX+1, INT_MIN+1);
	printf("\n%u,%d",UINT_MAX, 0);
	getchar();
}


void shot_max_min()
{

	printf("short=%d,int=%d,long=%d",sizeof(short),sizeof(int),sizeof(long));
	//win32 short=2,int=4,long=4
	printf("\nunsigned short=%d,unsigned int=%d,unsignedlong=%d", sizeof(unsigned short), sizeof(unsigned int), sizeof(unsigned long));
	printf("\nshort 最大值%d,short最小值%d",SHRT_MAX,SHRT_MIN);
	printf("\nunsigned short 最大值%d,unsigned short最小值%d",USHRT_MAX,0);
	getchar();


}




void main5()
{
	printf("%d\n", -10);
	printf("%u\n",-10);
	printf("%f", -10);//%f 无符号 十六进制
	printf("%o", -10);//%o无符号八进制
	getchar();

	//C/C++ 编译成功。但不保证结果正确
}



void main4()
{
	//使用printf打印时，类型必须匹配
	printf("%d,%u",-1,-1);//%d 有符号 十进制，%u 无符号十进制
	getchar();

}



void main3()
{
	printf("%f\n", 1);//浮点数
	printf("%d\n", 1);//整数
	//printf()按照自己的方式输出数据,如果数据与输出方式不匹配，便会出错
	getchar();
}

void main2()
{
	//有符号数据超过长度,会出错
	short test = 32768;
	printf("%d\n", test);
	getchar();
}

void main1()
{
	//无符号数据必须在有效范围内，否则会出现溢出
	unsigned short num = 65535+1;
	printf("%d\n", num);
	printf("%d",sizeof(num));
	getchar();

}