#include<iostream>

using namespace std;

class GoodClass
{
public:
	int num=1;//Ĭ�ϳ�ʼ��,C++11
	const int data=90;

public:
	static void Show(GoodClass good1)//static �޷�ֱ�ӷ������ڲ���Ա��������Ҫ��ȷ�������
	{
		cout << good1.num << '\t';
		cout <<good1. data << endl;
	}
};



//���е�constĬ����ֵ�����޸ģ�������C����

void main()
{

	GoodClass good1;
	GoodClass::Show(good1);

	const int *p = &(good1.data);
	int *px = const_cast<int *>(p);
	*px = 100;
	GoodClass::Show(good1);
	cin.get();

}