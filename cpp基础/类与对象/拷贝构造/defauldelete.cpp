#include<iostream>

using namespace std;

//delete ���Խ���Ĭ�������ɵĺ���,���ù������ʵ���޷�ʵ����
//��ֹ��������,���Խ�ֹ���˵Ŀ���
//delfault Ĭ�ϴ���

class MyClassB
{
public:
	// ��MyClassB::MyClassB(void)�� : ����������ɾ���ĺ���	
	//	MyClassB() = delete;//delete������,Ĭ��ɾ�����캯�� ,ʵ��һ���޷�ʵ��������

	MyClassB() = default;//Ĭ�ϴ��ڵĹ��캯��
	//	MyClassB(const MyClassB &) = delete;//�������캯��  Ĭ��ɾ�� &����
	MyClassB(const MyClassB &) = default;	//Ĭ�ϴ��ڵĿ������캯��
	~MyClassB();


};




MyClassB::~MyClassB()
{


}







void main2()
{
	MyClassB myclassB;

	MyClassB myclassB1(myclassB);

	MyClassB myclassB2 = myclassB;//��������أ������˸�ֵ��=���������ͽ�������
}