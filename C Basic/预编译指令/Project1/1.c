#include"1.h"


//位域
struct weiyu
{
	int num : 3;//3位二进制位
	char ch : 4;
	char chr :4;//4位二进制位
};



enum ABC
{
	军长=3,师长=1
};


//C语言结构体不能包含方法，只能包含数据,但是可包含函数指针
struct info
{
	int num;
	char str[100];
	int(*p)(int a, int b);//函数指针
};

typedef struct  info Info;
//两个结构不可以使用==或!=进行判等运算

void main1()
{

	Info info1 = { 1,"123" };//	//结构体只有在初始化时进行赋值
	Info info2;
	info2 = info1;
	(&info2)->num = 100;
//(*&info2).num
	//info2 = { 2, "345" };//报错
	printf("%d,%s\n", info2.num, info2.str);

	system("pause");
}


void main()
{
	struct weiyu AAA;
	AAA.ch = 20;
	//10100
	printf("%d\n", AAA.ch);//0100 4  读取4位
	printf("%d\n", sizeof(AAA));//8
	system("pause");


}