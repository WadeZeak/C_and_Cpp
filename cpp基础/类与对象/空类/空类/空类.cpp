#include<iostream>


using namespace std;

//�಻��ȡ��ַ,����Ķ������ȡ��ַ
class Kong
{


};

class MyClass
{
public:
	/*int num;*/

	void go()//��������������Ĵ�С����
	{

		cout << "Hello World" <<endl;
	}

};

void main()
{
	cout << sizeof(Kong) << endl;//����ռ1Byte�������Լ�����

	Kong K1;
	cout << &K1 << endl;

	MyClass C1;
	cout << sizeof(C1) << endl;

	cin.get();
}