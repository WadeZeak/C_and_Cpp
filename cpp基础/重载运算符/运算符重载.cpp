#include<iostream>


using namespace std;


//��Ԫ�������Է���˽�б�������˽�к���,���������˽��ǰ�����򲻱�ʹ����Ԫ����
//��Ԫ�����������ص������ 
//= () [] ->


class MyClass
{
public:

	int a;
	int b;
public:
	MyClass(int x, int y) :a(x), b(y)
	{
		cout << "���󱻴���" << endl;	
	}

	void Show()
	{

		cout << "a=" << this->a << '\t';
		cout << "b=" << this->b << endl; 
	}

	//��ֵ������
	MyClass *operator =(MyClass const &myclass)
	{
		this->a = myclass.a;
		this->b = myclass.b;
		this->Show();
		return this;
	}

	//+=����

	MyClass *operator +=(int len)
	{
		this->a += len;
		this->b += len;
		this->Show();
		return this;
	}



	bool operator <(MyClass &myclass)
	{
		return (this->a <*&this->b) < (myclass.b*myclass.a);

	}


};


template<class T>
void Showall(	T *w)
{
	w->Show();

}


void main()
{


	MyClass myclass1(10, 20),myclass2(40,50) ;

	//myclass1 = myclass2;
	//myclass1 += 10;

	Showall(&myclass1);

	cout << (myclass1 < myclass2 )<< endl;
	system("pause");


}