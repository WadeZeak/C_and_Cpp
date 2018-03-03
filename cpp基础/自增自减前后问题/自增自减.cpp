#include<iostream>

using namespace std;


class MyClass
{
public:
	int x;
	int y;

public:
	/*MyClass(int a, int b) :x(a), y(b)
	{
		cout << "Creat Class Obj" << endl;


	}*/
	friend ostream & operator <<(ostream &out, MyClass &myclass);


	void Setxy(int a, int b)
	{
		this->x = a;
		this->y = b;
	}


	MyClass * operator ++()//前置 先自增
	{

		this-> x+= 1;
		this->y += 1;
		return this;
	}


	MyClass * operator ++(int data)//后置 后自增
	{
		MyClass *p = new MyClass;

		//临时变量保存现有的值
		p->x=this->x ;
		p->y=this->y ;

		this->x += 1;
		this->y += 1;
		return p;//返回临时指针变量
	}

	void Show()
	{

		cout << "x=" <<this->x << '\t';
		cout <<"y="<<this->y << endl;
	}




};


ostream & operator <<(ostream &out, MyClass &myclass)
{
	out << "x=" << myclass.x << '\t';
	out << "y=" << myclass.y << endl;
	return out;
}


void main()
{


	MyClass myclass;
	
	myclass.Setxy(10, 20);

	MyClass *p = myclass++;
	p->Show();
	p = ++myclass;
	p->Show();
	system("pause");


}