#include<iostream>


using namespace std;


//类模板异常,处理通用数据类型,包含一个类如何使用
//虚函数，可以用指针或者饮用来实现

//异常处理机制,一个接口可以处理通用的异常

template<class T>//typename 会明确类型
class Array
{
	//typename Array::A()*p;////typename限定为某种类型

private:
	int size;
	T *p;

public:
	Array(int n)
	{

		//将n约束在100-1000之间
		if (n>0&&n<10)
		{
			throw small(n);
		}
		else if (n>1000)
		{
			throw big(n);
		}
		else if (n<=0)
		{
			throw wrong();
		}
		else
		{
			p = new T[n];
			size = n;
		}
	}


	class wrong
	{

	public:
		virtual void show()
		{
			cout << typeid(T).name() << '\t';
			cout << "show wrong" << endl;
		}

	};

	class big:public wrong
	{
	public:
		int size;
	public:
		big(int n) :size(n)
		{



		}
		void show()
		{
			cout << size << '\t';
			cout << "big wrong" << endl;
		}
	};

	


	class small:public wrong
	{

	public:
		int size;
	public:
		small(int n) :size(n)
		{
			


		}
	};

	void show()
	{
		cout << size << '\t';
		cout << "small wrong" << endl;
	}

};





void main()
{

	try
	{
		Array<int> arr(-1);

	}
	catch (Array<int>::wrong &w)
	{
		w.show();
	}



	cin.get();
}