#include<iostream>


using namespace std;
struct CLS
{
	int m_i;
	CLS(int i) : m_i(i) {}
	CLS()
	{

		/*
		在默认构造函数内部再调用带参的构造函数属用户行为而非编译器行为，亦即仅执行函数调用，
		而不会执行其后的初始化表达式。只有在生成对象时，初始化表达式才会随相应的构造函数一起调用。
*/
		CLS(0);
	}
};


void run(int *sa, int sz);//如果在两个函数的参数表中只有缺省实参不同则第二个声明被视为第一个的重复声明 。 
void run(int *, int = 10);


void main()
{

	CLS obj;
	cout << obj.m_i << endl;


	static int val;//静态变量自动初始化
	cout << val << endl;//0

	cin.get();
}