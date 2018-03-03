#include<iostream>

using namespace std;

//C++11 关键字 final  override
//final 拒绝重载 某些情况下接口拒绝重载
//加了final关键字的虚函数，无法被重写,预留接口


//override 声明重载 必须重载 父类没有接口会报错


class Base
{
public:

	// final 只适用于虚函数
	virtual void  print() final // 声明为“final”的函数无法重写
	{

		cout << "final关键字测试" << endl;

	}

	 void Show() 
	{
		cout << "Base Class" << endl;
	}

	virtual  void Run()
	 {
		 cout << "Base_Run" << endl;
	 }




};


class First_d :public Base
{

public:

	/*void print()
	{



	}
*/
	//override 强调覆盖了基类的方法  需要重写基类的方法,否则关键字无法生效
	void Run() override 
	{
		cout << "First_Run" << endl;
	}

	void Show()
	{
		cout << "First_d Class" << endl;
	}




};





void main()
{

	First_d fir_d1;

//	fir_d1.Show();

	fir_d1.Run();
	//system("pause");
	
	cin.get();
}
