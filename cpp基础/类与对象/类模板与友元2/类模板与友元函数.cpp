#include<iostream>

using namespace std;


//ʵ����ģ����ⲿ��Ԫ,����Ҫ������ģ������Ԫ
template<class T>class MyClass;//������ģ��
template<class T>void display(MyClass<T>myclass);//������ģ�����Ԫ



template<class T>
class MyClass
{

private:
	T x;
	//int y;//��������ģ�������޹صĳ�Ա,��Ҫ��ͨ����Ԫ��;������Ҫ��ģ����Ԫ
public:
	MyClass(T a) :x(a)
	{




	}


	friend void Show(MyClass<T>myclass)
	{
		cout << myclass.x << endl;
	}

	friend void display<T>(MyClass<T>myclass);//ʵ���ⲿ��Ԫ  �������<T>

	//��ģ�����Ԫ�������ⲿʵ��
	//������ڲ�����ʱ����Ҫ��������<T>
	//����Ҫ������ģ������Ԫ����

};

template<class T>
void display(MyClass<T>myclass)
{
	cout << myclass.x << endl;

}

void mainsdgsd()
{


	MyClass<int> myclass(10);
	Show(myclass);
	display(myclass);
	MyClass<double> myclass1(10.5);
	Show(myclass1);
	display(myclass1);

	system("pause");
}