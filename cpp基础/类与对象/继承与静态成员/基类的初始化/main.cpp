#include<iostream>

using namespace std;

class MyClass
{
public:

	MyClass() :x(0)//�޲ι��� ��ʼ��
	{
	//	x = 0;

		cout << "MyClass Init without parameter" << endl;
	}

	MyClass(int num) :x(num)
	{
		cout<<"MyClass Init with parameter" << endl;
	}

	
private:
	//int x=0;//��ʼ��
	int x;
};


class SonClass:public MyClass
{
public:
	SonClass() //:MyClass(10)
	{
		cout << "SonClass Init without parameter" << endl;


	}
	
	//���ú��ι���,��ʼ�������Ա
	SonClass(int num) :MyClass(num), z(num + 1), y(num+2)
	{

		cout << "SonClass Init with parameter" << endl;

	}

	int z;
	int y;


};




void main()
{

//	MyClass *p = new MyClass;
//	SonClass *ps = new SonClass;
	SonClass *ps = new SonClass(10);//ѡ�����캯��

	cin.get();

}




