#include<iostream>
#include<string>



using namespace std;


//��ģ�����ֱ�Ӽ̳���ģ��,�������ͱ��봫��
//��ͨ��̳���ģ��,������ȷ����,ʵ����ģ��
//��ģ��̳���ͨ��,��ͨ�ļ̳з�ʽ

//��ģ�嵱����ͨ�� ��Ҫģ���������ʵ����



//ģ�������
template<class T>
class MyClass
{

public :
	T x;

public:

	MyClass(T t) :x(t)
	{

	}


	virtual  void Show()
	{
		cout << "MyClass_x= "<<  x << endl;
	}


	 virtual void print()=0;//���麯��



};


//��ģ��ļ̳� ������ȷ����
template<class T>
class NewClass:public MyClass<T>
{
public:

	T y;

public:

	NewClass(T t1, T t2) :MyClass(t1), y(t2)
	{



	}

	void Show()
	{

		cout <<"NewClass_x=" << x << '\t'<<"NewClass_y" << y << endl;
	}


	void print()
	{
		cout << "Hello World" << endl;

	}



};



void main()
{
	//MyClass<int>myclass(10); //����ģ�����޷�ʵ����
	//���ǿ��Զ���ָ��
	MyClass<int> *p =new NewClass<int>(10,20);//ʹ�������ʼ��
	p->print();
	cin.get();
}


void mainrsg()
{
	MyClass<int> *p = new NewClass<int>(10,20);

	p->Show();//ʹ�û��� �������virtual ��ʹ�������Լ���

	cin.get();







}






void main1()
{

	/*NewClass<double> newclass(1.2,10.5);
	newclass.Show();
*/

	NewClass<string> newclass("Hello World","Hello China");
	newclass.Show();

	cin.get();
}




class XYZ
{

public:
	int x;
	int y;
	int z;
public:

	XYZ(int a, int b, int c) :x(a), y(b), z(c)
	{



	}

	void Show()
	{

		cout << x << y << z << endl;
	}


};


//ģ����̳���ͨ��
template<class T>
class NewXYZ : public XYZ
{
public:
	T t;

public:
	NewXYZ(int a, int b, int c, T w) :XYZ(a, b, c), t(w)
	{



	}
	void Show()
	{
		cout << "T_t=" << t << endl;;
		cout << x << y << z << endl;	
	}

};


class Run :public NewXYZ <int>
{

public:

	int d;
public:
	Run(int a, int b, int c, int w, int v) :NewXYZ<int>(a, b, c, w), d(v)
	{



	}

	void Show()
	{
		cout << x << y << z << t << d << endl;

	}

};

void mainXX()
{

	NewXYZ<string> newxyz(1,2,3,"Hello");

	newxyz.Show();

	cin.get();



}


void maindh()
{

	Run run(1, 2, 3, 4, 5);
	run.Show();

	cin.get();



}






















