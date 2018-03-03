#include<iostream>


using namespace std;


class MyClass
{
public:
	int num;
	double db;
	static int count;//声明
	int *p;
	int &myint;//类内部的引用必须初始化
	const int coint;
	static const int dashu;//只有静态成员变量才能在类外部初始化 此处为声明
public:

	static void go()
	{


	}


	 void  Run()
	{



	}



	//常量，引用，必须重载构造函数初始化
	MyClass(int a, int b) :myint(a), coint(b)//初始化
	{
		//引用就是共用地址，常量新开辟内存备份机制
		std::cout << &a << "  " << &b << std::endl;
		std::cout << &myint << "  " << &coint << std::endl;

		//修改常量
		const int *p = &coint;

		cout << *p << "\t" << &coint << endl;
		int *px = const_cast<int *>(p);//去掉常量属性
		*px = 50;
		cout << coint << endl;
	}

};

//常量，引用，必须重载构造函数初始化，

int MyClass::count = 0;//初始化
const int MyClass::dashu = 20;//在外部初始化,不读内存，读寄存器



void mainkjgnsng()
{

//类中普通成员变量
//类名 变量 //栈上
//类名 *指针名=new 类名 //堆上
//函数(包括静态函数)都在代码区,是共享的
//类的静态成员 静态区


	MyClass myclass(10, 20);


	//普通成员函数，必须指定域名
	//void(MyClass::*p)() =&MyClass::Run;//代码共享
	////所有的类对象共享代码

	////静态成员函数,与对象无关
	//	void(*px)() = &MyClass::go;

	int const num = 10;//num 在符号表 10 在寄存器产生 读取时直接在寄存器读取
	//num在内存中的值可以修改
	int a[num];


	//类中的常量类似于C语言，读取时从内存中能读取


	//类的外部,一开始必须初始化,用常量强行替换,不会读内存
	//类的内部，必须构建一个类才能初始化,const与C语言中一样


	//引用本质上是一个指针,4个字节，但是不能为空，而指针可以为空



	//static const int data = 20;//静态常量区
	//引用的时候不读内存，直接读取代码区的符号表

	cin.get();


}




void main()
{
	const int *p = &(MyClass::dashu);
	int *px = const_cast<int *>(p);
	
	cout << p << endl;
	cout << px << endl;
//	*px = 456;//静态区常量可以访问，但是不可修改

	cout << *p << endl;
	cout << *px << endl;
	cout << MyClass::dashu << endl;

	cin.get();
}










class mywindowW
{

public:
	//引用可以反复初始化
	int  &num;//引用，必须在构造的初始化,
	//引用今天可以引用这个人，明天引用那个人


public:
	mywindowW(int data) :num(data)
	{
		cout << num << endl;
	}


};




void mainddd()
{

	int data = 20;//引用必须初始化，反复赋值，类中的引用必须在构造函数初始化
	mywindowW  my1(data);
	cout << my1.num; //对于了类的引用而言，加上endl，关闭输出流，此时当作地址当作地址，否则当作变量处理
	int dataA = 201;
	my1.num = dataA;
	cout << my1.num;//加上endl关闭输出，当作地址，否则当作变量
	cin.get();

}




void mainxx()
{

	mywindowW my1(4);//引用必须初始化，反复赋值，类中的引用必须在构造函数初始化
	cout <<my1.num ;
	cout << endl;
	int data = 20;
	my1.num = data;
	cout << my1.num;

	cout << endl;
	int num = 50;
	int &data1 = data;
	data = num;

	cout << data1 << endl;
	cin.get();

}






class myconst
{

public:

	const int num;//常量,必须在构造时初始化
	int xyz;

public:
	myconst(int data) :num(data)
	{

	}



};





void main474()
{


	int myint = 20;
	myconst myconst1(myint);//常量必须初始化

	//常量在类的外部一旦初始化完成，之后便会从代码区的符号表自动生成，不会访问内存

	cout << myconst1.num << endl;

	myconst1.xyz = 10;
	myconst1.xyz = 20;

	cout << myconst1.xyz<<endl;

	//myconst1.num = 20;//常量不能赋值

	cin. get();




}

