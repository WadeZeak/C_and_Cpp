#include<iostream>

using namespace std;

//delete 可以禁用默认生生成的函数,禁用构造可以实现无法实例化
//禁止拷贝构造,可以禁止他人的拷贝
//delfault 默认存在

class MyClassB
{
public:
	// “MyClassB::MyClassB(void)” : 尝试引用已删除的函数	
	//	MyClassB() = delete;//delete的作用,默认删除构造函数 ,实现一个无法实例化的类

	MyClassB() = default;//默认存在的构造函数
	//	MyClassB(const MyClassB &) = delete;//拷贝构造函数  默认删除 &引用
	MyClassB(const MyClassB &) = default;	//默认存在的拷贝构造函数
	~MyClassB();


};




MyClassB::~MyClassB()
{


}







void main2()
{
	MyClassB myclassB;

	MyClassB myclassB1(myclassB);

	MyClassB myclassB2 = myclassB;//运算符重载，重载了赋值号=，根据类型进行重载
}