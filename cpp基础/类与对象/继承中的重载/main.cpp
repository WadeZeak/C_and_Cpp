#include <iostream>

using namespace std;


//�������������е�����

class AAA
{

public:
	void GoA()
	{
		cout << "A----GoA()" << endl;
	}

	void Go(int num)
	{
		cout << "A----Go( int)" << endl;
	}


	void Go(char *str)
	{
		cout << "A----Go(char *)" << endl;
	}





};


class BBB:public AAA
{

public:

	mutable int num;//����const �����޸�
	void Go()
	{
		cout << "B----Go()" << endl;

	}

	//const����һ�������ڳ�������
	//����constһ�������ڱ������� 


	void Go()const
	{
		cout << "B----Go() const" << endl;

	}


};


void main()
{
	BBB *pb = new BBB;
	pb->Go();

	const BBB *pbc = new BBB;
	pbc->Go();


	system("pause");
}


void main1()
{
	BBB *pb = new BBB;

	pb->GoA();
	//������ĻḲ�ǻ����е�ͬ������
	//��ʹ��������һ��,����ֱ�ӵ��û���ĺ���,��Ҫ��ȷ����

	pb->AAA::Go(NULL);
	pb->AAA::Go(nullptr);//C++��ָ�벻�ܴ�ӡ,��C���Կ���




	system("pause");


}