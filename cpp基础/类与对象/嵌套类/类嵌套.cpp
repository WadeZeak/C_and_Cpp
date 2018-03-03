#include<iostream>

using namespace std;



//ÀàµÄÇ¶Ì×
class MyClass
{

public:
	class NewClass
	{

	public:
		int num;
	}newclass;


};


class First_d:public MyClass
{



};


void main2()
{
	First_d fir_d;
	fir_d.MyClass::newclass.num=10;

	cout << fir_d.newclass.num << endl;

	cin.get();


}




void main1()
{

	MyClass myclass1;
	myclass1.newclass.num = 10;


	cout << myclass1.newclass.num << endl;


	cin.get();



}