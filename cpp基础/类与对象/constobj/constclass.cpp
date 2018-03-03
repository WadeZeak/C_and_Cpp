#include<iostream>

using namespace std;


class Area
{
public:
	int x;
	int y;

	int mutable z;//不收const 约束的类成员

	Area() :x(10), y(20)
	{

	}

	void print()const
	{
		cout << x << '\t' << y << endl;
	}

	void add(int a)
	{
		x += a;
		y += a;

	}



};



void main()
{
	const Area area; //只能调用const约束的成员函数，而其他的成员函数不能调用
	area.print();

	//禁止调用其他函数
	//area.add(6);

	cin.get();

}