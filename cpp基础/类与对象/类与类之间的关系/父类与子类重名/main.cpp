#include<iostream>

using namespace std;

class Parent
{
public:
	int num;

	void Show()
	{
		cout <<" Parent_num=" << num << endl;
	}

	Parent()
	{
		num = 10;
	}

};


class Son :public Parent
{
public:
	int num;
	Son()
	{
		num = 20;
	}

	void Show()
	{
		cout << "Son_num= "<<num << endl;
	}


};


void main()
{
	Son *pson = new Son;
	pson->Show();//���า�Ǹ����������Ա


	//������ʸ����������Ա
	pson->Parent::Show();//��˵��
	Parent *pparent = reinterpret_cast<Parent *>(pson);//ָ�������ת��
	pparent->Show();

	system("pause");
}
