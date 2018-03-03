#include<stdlib.h>
#include<iostream>

using namespace std;

//ȫ�ֵ�new��delete���������ڴ���ͷ������
//�ֲ���new,delete��ʶĳ������ڴ�ķ������ͷ�
//





//ȫ�ֵ�new
void * operator new(size_t size)
{
	cout << "ȫ��mew�����ڴ�" << endl;

	if (size==0)
	{
		return 0;
	}
	void *p = malloc(size);
	cout << "�����ڴ����׵�ַ:"<<p << endl;
	return p;

}

//ȫ���delete
void operator delete(void *p)
{

	cout << "ȫ���ͷ��ڴ�" << p << endl;
	free(p);
}


void * operator new[](size_t size)//��������
{
	cout << "��������" << endl;

	return operator new(size);//ÿ�����󰤸������Ѿ����غõ�new
}



void operator delete[](void *p)
{
	cout << "����ɾ��" << endl;

	return operator delete(p);//ÿ�����󰤸������Ѿ����غõ�delete

}



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
		return ptemp;

	}


		static void  operator delete(void *p)
	{
		count--;
		cout << "��������" << endl;
		::delete p;
	}



	static void * operator new[](size_t size)//�ֲ�new ��ʼ����������
	{
		count++;
		cout << "�������鱻����" << endl;	//���ȷ����ڴ棬���ڴ��������ù��캯��
		return  operator new(size);
		//MyClass *ptemp = ::new MyClass;//::new ȫ�ֵ�new
		//return ptemp;

	}


		static void  operator delete[](void *p)
	{
		count--;
		cout << "�������鱻����" << endl;
		return delete(p);
	}




};


int MyClass::count = 0;




void main1()
{

	int *p = new int(8);
	delete p;
	system("pause");
}


void main2()
{

	MyClass *p = new MyClass;//�ֲ���new-->ȫ�ֵ�new-->malloc-->���캯��

	delete p;//��������-->�ֲ�delete-->ȫ�ֵ�delete-->free

	system("pause");
}

void  main()
{
	/*int *p = new int[4];
	delete[]p;*/

	MyClass *p = new MyClass[4];//�ֲ���new[]-->�ֲ���new-->ȫ�ֵ�new-->malloc-->���캯��
	delete[]p;//��������-->�ֲ���delete[]-->�ֲ�delete-->ȫ�ֵ�delete-->free

	system("pause");
}