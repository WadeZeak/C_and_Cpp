#include<stdlib.h>
#include<iostream>


using namespace std;


//���������Ҫ�ؽ�
//ÿһ������һ��������ָ�� this


//���캯���������������ڴ�����

//����ռ1�ֽڣ���ʾ�Լ�����

//������Ĵ�Сʱ���������ڴ����������ݴ�С

//û�з����ڴ棬����������û������

class MyClass
{
public:
	static int count;//����//�ڴ�����

	int *p;
	int len;
public:

	MyClass()//����ʱ��ʼ��
	{
		cout << "MyClass ������" << endl;
	}


	~MyClass()//ɾ����ʱ���ͷ��ڴ�
	{	
		cout << "MyClass ������" << endl;

	}


	static void * operator new(size_t size)//����,ʵ�ֽٳ�
	{
		count++;
		cout << "���󱻴���" << endl;	//���ȷ����ڴ棬���ڴ��������ù��캯��

		MyClass *ptemp = ::new MyClass;//::new ȫ�ֵ�new
	return NULL;
		
	}


	static void  operator delete(void *p)
	{

		count--;
		cout << "��������" << endl;
		::delete p;
	}
};


int MyClass::count = 0;




//���ڲ���newû����ɷ����ڴ�Ĺ�����������ͨ��ȫ��new�ĵ�·�����˽ٳ�

void main()
{
	MyClass *obj1 = new MyClass;//���ȵ��þֲ���new֮�����ȫ�ֵ�new

	MyClass *obj2 = new MyClass;//�ֲ���new-->���캯��-->(��ʼ��ʱ����)���캯��
	MyClass *obj3 = new MyClass;


	cout << MyClass::count << endl;


	delete obj1; 

	cout << MyClass::count << endl;
	cout <<"MyClass_Size="<<sizeof(MyClass) << endl;





	system("pause");
}

