#include<iostream>

using namespace std;

//没有virtual 一直调用基类的方法
//virtual 就是一个函数指针，如果存在，会根据对象的不同调用不同的方法



class Base
{
public:
	int x;
public:
	void Name()
	{

		cout << "Base" << '\t';
		cout << "x=" << x << endl;

	}


	Base(int a) :x(a)
	{


	}


	//虚函数 实际上函数指针 即虚函数占用4字节的地址 32位情况
	//自动调用子类函数覆盖父类
	virtual void Show()
	{
		cout << "Base" << '\t';
		cout << "x=" << x << endl;

	}

};


class First_d : public Base
{
public:
	int y;
public :
	void Name()
	{

		cout << "First_d" << '\t';
		cout << "x=" << x << ',' << "y=" <<y <<endl;


	}
	First_d(int a, int b) :Base(a), y(b)
	{



	}
	 void Show()
	{
		 cout << "First_d" << '\t';
		 cout << "x=" << x << ',' << "y=" << y << endl;

	}
};

class Second_d : public First_d
{
public:
	int z;
public:
	void Name()
	{

		cout << "Second_d" << '\t';
		cout << "x=" << x << ',' << "y=" << y <<","<<"z="<<z << endl;

	}

	Second_d(int a, int b, int c) :First_d(a, b), z(c)
	{




	}


	void Show()
	{

		cout << "Second_d" << '\t';
		cout << "x=" << x << ',' << "y=" << y << "," << "z=" << z << endl;

	}

};


void main()
{
	cout << "Size_Base=" << sizeof(Base) << endl;
	
	Base base_obj(1);
	First_d fir_obj(1, 2);
	Second_d sec_obj(1, 2, 3);

	Base *pb;


	//虚函数 首先在子类中寻找
	pb = &base_obj;
	pb->Show();

	pb = &fir_obj;
	pb->Show();

	pb = &sec_obj;
	pb->Show();

	system("pause");


}



void main2()
{

	Base base_obj(1);
	First_d fir_obj(1,2);
	Second_d sec_obj(1,2,3);
	Base *pb;

	//全部调用基类的同名 函数
 	pb = &base_obj;
	pb->Name();

	pb = &fir_obj;
	pb->Name();

	pb = &sec_obj;
	pb->Name();

	//基类指针的移动

	((Base *)pb)->Name();

	((First_d *)pb)->Name();
	((Second_d *)pb)->Name();

	system("pause");

}



void main1()
{
	Base *pb = new Base(1);
	pb->Name();

	First_d *pf = new First_d(1,2);
	pf->Name();

	Second_d *ps = new Second_d(1, 2, 3);
	ps->Name();

	First_d *pbf = static_cast<First_d *>(pb);//基类
	pbf->Name();

	Second_d *pfs = static_cast<Second_d *>(pb);//基类
	pfs->Name();

	system("pause");


}