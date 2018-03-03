#include<iostream>


using namespace std;

//类不能取地址,而类的对象可以取地址
class Kong
{


};

class MyClass
{
public:
	/*int num;*/

	void go()//代码区不计入类的大小计算
	{

		cout << "Hello World" <<endl;
	}

};

void main()
{
	cout << sizeof(Kong) << endl;//空类占1Byte，表明自己存在

	Kong K1;
	cout << &K1 << endl;

	MyClass C1;
	cout << sizeof(C1) << endl;

	cin.get();
}