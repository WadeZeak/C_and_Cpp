#include<iostream>

using namespace std;



class Complex
{
public:
	int x;
	int y;

public:

	//没有构造无法使用this
	//内部可以使用this
	Complex(int x, int y) :x(x), y(y)
	{
		/*this->x += 1;
		this->y += 1;*/
		
	}

	Complex()
	{
		this->x = 0;
		this->y = 0;

	}


	~Complex()
	{



	}

	void Show()
	{
		cout << this->x << "+" << this->y<<"i" << endl;
	}

	//运算符重载可以重载为有友元函数或者普通成员函数
	//两者主要区别就是友元函数无法使用this指针

	//输出流重载
	//ostream 引用标准输出流
	friend ostream & operator << (ostream &out, Complex &complex);

	//istream 引用标准输入流
	friend istream & operator >> (istream &in, Complex &complex); 


	//友元函数重载常用于左右操作数不同类型的情况下



	//先自增
	void operator ++()//++重载
	{
		this->x++;
		this->y++;
	}

		void operator --();//先自减

 //重载括号
		int operator()(int num)//重载函数调用运算符，变量名可以当作一个函数调用参数，返回结果
		{
			cout << num << endl;
			return num * 2;

		}


		//二元运算符
		Complex operator + (Complex addtada)
		{
			Complex temp;//临时对象
			temp.x = this->x + addtada.x;
			temp.y = this->y + addtada.y;
			return temp;
		}
		//友元函数可以处理不同的类型交错
		//成员函数能实现，友元函数都可以实现
		//友元函数
		friend Complex operator +(Complex cimplex1, int x);//友元函数实现运算符重载
};



void Complex::operator --()//重载--
{
	this->x--;
	this->y--;
}


//cout 重载
ostream & operator << (ostream &out, Complex &complex)//根据类型重载
{
	out << complex.x << "+" << complex.y <<"i"<< endl;
	return out;
}


//cin重载
istream & operator >> (istream &in, Complex &complex)
{

	cout << "请输入X,Y" << endl;
	in >> complex.x;
	in>>complex.y;

	return in;
}


Complex operator +(Complex complex1, int x)
{
	Complex temp;
	temp.x = complex1.x + x;
	temp.y = complex1.y + x;
	return temp;
}




void main()
{

	Complex complex1(10,20), complex2(30,40);
	/*cin >> complex1;
	cin >> complex2;*/

	cout << complex1 + complex2 << endl;//此时根据complex1进行重载 即根据第一个操作数进行操做
	cout << complex1 + 50 << endl;

	system("pause");

}



void main200()
{

	Complex complex;
	cin >> complex;
	cout << complex;
	//complex++;

	/*int num;
	cin >> num;
	*/
	complex--;

	cout << complex;

	cout << complex(10) << endl;
	cout << complex(20) << endl;

	cin.get();

	system("pause");


}



void main500()
{

	Complex complex1(7, 8);
	//complex1.Show();

	cout << complex1;
	cin >> complex1;
	cout<<complex1;
	system("pause");

}