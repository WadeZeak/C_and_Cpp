#include<iostream>

using namespace std;


//��������Ϊһ���ӿ�
class Base
{

public:
	//���麯�����޶��������
	virtual void run() = 0 //���� =0 �޶�һ���಻��ʵ����
	{
		cout << "Hello World!!" << endl;

	}

	virtual ~Base()
	{
		cout << "Delete Base " << endl;
	}

};

//�����಻�����ں��������Լ�������������,��������ָ�����
//Base *test()
//{
//
//	Base *pbase;
//	return pbase;
//}


class Boy : public Base
{

public:
	void run()
	{
		cout << "Boy Run" << endl;
	}


};

class Girl :public Base
{

public:
	void run()
	{
		cout << "Girl Run" << endl;
	}


};

void main()
{

	//Base base;////�������޷�ʵ��������,������ʵ����ָ��
	//	Base *pbase=new Boy;

	//���麯��������඼���˽ӿڵ�����
	//��ͬһ���ӿ�ʵ�ֲ�ͬ�Ĺ���
	//���麯�������Ǿ���Ϊ�˽ӿڴ���,���˴��麯�������޷�ʵ����

	//�麯��ռ��4�ֽ�,�����Ͼ���ָ��


	Base *pb(nullptr);
	Boy boy;
	Girl girl;

	pb = &boy;
	pb->run();

	pb = &girl;
	pb->run();


	system("pause");

}