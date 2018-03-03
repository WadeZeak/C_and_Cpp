#include<iostream>
#include<algorithm>
#include<vector>
#include<Windows.h>
using namespace std;



template<class T>
class mypoint
{
private:
	T *p = nullptr;

public:

	mypoint()
	{

	}
	mypoint(T *t)
	{
		p = t;//浅拷贝
	}

	~mypoint()
	{

		if (p != nullptr)
		{
			delete p;
		}

	}

	T operator *()
	{
		return *p;

	}

};


class Test
{

public:
	Test()
	{
		cout << "Creat Test" << endl;
	}


	~Test()
	{
		cout << "delete Test" << endl;
	}


};

void run()
{

	mypoint<Test> pt(new Test);//智能指针 自动释放
	//*pt;

}

void main22()
{


	run();
	cin.get();

	
}