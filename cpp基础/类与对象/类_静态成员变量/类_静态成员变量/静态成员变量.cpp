#include<iostream>


using namespace std;


//��̬��Ա�����ṩ��һ��ͬ�����Ĺ������
//һ����ľ�̬��Ա����������,һ��������ж��󶼻���ʸþ�̬����
//��̬��Ա����������,�����Ƕ����Ա





class String
{
public:
	int len;
	char str[100];
};






class MyClass
{
public:
	String *p;
	static int count;//��̬��Ա����


public:

	MyClass()
	{
		if (count>4)
		{
			cout << "���������Ѿ��ﵽ����,���ɴ���" << endl;

		}
		else
		{
			p = new String;
			count++;

		}

	}
	
	~MyClass()
	{
		delete p;
	}

};



int MyClass::count = 0;//��̬��Ա������ʼ��



void main()
{

	MyClass *myclass = new MyClass;
	cout << myclass->count << endl;
	{

		MyClass *myclass = new MyClass;
		cout << myclass->count << endl;

	}


	{

		MyClass *myclass = new MyClass;
		cout << myclass->count << endl;

	}

{

	MyClass *myclass = new MyClass;
	cout << myclass->count << endl;

}

	{

		MyClass *myclass = new MyClass;
		cout << myclass->count << endl;

	}

	{

		MyClass *myclass = new MyClass;
		cout << myclass->count << endl;

	}

	cin.get();
}