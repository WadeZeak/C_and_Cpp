#include<iostream>
#include<string>

using namespace std;

//��ģ��ľ�̬��Ա����
//��ͬ���͵ľ�̬��Ա��������ַ��ͬ
//��ͬ���͵ľ�̬��Ա��������ַһ��

template<class T>
class MyClass
{

	static int data;//˽�о�̬��Ա
public:
	static int count ;//���� ������ⲿ��ʼ��
	T a;
	
public:
	MyClass(T t) :a(t)
	{
		count++;
		data++;
	}

	static void run()
	{
		cout << data << endl;//ʹ�þ�̬��Ա��������˽�о�̬��Ա
		cout << typeid(T).name() << endl;
	}


};

template<class T>
int MyClass<T>::count = 0;

template<class T>
int MyClass<T>::data = 0;


//��̬����,��̬����,������ͬ,����
//���Ͳ�ͬ,������

void main()
{
	MyClass<int> myclass1(1);
	MyClass<double> myclass2(2.5);
	MyClass<string>myclass3("Hello");
	MyClass<int>myclass4('A');

	MyClass<int>::run();
	MyClass<double>::run();



	cin.get();
}



void main1()
{

	MyClass<int> myclass1(1);
	MyClass<double> myclass2(2.5);
	MyClass<string>myclass3("Hello");
	MyClass<int>myclass4('A');


	cout << &myclass1.count << endl;
	cout << &myclass2.count << endl;
	cout << &myclass3.count << endl;
	cout << &myclass4.count<< endl;
	cout << &MyClass<int>::count << endl;


	cin.get();

}