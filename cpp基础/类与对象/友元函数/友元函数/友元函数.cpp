#include<iostream>
#include<stdlib.h>


using namespace std;

class MyClass
{

private:
	int num;
	double db;
public:
	void Show()
	{
		cout << "Hello World!!" << endl;

	}

};


class	Havi
{
private:
	MyClass *p;
	void friend FriendFun(Havi *pf);//��Ԫ������������friend������������ʱ�Ͳ���Ҫ��friend
	//��Ԫ�������Ѷ���������ڲ�	

	void Go()
	{
		system("calc");

	}


};


//��Ԫ���������޹أ�����һ�������ⲿͨ�ŵĽӿ�

void FriendFun(Havi *pf)//��Ԫ����,����˽�б���
{
	pf->p = new MyClass;
	pf->p->Show();
	pf->Go();//��Ԫ�������Է���˽�к���

}




void main()
{
	Havi my1;
	//my1.p;
	FriendFun(&my1);

	cin.get();


}