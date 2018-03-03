#include<iostream>


using namespace std;


template < class T, class F >
void Run(T t,F f)
{

	f(t);
}



class MyClass
{
public:

	int x;

public:
	void set(int a)
	{
		x = a;
	}


	MyClass(double b) :x(b)
	{



	}
	MyClass()
	{



	}

};


void main()
{


	MyClass myclass1;
	Run(10, MyClass::set);
	 cout << myclass1.x << endl;

	 cin.get();

}