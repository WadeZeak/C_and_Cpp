#include<iostream>

using namespace std;

class  AAA//有虚函数 类中存储一个指向虚函数表的指针,一般在类的头部
{
	//int num;
	virtual void go()
	{
		cout << "AAA::go" << endl;
	}


	virtual void fff()
	{
		cout << "AAA::fff" << endl;
	}

	virtual void jjj()
	{
		cout << "AAA::jjj" << endl;
	}
};


class	aaa
{
	virtual void run()
	{
		cout << "aaa::run" << endl;
	}

};

//多重继承
class BBB :public AAA,public aaa//变成8字节 相当于继承了两个虚函数表
{

	 void go()
	{
		cout << "BBB::go" << endl;
	}

	virtual void hhh()
	{
		cout << "BBB::hhh" << endl;
	}

	virtual void ooo()
	{
		cout << "BBB::ooo" << endl;
	}
};





typedef void(*Func)(void);


void main()
{
	cout << sizeof(aaa) << endl;
	cout << sizeof(AAA) << endl;
	cout << sizeof(BBB) << endl;

	BBB b;	
	Func pfunc;


	for (int i = 0; i < 5; i++)
	{
		pfunc = (Func)*((int *)*(int *)(&b)+i);//访问虚函数  虚函数会找到一个类中所对应的函数
		//(int *)(&b)将b的地址强制转换为int *类型 读取4个字节
		//* (int *)(&b) 取出&b中的内容,即虚函数标地址
		//(int *)  *(int*)(&b) 将&b中的内容转换为int *类型
		//(Func)*((int *)  *(int*)(&b)) 取出内容并转换为Func类型
		pfunc();
	}
	Func pfunc1;
	pfunc1 = (Func)*((int *)*((int *)(&b) + 1));
	pfunc1();
	cin.get();
}



//虚函数表中虚函数排列顺序
//父类中的虚函数按照顺序在前
//子类的虚函数在后