#include<iostream>

using namespace std;


//ϵͳ���Զ����ɹ�������������

//�����������Ķ���
//���������ȹ���,������֮�󱻹���
//������������,��������֮������

class	Complex
{

public:
	Complex();
	~Complex();
};

Complex:: Complex()
{
	cout << "Creat Complex" << endl;

}


Complex::~Complex()
{
	cout << "Destroy Complex" << endl;
}




class Math
{

public:
	Complex complex1;
	
public:
	Math()
	{
		cout << "Creat Math" << endl;
	}

	~Math()
	{

		cout << "Destroy Math" << endl;

	}
};



void Go()
{
	Math math;
}


void main2()
{
	Go();//Complex�Ĺ���-->Math�Ĺ���-->Math������-->Complex������

	cin.get();
}