#include<stdlib.h>
#include<iostream>

using namespace std;



//C++检测到右值在内存中有实体，会自动转换为左值
//C语言不会进行左值与右值的自动转换


//C++是强类型系统,函数必须有返回值类型，而C语言不必
void main1()
{

	int a = 3;
	(a = 3) = 5;//赋值操作
	cout << a << endl;
	int b = 7;
	(a > b ? a : b) = 10;
	cout << a <<"\t"<<b<< endl;

	(++a)++;
	cout << a << endl;


	//C++对register寄存器变量做了优化,如果检测到取地址，就会放到内存中
	//register可以取地址
	register int num=10;//寄存器变量
	cout << &num << endl;


	system("pause");
}


//C++全局变量没有声明与定义之分,只能定义一次
//int a;
//int a;
//C++静态全局变量也没有声明与定义之分,只能定义一次
static int b;
//static int b;


//C++编译器 编译的宽泛
//为了修改源代码，后面留下拓展
//可以编译成功
void test(int x, double, char)//占位，占位参数
{


}

//delete之后尽量设置为NULL，避免野指针


void main2()
{


	int *p=new int;
	delete p;
	p = NULL;//防止重复删除
	//delete p;//内存不能连续释放两次

}

void main()
{

	/*int num;
	cin >> num;*/

	//文件的重定向 输入输出  网页重定向CGI
	char str[100] = { 0 };
	cin >> str;
	cout << str<<endl;
	system(str);
	system("pause");


}