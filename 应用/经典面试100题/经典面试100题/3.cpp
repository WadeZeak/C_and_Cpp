#include<iostream>
using namespace std;

class Myclass
{

public:
	static class stclass//C++û�о�̬��,���г�Ա���Ǿ�̬��,��ѷҪʵ������ɷ���
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