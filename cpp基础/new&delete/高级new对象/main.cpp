#include<iostream>

using namespace std;


class MyClass
{

public:
	MyClass()
	{
		cout << "Creat MyClass" << endl;

	}

	~MyClass()
	{
		cout << "Delete MyClass" << endl;
	}


};


void main()
{
	char *pcache = new char[1024];
	char *pcacheend = pcache + 1024;
	cout << (void *)pcache<< "\t" << (void *)pcacheend << endl;


	MyClass *p = new(pcache) MyClass[10];//限定内存区域 覆盖模式
	cout << p << endl;

//	delete []p;//一般不需要delete []p 它会自动覆盖

	cout << p << endl;

	p = new(pcache)MyClass[10];
	delete[]p;//只能释放一次
	
	cout << p << endl;




	//MyClass *pm = new MyClass[10];
	//cout << pm << endl;
	//delete [] pm;
	//pm = NULL;
	//cout << pm << endl;

	//pm = new MyClass[10];
	//cout << pm << endl;
	//delete[] pm;
	//pm = NULL;
	//cout << pm << endl;

	cin.get();





}