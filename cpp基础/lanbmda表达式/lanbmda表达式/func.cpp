#include<functional>
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

void main1()
{


	auto funA = [](){cout << "Hello World" << endl; };
	funA();



	auto funB = [](int a, int b){return a + b; };

	cout << funB(10, 20) << endl;

	cin.get();


}




void main2()
{
	vector<int>myv;

	myv.push_back(10);
	myv.push_back(9);
	myv.push_back(27);

	auto fun = [](int a){cout << a << endl; };

	for_each(myv.begin(), myv.end(), fun);


	/*for_each(myv.begin(), myv.end(), [](int a)
	{
		cout << a << endl;
	});*/


	cin.get();

}

void main444()
{

	vector<int>myv;

	myv.push_back(10);
	myv.push_back(9);
	myv.push_back(27);


	int b = 2;

//	auto fun = [=](int a){cout << a + b << endl;  };//= �����б� ֪����պ����ڱ����Ĵ���,��������,ֻ�ܶ�,����д
	
	auto fun = [&b](int a){b=10; cout << a + b << endl; };//���ñ���b ��Ӱ�캯���ڱ���ԭ�е�ֵ



	for_each(myv.begin(), myv.end(), fun);





	cin.get();

}


void main555()
{

	[](){cout << "Hello World" << endl; };//����ָ��
	[](){cout << "Hello World" << endl; }();//���ú���

	cin.get();

}


class Test
{

public:
	vector<int>myv;
	int num;
public:
	Test()
	{
		num = 12;
		myv.push_back(10);
		myv.push_back(20);

	}
	
	void add()
	{
		//����this,ֻ�����õ�ǰ�˿�����еľֲ�����

		int x = 3;
	//	auto fun = [this,x](int v){cout << this->num+x+v<<endl; };

		//& �������еľֲ��������this
		auto fun = [&](int v){cout << this->num + x + v << endl; };

		//=���õ�ǰ������еľֲ���������this �����Ը�ֵ,���ǿ��Զ�ȡ 
		//& �������÷�ʽ����this��ֲ�����
		//��������a   [a] ����[=]
		//���� a [&a]


		for_each(this->myv.begin(), this->myv.end(), fun);
	}


};


void main()
{
	//()-> ȡ������ֵ����
	auto fun1 = []()->double{cout << "Hello World!!" << endl; return 1; };
	fun1();

	auto fun2 = [](int a,double b)->decltype(a/b){cout << "Hello World!!" << endl; return a/b; };
	fun2(10,20.0);


	cin.get();

}