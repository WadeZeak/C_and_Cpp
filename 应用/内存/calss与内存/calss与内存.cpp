#include<iostream>


using namespace std;


class MyClass
{
public:
	int num;
	double db;
	static int count;//����
	int *p;
	int &myint;//���ڲ������ñ����ʼ��
	const int coint;
	static const int dashu;//ֻ�о�̬��Ա�������������ⲿ��ʼ�� �˴�Ϊ����
public:

	static void go()
	{


	}


	 void  Run()
	{



	}



	//���������ã��������ع��캯����ʼ��
	MyClass(int a, int b) :myint(a), coint(b)//��ʼ��
	{
		//���þ��ǹ��õ�ַ�������¿����ڴ汸�ݻ���
		std::cout << &a << "  " << &b << std::endl;
		std::cout << &myint << "  " << &coint << std::endl;

		//�޸ĳ���
		const int *p = &coint;

		cout << *p << "\t" << &coint << endl;
		int *px = const_cast<int *>(p);//ȥ����������
		*px = 50;
		cout << coint << endl;
	}

};

//���������ã��������ع��캯����ʼ����

int MyClass::count = 0;//��ʼ��
const int MyClass::dashu = 20;//���ⲿ��ʼ��,�����ڴ棬���Ĵ���



void mainkjgnsng()
{

//������ͨ��Ա����
//���� ���� //ջ��
//���� *ָ����=new ���� //����
//����(������̬����)���ڴ�����,�ǹ����
//��ľ�̬��Ա ��̬��


	MyClass myclass(10, 20);


	//��ͨ��Ա����������ָ������
	//void(MyClass::*p)() =&MyClass::Run;//���빲��
	////���е�����������

	////��̬��Ա����,������޹�
	//	void(*px)() = &MyClass::go;

	int const num = 10;//num �ڷ��ű� 10 �ڼĴ������� ��ȡʱֱ���ڼĴ�����ȡ
	//num���ڴ��е�ֵ�����޸�
	int a[num];


	//���еĳ���������C���ԣ���ȡʱ���ڴ����ܶ�ȡ


	//����ⲿ,һ��ʼ�����ʼ��,�ó���ǿ���滻,������ڴ�
	//����ڲ������빹��һ������ܳ�ʼ��,const��C������һ��


	//���ñ�������һ��ָ��,4���ֽڣ����ǲ���Ϊ�գ���ָ�����Ϊ��



	//static const int data = 20;//��̬������
	//���õ�ʱ�򲻶��ڴ棬ֱ�Ӷ�ȡ�������ķ��ű�

	cin.get();


}




void main()
{
	const int *p = &(MyClass::dashu);
	int *px = const_cast<int *>(p);
	
	cout << p << endl;
	cout << px << endl;
//	*px = 456;//��̬���������Է��ʣ����ǲ����޸�

	cout << *p << endl;
	cout << *px << endl;
	cout << MyClass::dashu << endl;

	cin.get();
}










class mywindowW
{

public:
	//���ÿ��Է�����ʼ��
	int  &num;//���ã������ڹ���ĳ�ʼ��,
	//���ý��������������ˣ����������Ǹ���


public:
	mywindowW(int data) :num(data)
	{
		cout << num << endl;
	}


};




void mainddd()
{

	int data = 20;//���ñ����ʼ����������ֵ�����е����ñ����ڹ��캯����ʼ��
	mywindowW  my1(data);
	cout << my1.num; //������������ö��ԣ�����endl���ر����������ʱ������ַ������ַ����������������
	int dataA = 201;
	my1.num = dataA;
	cout << my1.num;//����endl�ر������������ַ������������
	cin.get();

}




void mainxx()
{

	mywindowW my1(4);//���ñ����ʼ����������ֵ�����е����ñ����ڹ��캯����ʼ��
	cout <<my1.num ;
	cout << endl;
	int data = 20;
	my1.num = data;
	cout << my1.num;

	cout << endl;
	int num = 50;
	int &data1 = data;
	data = num;

	cout << data1 << endl;
	cin.get();

}






class myconst
{

public:

	const int num;//����,�����ڹ���ʱ��ʼ��
	int xyz;

public:
	myconst(int data) :num(data)
	{

	}



};





void main474()
{


	int myint = 20;
	myconst myconst1(myint);//���������ʼ��

	//����������ⲿһ����ʼ����ɣ�֮����Ӵ������ķ��ű��Զ����ɣ���������ڴ�

	cout << myconst1.num << endl;

	myconst1.xyz = 10;
	myconst1.xyz = 20;

	cout << myconst1.xyz<<endl;

	//myconst1.num = 20;//�������ܸ�ֵ

	cin. get();




}

