#include<stdio.h>
#include<stdlib.h>


void main3()
{
	//printf() 按照想用的格式进行打印，不会进行类型的转换
	//格式与类型要匹配
	printf("%d\n", 10.3);
	printf("%f\n", 10);


	system("pause");

}


void main4()
{

	int num = 100;
	printf("%p\n", &num);//按照不同的方式解析，就会解析出不同的结果

	system("pause");
}

void main5()
{

	char ch = 1,ch1='1';//字符与编号
	printf("%d,%d\n", ch,ch1);
	system("pause");
}

void main6()
{
	//解析的时候与数据类型。长度，内容有关
	unsigned short num = 65535;
	printf("%d\n", num);
	system("pause");


}


void main7()
{

	//补码  计算机存储的方式
	short num = -1;
	printf("%d\n", num);
	printf("%u\n", num);

	system("pause");


}