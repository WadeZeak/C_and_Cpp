#include<functional>
#include<algorithm>
#include<iostream>
#include<string>
using namespace std;




void main43535()
{

	function<int(char *)>fun = atoi;
	cout << fun("123") + fun("456") << endl;
	fun = strlen;
	cout << fun("789") << endl;
	cin.get();
}


class StrCmp :public std::binary_function<const char *,const char *,int>
{
public:
	int operator()(const char * str1,const char *str2)const 
	{
		return strcmp(str1, str2);
	}



};

void main3()
{

	function<int(char *)>func = bind1st(StrCmp(), "ABC");
	cout << func("123") << endl;
	cout << func("ABC") << endl;//等于返回0，否则返回1
	cin.get();
}




//需要boost实现
//
//
//class manager
//{
//public:
//	function<void(int,int)> workID;
//
//public:
//	void allstart()
//	{
//		for (int i = 0; i < 10; i++)
//		{
//			if (workID)
//			{
//				workID(i,i);
//			}
//		}
//
//	}
//
//	void setallback(function<void(int,int)>newid)
//	{
//		workID = newid;
//	}
//
//
//};
//
//class worker:public std::unary_function<int,void>
//{
//
//public:
//	void run( int toid)
//	{
//			 id = toid;
//		cout << id << "工作" << endl;
//	}
//
//public:
//	int id;
//};
//
//
//void main()
//{
//
//	manager m;
//	worker w;
//
//	m.setallback(std::bind1st(&worker::run, &w));//根据对象实现绑定另外一个类的内部函数
//	m.allstart();
//	cin.get();
//}


