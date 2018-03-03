#include<iostream>

using namespace std;


//rtti ʵʱ���ͼ��
// ������typeid dynamic_cast
//dynamic_cast ���Ͳ�ƥ��ת��ʧ�ܣ�����Ϊ��,��֤���Ͱ�ȫ

//���麯��  ͨ���麯���� ��λ��������
class AAA
{
public:
	int num=1;
	static int data;

	virtual void Run()
	{

		cout << "AAA_Run" << endl;

	}

};


int AAA::data = 1;


class BBB:public AAA
{
public:
	int num=2;
	static int data;


	 void Run()
	{

		cout << "BBB_Run" << endl;

	}

	 void test()
	 {
		 cout << num << endl;
		 cout << "BBB_test" << endl;
	 }
};


int BBB::data = 2;


void main()
{

	AAA aaa;
	BBB bbb;
	AAA *pa1 = &aaa;
	AAA *pa2 = &bbb;
	BBB *pb(nullptr);

	//static_cast ֱ�Ӹ���ַ ����ȫ ���麯���޹�
	//pb = static_cast<BBB *>(pa1);//��ֵ�ɹ�
	//pb = static_cast<BBB *>(pa2);

	pb = reinterpret_cast<BBB *>(pa1);//ָ��ֹ֮���ת��
	//���ڴ�û�ж���,��������


	cout << pb << endl;
	pb->test();

	cin.get();
}



void main3()
{
	AAA aaa;
	BBB bbb;
	AAA *pa1 = &aaa;
	AAA *pa2 = &bbb;
	BBB *pb(nullptr);
	//pb->test();//��Ŀ�ָ�������������û�з��ʳ�Ա�����ĺ���
	pb = dynamic_cast<BBB *>(pa2);
	//pb = dynamic_cast<BBB *>(pa1);//dynamic_castת��ʧ��,Ϊ�� 00000000 ;ת���ɹ�,��ȡ��ַ
	//dynamic_cast ʵ��ת��ʱ,���б������麯��,�����麯����ת��,������ת��

	cout << pb << endl;
	pb->test();




	cin.get();

}




void main2()
{

	//AAA *pa2 = new AAA;
	//AAA *pa1 = new BBB;

	AAA aaa;
	BBB bbb;
	AAA *pa1 = &aaa;
	AAA *pa2 = &bbb;


	cout << typeid(pa1).name() <<"\t"<<typeid(pa2).name()<< endl;
	cout << (typeid(pa1).name()== typeid(pa2).name()) << endl;

	cout << typeid(*pa1).name() << "\t" << typeid(*pa2).name() << endl;
	cout << (typeid(*pa1).name() == typeid(*pa2).name()) << endl;


	//��ʾ��� 
	//û���麯��
	//class AAA *     class AAA *
	//class AAA       class AAA

	//���麯��  ͨ���麯���� ��λ��������
	//class AAA *     class AAA *
	//class AAA       class BBB


	cin.get();

}



void main1()
{



	BBB bbb;
	bbb.num = 10;//��������
	bbb.AAA::num = 20;
	cout << bbb.num << "\t" << bbb.AAA::num << endl;

	cout << bbb.data << "\t" << bbb.AAA::data << endl;
	cout << &bbb.data << "\t" << &bbb.AAA::data << endl;



	cin.get();


}