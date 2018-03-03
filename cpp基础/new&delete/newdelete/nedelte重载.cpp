#include<stdlib.h>
#include<iostream>


using namespace std;


//类的数据需要重建
//每一个类有一个基本的指针 this


//构造函数与析构函数都在代码区

//空类占1字节，表示自己存在

//计算类的大小时，不计算在代码区的数据大小

//没有分配内存，构造与析构没有意义

class MyClass
{
public:
	static int count;//计数//在代码区

	int *p;
	int len;
public:

	MyClass()//构建时初始化
	{
		cout << "MyClass 被创建" << endl;
	}


	~MyClass()//删除的时候释放内存
	{	
		cout << "MyClass 被销毁" << endl;

	}


	static void * operator new(size_t size)//重载,实现劫持
	{
		count++;
		cout << "对象被创建" << endl;	//首先分配内存，再在代码区调用构造函数

		MyClass *ptemp = ::new MyClass;//::new 全局的new
	return NULL;
		
	}


	static void  operator delete(void *p)
	{

		count--;
		cout << "对象被销毁" << endl;
		::delete p;
	}
};


int MyClass::count = 0;




//类内部的new没有完成分配内存的工作，而是在通往全局new的道路上做了劫持

void main()
{
	MyClass *obj1 = new MyClass;//首先调用局部的new之后调用全局的new

	MyClass *obj2 = new MyClass;//局部的new-->构造函数-->(初始化时调用)构造函数
	MyClass *obj3 = new MyClass;


	cout << MyClass::count << endl;


	delete obj1; 

	cout << MyClass::count << endl;
	cout <<"MyClass_Size="<<sizeof(MyClass) << endl;





	system("pause");
}

