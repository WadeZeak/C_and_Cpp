#include<iostream>
#include<stdlib.h>

using namespace std;

//define强制替换 没有明确的类型
//#define N 10
#define N 10.0

//const 动态监测，进行赋值，复制时会自动尽心数据类型检测，避免类型不一致的情况
//const 在内存中有实体，有的编译器会直接获取常量的值进行替换

//gcc,VC最新的的编译器版本会在代码区存储常量，常量在寄存器中产生，不会从内存读取,编译器优化（适用于C++）

/*
部分老版本的C++编译器，没有去地址或者全局变量说明符，直接从寄存器读取,
为了兼容C，出现了全局变量和说明符，内存会分配常量的地址
取变量名仍然不会读内存，常量会在寄存器中产生，取地址就可以直接修改
*/

void main()
{
	int const num = 100;//c++保证常量绝对不会修改
	cout << &num << endl;
	int *p = const_cast<int *>(&num);//去掉强const类型并强转
	*p = 4;//可以编译成功，实现内存的修改

	cout << *p << endl;//真实的内存已经被修改



	//引用直接读取，没有从内存中读取
	cout << num << endl;// 相当于define一样替换了, 直接引用常量 100


	system("pause");
}
