#include<iostream>

using namespace std;

class MyClass
{
public:
	int num;

public:
	static void calc()//��̬��Ա����
	{

		system("calc");
	}

	 void notepad()//��ͨ��Ա����
	{
		 system("notepad");

	}
};





void main()
{
	MyClass myclass1;
	
	myclass1.notepad();
	myclass1.calc();
	//MyClass::notepad();//�Ǿ�̬������Ա������������
	
	MyClass::calc();//��̬������Ա����Ҫʵ�弴�ɵ���
	cin.get();


}

