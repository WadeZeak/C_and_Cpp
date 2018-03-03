#include<iostream>
#include<string>

using namespace std;

//类模板的静态成员变量
//不同类型的静态成员变量，地址不同
//相同类型的静态成员变量，地址一样

template<class T>
class MyClass
{

	static int data;//私有静态成员
public:
	static int count ;//声明 在类的外部初始化
	T a;
	
public:
	MyClass(T t) :a(t)
	{
		count++;
		data++;
	}

	static void run()
	{
		cout << data << endl;//使用静态成员函数访问私有静态成员
		cout << typeid(T).name() << endl;
	}


};

template<class T>
int MyClass<T>::count = 0;

template<class T>
int MyClass<T>::data = 0;


//静态函数,静态变量,类型相同,共享
//类型不同,不共享

void main()
{
	MyClass<int> myclass1(1);
	MyClass<double> myclass2(2.5);
	MyClass<string>myclass3("Hello");
	MyClass<int>myclass4('A');

	MyClass<int>::run();
	MyClass<double>::run();



	cin.get();
}



void main1()
{

	MyClass<int> myclass1(1);
	MyClass<double> myclass2(2.5);
	MyClass<string>myclass3("Hello");
	MyClass<int>myclass4('A');


	cout << &myclass1.count << endl;
	cout << &myclass2.count << endl;
	cout << &myclass3.count << endl;
	cout << &myclass4.count<< endl;
	cout << &MyClass<int>::count << endl;


	cin.get();

}