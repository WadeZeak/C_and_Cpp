#include<iostream>

using namespace std;


//C++11��union����Ҳ��һ���࣬�ڲ�Ҳ�����к���
//union�ڲ������ǹ���ģ���ͬ����֮���Ƕ����ģ������ǹ����
//union���Ծ߱��ṹ��ĵ����й���


union MyUnion
{
	int a;
	int num;
	double db;
	void gogo()//������,�������С
	{
		cout << "Hello World" << endl;
	}
};

//union ����ʵ�ּ̳У�����n�ڲ����ݵĿռ��ǹ����
//
//union MyUnionA:public MyUnion
//{
//	
//};


void main()
{


	cout << sizeof(MyUnion) << endl;;//8Byte

	MyUnion union1;

	union1.a = 10;
	cout << union1.num << endl;

	union1.db = 11.11;
	cout << union1.num << endl;

	union1.gogo();
	cin.get();
}