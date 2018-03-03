

//#defile public private //去除单例模式

#include <iostream>
#include <string>
#include <vector>
using namespace std;



//保证一个类仅有一个实例，并提供一个访问它的全局访问点
//而且自行实例化并向整个系统提供这个实例单例模式
//单例模式只有在真正有"单一实例"的需求是才能使用


class Singelton
{
private:

	int i;
	static Singelton* instance;
	Singelton(int m)
	{
		this->i = m;
	}

public:
	

	static Singelton* GetInstance()//实现单例模式的关键
	{
		if (instance == NULL)
		{
			instance = new Singelton(0);
		}
		return instance;
	}

	void show()
	{
		cout << i << endl;

	}

};



//Singelton* Singelton::instance = NULL;//注意静态变量类外初始化
Singelton* Singelton::instance=new Singelton(9988);




//客户端：

int mainsss()
{
	Singelton* s1 = Singelton::GetInstance();
	Singelton* s2 = Singelton::GetInstance();
	if (s1 == s2)
		cout << "ok" << endl;
	else
		cout << "no" << endl;

	cin.get();
	return 0;
}