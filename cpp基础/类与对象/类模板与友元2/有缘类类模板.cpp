#include<iostream>

using namespace std;

//��������ģ��������Ԫģ����
template<class T>class MyClass;
template<class T>class friendclass;

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

	friend class friendclass<T>;//������Ԫ��
	//��Ԫ�����������Ĵ���
	//��������Ԫ��,�����������������

};

template<class T>
class friendclass
{

public:
    void display(MyClass<T> const &myclass)//����������
	{
		cout << myclass.x << endl;

	}


};




void main()
{

	MyClass<double> myclass(10.8);
	friendclass<double>friend1;
	friend1.display(myclass);
	cin.get();


}