#include<iostream>
#include <string>
using namespace std;



//���(����)ģʽ:�ⲿ��һ����ϵͳ��ͨ�ű���ͨ��һ��ͳһ������������
//����ģʽ�ṩһ���߲�εĽӿ�,ʹ��ϵͳ������ʹ��
//ÿһ����ϵͳֻ��һ��������,���������ֻ��һ��ʵ��
//Ҳ��˵����ģʽ����������ϵͳ�����ж��������


class SubSysOne
{
public:
	void MethodOne()
	{
		cout << "��ϵͳ����һ" << endl;
	}
};

class SubSysTwo
{
public:
	void MethodTwo()
	{
		cout << "��ϵͳ������" << endl;
	}
};

class SubSysThree
{
public:
	void MethodThree()
	{
		cout << "��ϵͳ������" << endl;
	}
};

//����� ͳһ�Ľӿ�ʵ�ֹ���  ����QQ������,�������ܲ�ͬ����Ȩ
class Facade
{
private:
	SubSysOne* sub1;
	SubSysTwo* sub2;
	SubSysThree* sub3;
public:
	Facade()
	{
		sub1 = new SubSysOne();
		sub2 = new SubSysTwo();
		sub3 = new SubSysThree();
	}

	~Facade()
	{
		delete sub1;
		delete sub2;
		delete sub3;
	}

	void FacadeMethod()
	{
		sub1->MethodOne();
		sub2->MethodTwo();
		sub3->MethodThree();
	}
};

//�ͻ���
int main37473736()
{
	Facade* test = new Facade();
	test->FacadeMethod();
	return 0;
}
