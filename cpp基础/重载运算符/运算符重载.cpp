#include<iostream>


using namespace std;


//友元函数可以访问私有变量或者私有函数,如果不访问私有前两，则不必使用友元函数
//友元函数不能重载的运算符 
//= () [] ->


class MyClass
{
public:

	int a;
	int b;
public:
	MyClass(int x, int y) :a(x), b(y)
	{
		cout << "对象被创建" << endl;	
	}

	void Show()
	{

		cout << "a=" << this->a << '\t';
		cout << "b=" << this->b << endl; 
	}

	//赋值号重载
	MyClass *operator =(MyClass const &myclass)
	{
		this->a = myclass.a;
		this->b = myclass.b;
		this->Show();
		return this;
	}

	//+=重载

	MyClass *operator +=(int len)
	{
		this->a += len;
		this->b += len;
		this->Show();
		return this;
	}



	bool operator <(MyClass &myclass)
	{
		return (this->a <*&this->b) < (myclass.b*myclass.a);

	}


};


template<class T>
void Showall(	T *w)
{
	w->Show();

}


void main()
{


	MyClass myclass1(10, 20),myclass2(40,50) ;

	//myclass1 = myclass2;
	//myclass1 += 10;

	Showall(&myclass1);

	cout << (myclass1 < myclass2 )<< endl;
	system("pause");


}