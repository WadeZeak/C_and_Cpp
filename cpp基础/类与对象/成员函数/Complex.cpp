#include "Complex.h"


Complex::Complex()
{
	cout << "对象被创建" << endl;

}


Complex::~Complex()
{
	cout << "对象被销毁" << endl;


}


//类调用成员函数,需要指明是哪个类的对象
//::域说明符
void  Complex:: Show()
{
	cout << "HelloWorld" << endl;
}





void Complex::Setxy(int x, int y)
{

	cout << (this->x = x) << endl;
	cout << (this->y = y) << endl;


}


void  Complex::Show(int x,int y)
{
	cout << (this->x = x) << endl;
	cout << (this->y = y) << endl;

}


void Complex::Change(int x) const//加上const 限定函数不能对成员变量进行修改
{

	//对于具有mutable属性的变量无效
	this->z=1000 ;

}