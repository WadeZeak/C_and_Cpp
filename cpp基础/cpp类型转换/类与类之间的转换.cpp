#include<iostream>

using namespace std;


class Area
{
public:
	friend class Complex;//友类

	Area()
	{
		this->cx = 0;
		this->cy = 0;
	}

	void setxy(int a, int b)
	{
		this->cx = a;
		this->cy = b;
	}
	
private:
	int cx;
	int cy;



};



class Complex
{
private:
	int x;
	int y;

public:

	//构造函数实现类类型转换
	Complex(Area area)
	{
		this->x = area.cx;
		this->y = area.cy;
	}

	void Show()
	{
		cout << this->x << "+" << this->y << "i" << endl;
	}
	operator Area()//类类型转换函数
	{

		Area temp;
		temp.cx = x;
		temp.cy = y;
		return temp;
	}


};

void main()
{

	Area area;

	//没有类型转换函数或者构造函数,无法实现类型转换
	//Complex complex = (Complex)area;
	Area area1;
	area1.setxy(10, 20);
	Complex complex = static_cast<Complex>(area);//通过构造函数实现类类型转换
	
	complex.Show();
	complex = area1;
	complex.Show();
	system("pause");





}