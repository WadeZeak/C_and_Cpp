#include<stdlib.h>
#include<iostream>


using namespace std;



//函数模板可以对类型进行优化重载,根据类型会覆盖
//如果仍然需要调用函数模板，需要实例化
template<class T >
T Add(T a,T b )
{

	cout << "T_Add" << endl;
	return a + b;

}


int Add(int a, int b)
{
	cout << "int_Add" << endl;
	return a + b;
}


void main()
{
	int a = 10, b = 20;
	double db1 = 12.3,db2=45.6;


	cout << Add(a, b) << endl;


	cout << Add(db1, db2) << endl;//调用普通函数

	cout << Add<int>(a, b) << endl;//实例化,调用函数通用模板

	cin.get();
}