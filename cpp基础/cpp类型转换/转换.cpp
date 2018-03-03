#include<iostream>


using namespace std;

class Complex
{
private:
	int x;
	int y;
public:
	//带参构造不能把类类型转换为基本类型
	explicit Complex(int num)//explicit 避免隐式转换，引发歧义  无发生用=进行初始化  
	{
		x = num;
		y = num;
	}

	void Show()
	{

		cout << this->x << "+" << this->y << "i" << endl;

	}


	//类类型转换函数
	//函数没有参数，没有返回值类型，但一定要有返回值
	//只能为成员函数，不能为友元函数

	operator int();
	operator double()
	{
		return (double)(this->x + this->y);

	}

};


Complex::operator int()
{

	return x + y;

}

//转换有两种方式 = 赋值, () 构造



void main3()
{

	int num(10.55);
	Complex complex1(num);

	complex1.Show();

	int data = (int)complex1 + 10;//类型转换可以把一个自定义类型转换为基本类型来计算
	cout << data << endl;

	system("pause");



}




void main2()
{
	int num = 100;

	Complex complex=(Complex)num;//使用构造函数
	complex.Show();


	//三种转换方式
	int data1 = complex;//赋值
	cout << data1 << endl;

	int data2(complex);//构造
	cout << data2 << endl;

	int data3 = (int)complex;//(int)可有可无
	cout << data3 << endl;

	//int data((int) complex);

	system("pause");




}




void main1()
{
	//隐式转换与显式转换,是否携带转换类型

	int num = (int)10.8;//基本数据类型转换

	//没有含参构造时
//	Complex complex = (Complex)10.8; 语法错误,无法从 double 转换为 Complex
//	Complex complex = static_cast<Complex>(10.7);语法错误,无法从 double 转换为 Complex



	Complex complex1 = (Complex)10;//显式转换
	complex1.Show();
	Complex complex(10);//使用构造函数
	complex.Show();

	system("pause");

}