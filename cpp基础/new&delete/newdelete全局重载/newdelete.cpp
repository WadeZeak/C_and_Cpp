#include<stdlib.h>
#include<iostream>

using namespace std;

//全局的new，delete监视所有内存的释放与分配
//局部的new,delete见识某个类的内存的分配与释放
//





//全局的new
void * operator new(size_t size)
{
	cout << "全局mew分配内存" << endl;

	if (size==0)
	{
		return 0;
	}
	void *p = malloc(size);
	cout << "分配内存后的首地址:"<<p << endl;
	return p;

}

//全剧的delete
void operator delete(void *p)
{

	cout << "全局释放内存" << p << endl;
	free(p);
}


void * operator new[](size_t size)//批量创建
{
	cout << "批量创建" << endl;

	return operator new(size);//每个对象挨个调用已经重载好的new
}



void operator delete[](void *p)
{
	cout << "批量删除" << endl;

	return operator delete(p);//每个对象挨个调用已经重载好的delete

}



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
		return ptemp;

	}


		static void  operator delete(void *p)
	{
		count--;
		cout << "对象被销毁" << endl;
		::delete p;
	}



	static void * operator new[](size_t size)//局部new 初始化对象数组
	{
		count++;
		cout << "对象数组被创建" << endl;	//首先分配内存，再在代码区调用构造函数
		return  operator new(size);
		//MyClass *ptemp = ::new MyClass;//::new 全局的new
		//return ptemp;

	}


		static void  operator delete[](void *p)
	{
		count--;
		cout << "对象数组被销毁" << endl;
		return delete(p);
	}




};


int MyClass::count = 0;




void main1()
{

	int *p = new int(8);
	delete p;
	system("pause");
}


void main2()
{

	MyClass *p = new MyClass;//局部的new-->全局的new-->malloc-->构造函数

	delete p;//析构函数-->局部delete-->全局的delete-->free

	system("pause");
}

void  main()
{
	/*int *p = new int[4];
	delete[]p;*/

	MyClass *p = new MyClass[4];//局部的new[]-->局部的new-->全局的new-->malloc-->构造函数
	delete[]p;//析构函数-->局部的delete[]-->局部delete-->全局的delete-->free

	system("pause");
}