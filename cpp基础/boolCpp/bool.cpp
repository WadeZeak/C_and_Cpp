#include<stdlib.h>
#include<iostream>

using namespace std;

void main()
{

	bool bl = 1 && 2 || 2 || -1 && 0;//&&的优先级高于||

	cout << "type_bl=" << typeid(bl).name()<<endl;//获取数据类型
	cout << "bl=" << bl << endl;

	decltype (bl) bt(1 + 2 * 3 && 4 - 1 || 5);//decltype 选择并返回操作数的数据类型
	cout << bt << endl;

	int s = 5;
	decltype(s) num(6); 
	cout << num<<endl;



	system("pause");
}