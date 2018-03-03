#include<stdio.h>
 
void main3()
{
	//低字节的数据与高字节的数据的运算(+,-,*,/)时，自动向高字节数据类型转换
	char ch = 'A';//1Byte
	int num =1;//4Byte
	printf("%d,%d,%d",sizeof(ch),sizeof(num),sizeof(ch+num));//1,4,4
	double db = 1.0;
	printf("\n%d,%d,%d", sizeof(num), sizeof(db), sizeof(db + num));//4,8,8
	printf("\n%d,%d,%d", sizeof(ch), sizeof(db), sizeof(db + ch));//1,8,8
	getchar();

}



void main2()
{

	//整数与整数=整数
	//整数与实数=实数
	//实数转整数会舍弃小数点后面的数
	int num = 3 / 2;//0
	float f1 = 1/ 2.0;
	float f2 = 3 / 2;
	printf("%d,%f",num,num);//1;解析失败 0.000000
	printf("\n%f,%d", f1, f1);//0.5； 解析失败 0
	printf("\n%f,%d", f2, f2);
	getchar();
}



void main1()
{
	//printf()不管什么类型，解析失败就是0
	//printf("%d\n", 1.0);//0
	//printf("%f",1);//0.000000
	//数据类型转换
	printf("%d\n", (int)1.0);
	printf("%f",(double)1);
	getchar();

}