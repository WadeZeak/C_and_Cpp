#include<iostream>
#include<functional>//处理函数

using namespace std;
using namespace std::placeholders;//std命名空间中的命名空间placeholders



//仿函数，创建一个函数指针，引用一个结构体或者类内部的公有函数

struct MyStruct//结构体内部的函数是共享的
{
	void add1(int a)
	{
		a++;
		cout << a << endl;
	}


	void add2(int a,int b)
	{
		
		cout << a++ + ++b << endl;
	}

	void add3(int a, int b,int c)
	{

		cout << a+b+c << endl;
	}

};


void main()
{

	MyStruct mystruct;

	//对于结构体而言，函数是共享的，而数据是私有的
	//void(*p)(int) = mystruct.add1; // 语法错误“MyStruct::add1” : 函数调用缺少参数列表；请使用“&MyStruct::add1”创建指向成员的指针	
	//void(*p)(int) = &MyStruct::add1;//“初始化”: 无法从“void (__thiscall MyStruct::* )(int)”转换为“void (__cdecl *)(int)”
	
	//绑定机制，类与结构体，数据私有，代码共享
	//函数调用时，通过传递的对象名进行区分
	void(MyStruct:: *p)(int) = &MyStruct::add1;
	



	cin.get();
}








void main2()
{
	MyStruct mystruct;

	//auto 自动变量，地址,此处当做函数指针处理
    //band() 绑定 第一个参数引用内部函数	第二个参数绑定一个实体对象
	auto func1 = bind(&MyStruct::add1,&mystruct,_1);//	&MyStruct::add 限定函数所在的域		&mystruct 绑定结构体实体 _1表示一个参数
	func1(100);
	
	auto func2 = bind(&MyStruct::add2, &mystruct, _1,_2);//_1,_2表示占位
	func2(10, 20);

	auto func3 = bind(&MyStruct::add3, &mystruct, _1, _2,_3);
	func3(10, 20,30);


	cin.get();
}