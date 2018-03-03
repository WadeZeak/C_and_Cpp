
#include<stdlib.h>
#include<iostream>


using namespace std;


class MyClass1
{
private:
	int *p;
	int len;

public:

	MyClass1()//构建时初始化
	{
		cout << "MyClass 被创建" << endl;
	}


	~MyClass1()//删除的时候释放内存
	{
		cout << "MyClass 被销毁" << endl;

	}

};






void mainghf()
{

	MyClass1 *p = new MyClass1[10];


	//基本数据类型可以直接delete，而复杂的类型则需要加上[ ]
	delete []p;



	system("pause");

}