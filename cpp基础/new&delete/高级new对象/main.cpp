#include<iostream>

using namespace std;


class MyClass
{

public:
	MyClass()
	{
		cout << "Creat MyClass" << endl;

	}

	~MyClass()
	{
		cout << "Delete MyClass" << endl;
	}


};


void main()
{
	char *pcache = new char[1024];
	char *pcacheend = pcache + 1024;
	cout << (void *)pcache<< "\t" << (void *)pcacheend << endl;


	MyClass *p = new(pcache) MyClass[10];//�޶��ڴ����� ����ģʽ
	cout << p << endl;

//	delete []p;//һ�㲻��Ҫdelete []p �����Զ�����

	cout << p << endl;

	p = new(pcache)MyClass[10];
	delete[]p;//ֻ���ͷ�һ��
	
	cout << p << endl;




	//MyClass *pm = new MyClass[10];
	//cout << pm << endl;
	//delete [] pm;
	//pm = NULL;
	//cout << pm << endl;

	//pm = new MyClass[10];
	//cout << pm << endl;
	//delete[] pm;
	//pm = NULL;
	//cout << pm << endl;

	cin.get();





}