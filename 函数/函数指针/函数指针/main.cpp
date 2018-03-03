#include<iostream>



using namespace std;


void add(int a,int b)
{
	cout << a + b << endl;

}


void main1()
{

	void(*p)(int ,int ) = add;
	p(10, 20);
	(*p)(10, 20);//函数指针,会当做指针来来处理,*p 与 p的效果一样
	(*&p)(10, 20);//* 与 & 抵消
	(********************p)(10, 20);
	(******&p)(10, 20);

	cout << "p=" << (void *)p << endl;
	cout << "*p=" <<(void *) *p << endl;
	//C++编译器会自动将*p处理为p


	//获取类型
	cout << typeid(p).name() << endl;//void (__cdecl*)(int,int)
	cout << typeid(*p).name() << endl;//void __cdecl(int,int)
	cout << typeid(&p).name() << endl;// void(__cdecl**)(int, int)
	cout << typeid(*&p).name() << endl;
	cout << typeid(*********************p).name() << endl;
	cin.get();



}