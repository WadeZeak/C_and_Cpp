#include<iostream>
#include<new>


using namespace std;


struct Big
{
	double db[200000];

};


void main22()
{

	Big *pb = new (std::nothrow)Big[1000];//nothrow �ڴ����ʧ��,��������쳣



	if (pb==NULL)
	{

		cout <<"�����ڴ�ʧ��"<< endl;
	}

	cin.get();


}
