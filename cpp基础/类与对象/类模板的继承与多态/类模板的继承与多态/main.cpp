#include<iostream>
#include<string>



using namespace std;


//类模板可以直接继承类模板,但是类型必须传递
//普通类继承类模板,必须明确类型,实例化模板
//类模板继承普通类,普通的继承方式

//类模板当作普通类 需要模板参数进行实例化



//模板抽象类
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


	 virtual void print()=0;//纯虚函数



};


//类模板的继承 必须明确类型
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
	//MyClass<int>myclass(10); //抽象模板类无法实例化
	//但是可以定义指针
	MyClass<int> *p =new NewClass<int>(10,20);//使用子类初始化
	p->print();
	cin.get();
}


void mainrsg()
{
	MyClass<int> *p = new NewClass<int>(10,20);

	p->Show();//使用基类 如果加上virtual 则使用子类自己的

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


//模板类继承普通类
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






















