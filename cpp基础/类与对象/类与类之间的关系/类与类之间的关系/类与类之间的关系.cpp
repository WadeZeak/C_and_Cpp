#include"coder.h"
#include<iostream>
#include"cppcoder.h"
#include"javacoder.h"
#include"ccoder.h"

using namespace std;

//���ۺ��ּ̳У���������ڲ�����������ʸ���ĳ�Ա

void main4()
{

	javacoder *pjava = new javacoder;
//	pjava->num = 20;
	

	system("pause");

}






void main()
{
	cppcoder *pcppcode = new cppcoder;

	//pcppcode->num = 10;//���м̳�,�������ⲿ�޷����ʸ���Ĺ��г�Ա

	

	system("pause");
}



void main2()
{

	//����������ͬһ����ַ���������������
	coder *pcode = new cppcoder;//����ʹ�ø����ָ�봴������Ķ���	����ָ���������ָ��ĵ�ַ



	pcode->Coding();//����coder�е�Coding()����


	//δ���ù���
	cppcoder  *pcppcode = reinterpret_cast<cppcoder *>(pcode);//reinterpret_cast ָ��ת��
	pcppcode->Coding();

	cout << typeid(pcode).name() << endl;
	cout << typeid(pcppcode).name() << endl;

	system("pause");
}


void main1()
{
	//������Ҫ��������,���Ժ󴴽���ɾ��
	cppcoder *pcppcode = new cppcoder;//���캯������˳�� ����-->����

	pcppcode->GirFriend();
	pcppcode->UI();

	
	pcppcode->Coding();//�����еĺ��������˸����е�Coding ����
	
	//ÿһ�����඼��Ĭ������һ������Ķ���
	//���ø���ͬ�������ķ���
	pcppcode->coder::Coding();



	//�����ֹ���ø����˽�г�Ա

//	pcppcode->CodePrivate();
	delete pcppcode;//����˳��    ����-->����


	system("pause");
}