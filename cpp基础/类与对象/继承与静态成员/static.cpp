#include<iostream>
#include<stdlib.h>



using namespace std;


//��������Է��ʻ���ľ�̬��Ա

class MyClass
{
public:

	//��̬��Ա���� ����
	static int count ;//��̬��������������ڲ���ʼ��  ������̬����

	MyClass()
	{
		count++;//ͳ�ƶ�����Ŀ  �����������в�����
	}


	//��̬���������������,���е���
	static void Show()//��̬������������,�޷�ʹ��thisָ��,������ȷ����
	{

		cout << count << endl;
	}
};

int MyClass::count = 0;//��̬������ʼ��


class SonClass:public MyClass
{



};





class GrandClass :public SonClass
{




};






void main()
{

	SonClass *p = new SonClass;//ÿһ���������Ĭ�ϴ���һ���������������ڲ�
	SonClass son;

	GrandClass *px = new GrandClass;
	p->Show();
	p->MyClass::Show();
//	son.Show();

	px->Show();//ֱ�ӷ���
	px->SonClass::MyClass::Show();//���ʻ���

	system("pause");

}