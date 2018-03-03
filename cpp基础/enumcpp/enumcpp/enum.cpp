#include<iostream>
#include<stdlib.h>

using namespace std;

enum Color :char //C++的枚举体允许限定数据类型
{
	red, green, yellow, blue, white
};


void main()
{

	enum Color color;
	cout <<"red=" <<red << endl;
	cout << "green=" << green<< endl;

	cout << "yellow=" << yellow<< endl;

	cout << "blue=" << yellow << endl;
	cout << "white=" << yellow << endl;
	system("pause");
}
