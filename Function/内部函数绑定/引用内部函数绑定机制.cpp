#include<iostream>
#include<functional>//������

using namespace std;
using namespace std::placeholders;//std�����ռ��е������ռ�placeholders



//�º���������һ������ָ�룬����һ���ṹ��������ڲ��Ĺ��к���

struct MyStruct//�ṹ���ڲ��ĺ����ǹ����
{
	void add1(int a)
	{
		a++;
		cout << a << endl;
	}


	void add2(int a,int b)
	{
		
		cout << a++ + ++b << endl;
	}

	void add3(int a, int b,int c)
	{

		cout << a+b+c << endl;
	}

};


void main()
{

	MyStruct mystruct;

	//���ڽṹ����ԣ������ǹ���ģ���������˽�е�
	//void(*p)(int) = mystruct.add1; // �﷨����MyStruct::add1�� : ��������ȱ�ٲ����б���ʹ�á�&MyStruct::add1������ָ���Ա��ָ��	
	//void(*p)(int) = &MyStruct::add1;//����ʼ����: �޷��ӡ�void (__thiscall MyStruct::* )(int)��ת��Ϊ��void (__cdecl *)(int)��
	
	//�󶨻��ƣ�����ṹ�壬����˽�У����빲��
	//��������ʱ��ͨ�����ݵĶ�������������
	void(MyStruct:: *p)(int) = &MyStruct::add1;
	



	cin.get();
}








void main2()
{
	MyStruct mystruct;

	//auto �Զ���������ַ,�˴���������ָ�봦��
    //band() �� ��һ�����������ڲ�����	�ڶ���������һ��ʵ�����
	auto func1 = bind(&MyStruct::add1,&mystruct,_1);//	&MyStruct::add �޶��������ڵ���		&mystruct �󶨽ṹ��ʵ�� _1��ʾһ������
	func1(100);
	
	auto func2 = bind(&MyStruct::add2, &mystruct, _1,_2);//_1,_2��ʾռλ
	func2(10, 20);

	auto func3 = bind(&MyStruct::add3, &mystruct, _1, _2,_3);
	func3(10, 20,30);


	cin.get();
}