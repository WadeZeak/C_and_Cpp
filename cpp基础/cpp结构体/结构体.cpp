#include<iostream>
#include<memory>//智能指针需要的头文件

using namespace std;


//索引  标识符

//结构体占用一片连续的内存空间

struct LStruct
{
	int num=20;
};

struct MyStruct //MyStruct 标识符  也是结构体的类型名
{
	int num = 10;//cpp可以个结构体中的变量赋以默认的值，而在C语言中不可以
	double db;
//	MyStruct myself;//结构体内部不能定义自己 即无穷递归结构
	MyStruct *phead;
	MyStruct *pnext;//结构体内部可以定义指向其他结构体的指针
	LStruct LS1;
	void Boss()
	{
		cout << "Boss" << endl;

	};//cpp结构体可以包含函数
};

struct MyStructA //MyStruct 标识符  也是结构体的类型名
{
	int num = 10;//cpp可以个结构体中的变量赋以默认的值，而在C语言中不可以
	double db;
	//	MyStruct myself;//结构体内部不能定义自己 即无穷递归结构
	MyStruct *phead;
	MyStruct *pnext;//结构体内部可以定义指向其他结构体的指针
	LStruct LS1;
	void Boss()
	{
		cout << "Boss" << endl;

	};//cpp结构体可以包含函数
};


//匿名结构体
struct
{
	int num;
	int db;//匿名结构体不允许设置默认的值
	MyStruct S;//结构体的成员可以使另一个结构体
}SX,SY;

void main1()
{

	MyStruct S1;
	cout << S1.num << endl;
	cout << SX.S.num << endl;//结构体嵌套

	//cout <<  char(1) << endl;
	cin.get();

}


void main()
{
	MyStruct S1;//在栈上 在栈上管理
	MyStruct *pnew=new MyStruct;//在堆上 需要手动管理	
	std::unique_ptr<MyStruct>p(new MyStruct[5]);//只能指针

	cout << pnew->LS1.num << endl;//结构体指针 ->  结构体实体 .
	cout << (*pnew).LS1.num << endl;

	//只有类型相同才能整体赋值
	//C++风格结构体初始化
	MyStruct S2(S1);
	MyStruct *pnew2(new MyStruct);

	MyStructA SA1;
//	MyStruct S3(SA1);//C++ 强类型语言 严格检测类型是否匹配

 	cin.get();
}