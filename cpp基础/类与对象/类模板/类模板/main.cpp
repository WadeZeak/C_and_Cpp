#include<iostream>
#include<vector> 


using namespace std;



int add(int a, int b)
{

	cout << "int_add" << endl;
	return a + b;
}


double add(double a, double b)
{
	cout << "double_add" << endl;

	return a + b;
}


template<class T>
T add(T a, T b)
{

	cout << "template_add" << endl;
	return a + b;
}


class MyClass1
{
public:
	int a;
	int b;

	int add()
	{
		return a + b;
	}


};

class MyClass2
{
public:
	double a;
	double b;

	double add()
	{
		return a + b;
	}


};


//类模板实际上是对不同数据类型,但操作方法一样的类的一种抽象
template<class T>
class MyClass
{
public:
	T a;
	T b;
	T add()
	{
		return a + b;
	}

};


void main()
{
	//MyClass<int> myclass;//明确类型列表

	MyClass<int>  myclass;
	myclass.a = 10;
	myclass.b = 20;
	cout << myclass.add() << endl;

	MyClass<double>  myclass1;
	myclass1.a = 15.4;
	myclass1.b = 40.7;
	cout << myclass1.add() << endl;



	vector<int> myvector;//vector本质就是类模板

	//boost,STL本质上都是类模板库

	system("pause");


}



void main2()
{

	
	MyClass1 myclass1;
	myclass1.a = 10;
	myclass1.b = 20;
	cout << myclass1.add() << endl;


	MyClass2 myclass2;
	myclass2.a = 10.5;
	myclass2.b = 20.8;
	cout << myclass2.add() << endl;




	system("pause");




}







void main1()
{

	//调用普通函数
	add(1, 2);
	add(1.2, 2.3);


	
	//调用函数模板
	add<int>(1, 2);//<>实例化
	add<double>(1.2, 2.3);


	system("pause");

}