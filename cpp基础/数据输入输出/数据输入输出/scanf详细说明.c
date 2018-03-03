#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>



void main98()
{

	char c1, c2, c3;
	scanf("%c%c%c",&c1,&c2,&c3);
	printf("[%c][%c][%c]",c1,c2,c3);//空格，回车相当于一个字符
	system("pause");


}

void main9999()
{
	int num=0;
	scanf("%d",num);//将num当作地址进行访问
	printf("%d", num);	
	system("pause");
}

void maindd()
{

	float f1=0.00;
	scanf("%7.5f", &f1);//语句没有生效，不能指定数据输入的精度
	printf("%f", f1);
	system("pause");


}


void main1461()
{
	int num1,num2,num3;
	scanf("%3d%3d%d", &num1,&num2,&num3);//%3f 截取输入的数字里面三个数字
	printf("%d,%d,%d", num1,num2,num3);
	system("pause");


}


void main1111()
{
	int x, y;
	scanf("%d,%d", &x, &y);//必须输入逗号
	//scanf 除了格式符外的其他的字符都需要输入，空格没有影响
	printf("x=%d,y=%d", x, y);


	system("pause");


}

void main1998()
{
	int num1=0, num2=0,num3=0;
	scanf("%d%*d%d", &num1, &num2, &num3);//*可以跳过输入的数据
	//scanf 输入数据与格式必须以一一对应

	printf("num1=%d,num2=%d,num3=%d",num1,num2,num3);


	system("pause");
}



void main989()
{
	/*
	long lg; //在32位以上的品台，long与int等价

	scanf("%d", &lg);
	printf("%d", lg);
	*/
	long long ll; 

	//嵌入式操作，long long
	//32位操作系统以上,%d就足够了
	scanf("%d", &ll);
	printf("%d", ll);
	system("pause");

}

void main97()
{
	/*
	float f;
	scanf("%f",&f);
	printf("%f", f);
	*/
	double db=1.0;
	scanf("%lf", &db);
	//%f扫描对于double类型的数据无效，需要使用%lf
	printf("%f", db);//输出有效
	system("pause");

}