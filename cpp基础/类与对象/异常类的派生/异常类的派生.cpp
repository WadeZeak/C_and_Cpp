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


	
	class wrong{};
	class big{};
	class small{};


	class zero:public small//错误类派生,可以接收两种错误
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
		box newbox(0);

	}
	
	catch (box::wrong)
	{

		cout << "正方体长度异常"<<endl;
	}
	catch (box::big)
	{

		cout << "正方体长度太长"<<endl;
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
	catch (box::small)//可以接收两种异常 small zero
	{

		cout << "正方体长度太短"<<endl;
	}

	
	cin.get();

}