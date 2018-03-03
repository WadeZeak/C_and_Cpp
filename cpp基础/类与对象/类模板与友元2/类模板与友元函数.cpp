#include<iostream>

using namespace std;


//实现类模板的外部友元,必须要声明类模板与友元
template<class T>class MyClass;//声明类模板
template<class T>void display(MyClass<T>myclass);//声明类模板的友元



template<class T>
class MyClass
{

private:
	T x;
	//int y;//访问与类模板类型无关的成员,需要普通有友元类;否则需要类模板友元
public:
	MyClass(T a) :x(a)
	{




	}


	friend void Show(MyClass<T>myclass)
	{
		cout << myclass.x << endl;
	}

	friend void display<T>(MyClass<T>myclass);//实现外部友元  必须加上<T>

	//类模板的友元函数在外部实现
	//在类的内部声明时必须要加上类型<T>
	//必须要声明类模板与友元函数

};

template<class T>
void display(MyClass<T>myclass)
{
	cout << myclass.x << endl;

}

void mainsdgsd()
{


	MyClass<int> myclass(10);
	Show(myclass);
	display(myclass);
	MyClass<double> myclass1(10.5);
	Show(myclass1);
	display(myclass1);

	system("pause");
}