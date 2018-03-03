#include<iostream>
#include <string>


using namespace std;



class box   //正方体
{
public:
	box(int data)
	{
		cout << "开始构造" << endl;

		if (data == 0)
		{
			zero z1(22);
			z1.seterr(21);//设置异常类型
			throw z1;
		}
		else if (data >0 && data<100)
		{
			throw small();
		}
		else  if (data>10000)
		{
			throw big();
		}
		else if (data>100 && data<10000)
		{
			a = data;
		}
		else
		{
			throw wrong{};
		}


	}



	class wrong	//基类 可以接收派生类的异常
	{
	public:
		virtual void show()//虚函数接口 使用一个异常类,处理不同的异常,调用派生类的的函数
		{
			cout << "show wrong" << endl;
		}
	
	};
	class big:public wrong
	{
	public:
		void show()
		{
			cout << "big wrong" << endl;
		}
	};

	class small :public wrong
	{
	public:
		void show()
		{
			cout << "small wrong" << endl;
		}

	};


	class zero :public small//错误类派生,可以接收两种错误
	{

	public:

		int errcode;
	public:

		zero(int i) :errcode(i)//构造函数
		{

		}
		void seterr(int i)
		{
			errcode = i;
		}
	};




private:
	int a;//变长




};

void main()
{

	try
	{
		box newbox(13330);

	}
	catch (box::zero w)
	{
		if (w.errcode == 22)
		{
			cout << "22号错误,正方体长度不可以为0" << endl;
		}
		else
		{
			cout << "非22号错误,正方体长度不可以为0" << endl;
		}

	}

	//虚函数一个接口 处理多个错误
	catch (box::wrong &w)//引用是由指针实现的,用一个父类的引用,引用子类的对象,如果有虚函数,都会调用子类是俺的方法 通过虚函数表实现
	{

		w.show();
		//cout << "正方体长度异常" << endl;
	}
	catch (box::small &s)//可以接收两种异常 small zero
	{
		s.show();
		//cout << "正方体长度太短" << endl;
	}

	catch (box::big &b)
	{
		b.show();
		//	cout << "正方体长度太长" << endl;
	}

	cin.get();

}