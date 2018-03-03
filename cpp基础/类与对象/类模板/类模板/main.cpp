#include<iostream>
#include<vector> 


using namespace std;



int add(int a, int b)
{

	cout << "int_add" << endl;
	return a + b;
}


double add(double a, double b)
{
	cout << "double_add" << endl;

	return a + b;
}


template<class T>
T add(T a, T b)
{

	cout << "template_add" << endl;
	return a + b;
}


class MyClass1
{
public:
	int a;
	int b;

	int add()
	{
		return a + b;
	}


};

class MyClass2
{
public:
	double a;
	double b;

	double add()
	{
		return a + b;
	}


};


//��ģ��ʵ�����ǶԲ�ͬ��������,����������һ�������һ�ֳ���
template<class T>
class MyClass
{
public:
	T a;
	T b;
	T add()
	{
		return a + b;
	}

};


void main()
{
	//MyClass<int> myclass;//��ȷ�����б�

	MyClass<int>  myclass;
	myclass.a = 10;
	myclass.b = 20;
	cout << myclass.add() << endl;

	MyClass<double>  myclass1;
	myclass1.a = 15.4;
	myclass1.b = 40.7;
	cout << myclass1.add() << endl;



	vector<int> myvector;//vector���ʾ�����ģ��

	//boost,STL�����϶�����ģ���

	system("pause");


}



void main2()
{

	
	MyClass1 myclass1;
	myclass1.a = 10;
	myclass1.b = 20;
	cout << myclass1.add() << endl;


	MyClass2 myclass2;
	myclass2.a = 10.5;
	myclass2.b = 20.8;
	cout << myclass2.add() << endl;




	system("pause");




}







void main1()
{

	//������ͨ����
	add(1, 2);
	add(1.2, 2.3);


	
	//���ú���ģ��
	add<int>(1, 2);//<>ʵ����
	add<double>(1.2, 2.3);


	system("pause");

}