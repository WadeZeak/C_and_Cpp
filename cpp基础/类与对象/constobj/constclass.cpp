#include<iostream>

using namespace std;


class Area
{
public:
	int x;
	int y;

	int mutable z;//����const Լ�������Ա

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
	const Area area; //ֻ�ܵ���constԼ���ĳ�Ա�������������ĳ�Ա�������ܵ���
	area.print();

	//��ֹ������������
	//area.add(6);

	cin.get();

}