#include<iostream>
#include<memory>//����ָ����Ҫ��ͷ�ļ�

using namespace std;


//����  ��ʶ��

//�ṹ��ռ��һƬ�������ڴ�ռ�

struct LStruct
{
	int num=20;
};

struct MyStruct //MyStruct ��ʶ��  Ҳ�ǽṹ���������
{
	int num = 10;//cpp���Ը��ṹ���еı�������Ĭ�ϵ�ֵ������C�����в�����
	double db;
//	MyStruct myself;//�ṹ���ڲ����ܶ����Լ� ������ݹ�ṹ
	MyStruct *phead;
	MyStruct *pnext;//�ṹ���ڲ����Զ���ָ�������ṹ���ָ��
	LStruct LS1;
	void Boss()
	{
		cout << "Boss" << endl;

	};//cpp�ṹ����԰�������
};

struct MyStructA //MyStruct ��ʶ��  Ҳ�ǽṹ���������
{
	int num = 10;//cpp���Ը��ṹ���еı�������Ĭ�ϵ�ֵ������C�����в�����
	double db;
	//	MyStruct myself;//�ṹ���ڲ����ܶ����Լ� ������ݹ�ṹ
	MyStruct *phead;
	MyStruct *pnext;//�ṹ���ڲ����Զ���ָ�������ṹ���ָ��
	LStruct LS1;
	void Boss()
	{
		cout << "Boss" << endl;

	};//cpp�ṹ����԰�������
};


//�����ṹ��
struct
{
	int num;
	int db;//�����ṹ�岻��������Ĭ�ϵ�ֵ
	MyStruct S;//�ṹ��ĳ�Ա����ʹ��һ���ṹ��
}SX,SY;

void main1()
{

	MyStruct S1;
	cout << S1.num << endl;
	cout << SX.S.num << endl;//�ṹ��Ƕ��

	//cout <<  char(1) << endl;
	cin.get();

}


void main()
{
	MyStruct S1;//��ջ�� ��ջ�Ϲ���
	MyStruct *pnew=new MyStruct;//�ڶ��� ��Ҫ�ֶ�����	
	std::unique_ptr<MyStruct>p(new MyStruct[5]);//ֻ��ָ��

	cout << pnew->LS1.num << endl;//�ṹ��ָ�� ->  �ṹ��ʵ�� .
	cout << (*pnew).LS1.num << endl;

	//ֻ��������ͬ�������帳ֵ
	//C++���ṹ���ʼ��
	MyStruct S2(S1);
	MyStruct *pnew2(new MyStruct);

	MyStructA SA1;
//	MyStruct S3(SA1);//C++ ǿ�������� �ϸ��������Ƿ�ƥ��

 	cin.get();
}