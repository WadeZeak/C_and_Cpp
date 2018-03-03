#include<iostream>
using namespace std;

class Myclass
{

public:
	static class stclass//C++没有静态类,所有成员都是静态的,不逊要实例化便可访问
	{

	public:
		int num = 0;


	};

};



void main1()
{


#ifdef __cplusplus
	cout << "c++";
#else		
	cout << "c";
#endif


}


void mainssss()
{

	Myclass m;

	


}