

#include<iostream>
#include<assert.h>

using namespace std;


//宏
#define N 10 


void main1()
{

	int num = 10;

	cout << num << endl;

	//宏
	cout << __FILE__ << endl;//显示文件目录
	cout << __LINE__ << endl;//显示代码在第几行
	cout << __DATE__ << endl;//显示程序编译的日期
	cout << __TIME__ << endl;//显示时间
	cout << __FUNCTION__ << endl;//显示所在的函数

	cin.get();

}



//静态断言 常用于软件测试
void main2()
{


	short num = 10;
	int numA = 100;
	//明确了变量的字节，此处为2个，如果字节>=4字节，可以成功
	//static_assert(sizeof(num)>=4,"Error");//报错 short 两个字节

	//sizeof()以字节为单位  


	//调试代码，迅速判定代码在哪一行
	static_assert(sizeof(numA) >= 4, "Error"); //编译成功
	cin.get();

}


//GPU比CPU运算快

//开启调试  条件编译
//#define M

//条件编译
void main()
{
	short num = 10;

#ifdef M
	static_assert(sizeof(numA) >= 4, "Error");
	
#endif
	cin.get();
}