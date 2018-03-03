#include<iostream>
#include<new>


using namespace std;


struct Big
{
	double db[200000];

};


void main22()
{

	Big *pb = new (std::nothrow)Big[1000];//nothrow 内存分配失败,不会出现异常



	if (pb==NULL)
	{

		cout <<"分配内存失败"<< endl;
	}

	cin.get();


}
