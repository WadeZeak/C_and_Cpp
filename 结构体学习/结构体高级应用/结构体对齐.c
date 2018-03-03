#include<stdlib.h>
#include<stdio.h>


struct info1 //12
{
	char a;//4
	int num;//4
	char c;//4
	
};


//特殊情况
//数组放在中间，所需内存比放在最后要小
//不会在最宽基本类型成员处填充
struct info2//16
{
	int sh;//4	
	char ch[9];//9
	//在末尾填充字节
	char a;	//3 
};


struct info3//20
{
	char a;//4
	int sh;//4
	char ch[9];//12
};


struct info4//24
{
	short a;	//2

	//在数组上填充字节
	char ch[9];//14
	double sh;//8
};





struct info5//32
{
	short a;	//8
	double sh;//8
	char ch[9];//16

};








void main1()
{

	//结构体变量的大小能够被其最宽基本类型成员的大小所整除；
	//基本类型；int,long,double,char,float....

	//	结构体每个成员相对于结构体首地址的偏移量（offset）都是成员大小的整数倍，如有需要编译器会在成员之间加上填充字节（internal adding）
	//偏移量（offset）:成员的地址减去结构体的首地址

	//结构体的总大小为结构体最宽基本类型成员大小的整数倍，如有需要编译器会在最末一个成员之后加上填充字节（trailing padding）


	printf("%d\n", sizeof(struct info1));
	printf("%d\n", sizeof(struct info2));
	printf("%d\n", sizeof(struct info3));

	/*struct info2 s2 = {10,"123456",97};
	printf("%d\n", sizeof(struct info2));
	printf("%p\n", &s2);
	printf("%p\n", s2.ch);
	printf("%p\n", &(s2.a))*/;


	//printf("%d\n", sizeof(struct info4));
	//struct info4 avc = {10,"123456",100.0};
	//printf("%p\n", &avc);//24
	//printf("%p\n", &(avc.ch));//2
	//printf("%p\n", &(avc.sh));//14

	printf("%d\n", sizeof(struct info5));

	system("pause");
}



void main2()
{

	struct info3 ss = {10,100,"123456"};
	printf("%p\n", &ss);
	printf("%p,%d\n", &(ss.a));
	printf("%p,%d\n", &(ss.sh));
	printf("%p,%d\n", ss.ch);

	system("pause");
}