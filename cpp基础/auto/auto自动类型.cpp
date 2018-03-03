#include<stdlib.h>
#include<iostream>
#include<typeinfo>

using namespace std;

void main()
{
	double db = 10.9;
	double *pdb = &db;

	auto num = db;//通用的传入接口

	cout << typeid(num).name() << endl;//获取类型，并输出
	cout << typeid(pdb).name() << endl;
	cout << typeid(db).name() << endl;

	decltype(num) numA(151.54);//通用备份接口
	//decltype获取类型并创建相应类型的变量，实现备份

	cout << sizeof(numA) << endl;
	
	system("pause");
}