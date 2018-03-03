#include<iostream>


using namespace std;

//using 只能简写数据类型

namespace space//命名空间 隔离模板，避免冲突
{
	template<class T>using ptr = T*;//模板简写 使用ptr代表模板指针
}

//template<class TN>using ptrA = TN*;
int add(int a, int b)
{
	return a + b;
}

typedef  int(*ADD)(int, int);//C的别名 typedef
using FUNC = int(*)(int, int);//C++的别名


using base = std::ios_base::fmtflags;//一种数据类型


void main()
{
	//ADD 一种数据类型,函数指针类型
	ADD p=add;
	cout << p(10,20) << endl;

	FUNC pfun = add;
	cout << p(1, 2) << endl;

	space::ptr<int>pint(new int(15));//代表了int *pint=new int(15) 然而此时首部存储了的数据为15
	//*pint = 20;
	pint[0] = 10;
	pint[1] = 20;
	pint[2] = 30;
	cout << *pint << "\t" << pint << endl;
	cin.get();
}






