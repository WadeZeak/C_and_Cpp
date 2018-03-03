#include<iostream>
#include<stdlib.h>



using namespace std;


//派生类可以访问基类的静态成员

class MyClass
{
public:

	//静态成员变量 共享
	static int count ;//静态变量不能在类的内部初始化  声明静态变量

	MyClass()
	{
		count++;//统计对象数目  包括派生类中产生的
	}


	//静态函数可以脱离对象,进行调用
	static void Show()//静态函数不属于类,无法使用this指针,必须明确对象
	{

		cout << count << endl;
	}
};

int MyClass::count = 0;//静态变量初始化


class SonClass:public MyClass
{



};





class GrandClass :public SonClass
{




};






void main()
{

	SonClass *p = new SonClass;//每一个子类对象默认创建一个父类对象包含在内部
	SonClass son;

	GrandClass *px = new GrandClass;
	p->Show();
	p->MyClass::Show();
//	son.Show();

	px->Show();//直接访问
	px->SonClass::MyClass::Show();//访问基类

	system("pause");

}