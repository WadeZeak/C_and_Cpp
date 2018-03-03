#include<iostream>

using namespace std;

//û��virtual һֱ���û���ķ���
//virtual ����һ������ָ�룬������ڣ�����ݶ���Ĳ�ͬ���ò�ͬ�ķ���



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


	//�麯�� ʵ���Ϻ���ָ�� ���麯��ռ��4�ֽڵĵ�ַ 32λ���
	//�Զ��������ຯ�����Ǹ���
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


	//�麯�� ������������Ѱ��
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

	//ȫ�����û����ͬ�� ����
 	pb = &base_obj;
	pb->Name();

	pb = &fir_obj;
	pb->Name();

	pb = &sec_obj;
	pb->Name();

	//����ָ����ƶ�

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

	First_d *pbf = static_cast<First_d *>(pb);//����
	pbf->Name();

	Second_d *pfs = static_cast<Second_d *>(pb);//����
	pfs->Name();

	system("pause");


}