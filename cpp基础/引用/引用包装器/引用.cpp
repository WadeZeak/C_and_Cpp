#include<iostream>
#include<stdlib.h>


using namespace std;

template<class T>
void com(T arg)//模板函数,引用无效，需要引用包装器
{

	cout << typeid(arg).name() << endl;
	cout << "com_agr=" << &arg << endl;
	arg++;
}



void main()
{

	int count = 10;
	int &rcount = count;//引用

	com(count);
	cout << count << endl;
	com(&count);//传入的是地址
	cout << count << endl;

	com(rcount);//传入引用
	cout << "main_rcount="<<&rcount << endl;
	cout << count << endl;

	//std::ref(变量) 函数模板直接引用
	com(ref(count));//引用包装器  直接改变变量          调用函数模板，需要改变参数时,使用函数包装器
	cout << "main_count=" << &ref(count) << endl;
	cout << count << endl;

	cin.get();
}






