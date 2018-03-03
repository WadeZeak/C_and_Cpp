#include<iostream>
#include<string>

using namespace std;


class Student
{

public:
	Student()
	{
		cout << "构造" << endl;
	}

	~Student()
	{
		cout << "析构" << endl;
	}


};

class EH//异常处理
{
public:
	void *p;
	char str[30];

public:
	EH(void *pt) :p(static_cast<void *>(pt))
	{


	}

};

bool quit = false;

void out()
{


}



void run()
{

	Student *p = new Student;

	delete p;

//	p = nullptr;

	if (p != nullptr)//如果内存没有释放,出现异常
	{
		quit = true;

		if (quit == true)
		{
			throw EH(p);//抛出异常
		}
	}


}



void main()
{

	try
	{
		run();
	}
	catch (EH &e)
	{

		cout << e.p << '\t';
		cout << "内存异常,内存泄漏" << endl;

	}

	cin.get();


}