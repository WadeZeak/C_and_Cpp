#include<stdlib.h>
#include<iostream>


using namespace std;

//�ṹ�����ֱ�Ӹ�ֵ
struct Info
{
	char name[10];
	double db;
	int data;
};

//���еĳ�Ա���ǹ��е������ֱ�Ӹ�ֵ(��ʼ��ʼ��ʱ)����˽�г�Ա������Ҫ�ӿ�
class MyClass
{
public:
	char name[10];
	double db;
	int data;


};



//����ģ�����ʵ��ͨ�ã����Ը��������������ͽ����Ż�

template < typename T >
void Swap(T &a,T &b)//��� ^ ֻ������int����
{
	cout << "ͨ�ú���ģ��" << endl;
	T temp=a;
	a = b;
	b = temp;

}

//���еĺ���ģ��   ģ��Ϊ�գ���ȷ����ֵ����
template<>
void Swap(Info &info1,Info &info2)//ʵ�ֺ���ģ�帲�� ����ͨ������
{

	cout << "���к���ģ��" << endl;
	//���к���ģ���������Լ����������������Ż�
	Info temp = info1;
	info1 = info2;
	info2 = temp;

}





void main1()
{
	int num1 = 10;
	int num2 = 20;

	cout << "num1=" << num1 <<"\t"<<"num2="<<num2<<endl;

	Swap(num1, num2);//ʵ�����ݽ���

	cout << "num1=" << num1 << "\t" << "num2=" << num2 << endl;

	char chr1 = 'x';
	char chr2 = 'z';

	cout << "chr1=" << chr1 << "\t" << "chr2=" << chr2 << endl;

	Swap(chr1, chr2);//ʵ�����ݽ���

	cout << "chr1=" << chr1 << "\t" << "chr2=" << chr2 << endl;
	cin.get();//getchar()
}




void main()
{
	Info info1 = { { "abcd" }, 12.3, 10 };
	Info info2 = { { "hijk" }, 45.6, 20 };

	Swap(info1, info2);//�û�

	cout << "info1" << endl;
	cout << info1.name << endl;
	cout << info1.data << endl;
	cout << info1.db << endl;
	cout << endl;
	cout << "info2" << endl;
	cout << info2.name << endl;
	cout << info2.data << endl;
	cout << info2.db << endl;

	cin.get();//getchar()

}

void main2()
{
	MyClass info1 = { { "abcd" }, 12.3, 10 };
	MyClass info2 = { { "hijk" }, 45.6, 20 };

	Swap(info1, info2);//�û�

	cout << "info1" << endl;
	cout << info1.name << endl;
	cout << info1.data << endl;
	cout << info1.db << endl;
	cout << endl;
	cout << "info2" << endl;
	cout << info2.name << endl;
	cout << info2.data << endl;
	cout << info2.db << endl;

	cin.get();//getchar()

}
