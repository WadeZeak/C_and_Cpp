#include<iostream>
#include<stdlib.h>

using namespace std;


//const Լ����������ʣ�ֻ�ܶ�������д


//c++�е�const ����Ȼ����ʵ��ǿת��ȥ��const���ԣ��������޷�ʵ���޸�



void main10()
{
const	int num = 10;
	cout << num << endl;
	int a[num];//C++������˲���,����ʹ��const����ĳ�����ʼ��
	int i = 0;

	for (auto  data : a)//����
	{
		data = i++;
		cout << data << "\t";
	}

	system("pause");
}





void main2()
{
	const int num = 10;
	//int *p = &num;//���� ����ʼ����: �޷��ӡ�const int *��ת��Ϊ��int *��
	cout << num << endl;
	int *p = (int *)&num;//ǿת a C���Ե�ǿר��ʽ  
	*p = 50;//C++��ִ��ʱ�������˴���

	//û�гɹ��޸�const����ĳ�����ֵ


	
	cout << num << endl;

	system("pause");
}


void main3()
{

	const int num = 10;
	cout << num << endl;

	int *p = const_cast<int *>(&num);//ǿ��ȥ��const����

	*p = 50;//��ֵʧ��,���Ա���ɹ�,���ǽ�ִֹ��
	cout << num << endl;

	system("pause");
}



void main5()
{
	int a = 10;
	const int b = 20;

	/*int const *p1=&a ;//C++�����޶�Ȩ��,�����ϸ�������
	int const *p2=&b;*/ //p1,p2��ָ������ָ�룬ָ������ݲ��ܽ��и�ֵ����
	//��ֹ�Գ�����ֵ
	//*p1 = 3;
	//*p2 = 4;

	
	 //int * const p1 = &a;//�����ʼ�� ////ָ������ĳ���ָ��
	// int * const p2 = &b;//���Ͳ�ƥ�� ����	����ʼ����: �޷��ӡ�const int *��ת��Ϊ��int *const ��

	//��ֹ�޸�ָ���ָ��
	//p1 = &b;
	//p2 = &a;



	const int * const p1 = &a;//C++�����޶�Ȩ��,�����ϸ�������
	const int * const p2 = &b;

}


//C++Ȩ��������ǿ����

//Ϊ��Ȩ�ޱ�̣�ֻ������д��Ȩ�� int const *p  ���ǿ��Ըı�ָ���ָ��c++ǿ���Ϳɺ��� ���ڲ�ѯ
//����ɶ���дȨ�ޣ�int  * const p ,���ǲ��ɸı�ָ���ָ��   //��ʱconst int ǿ���ͷ�������
//const int * const p   �ɶ�����д��Ҳ���ɱ䶯ָ���ָ��    





void main6()
{

	int const num = 10;
	int const &rnum = num;//����


	//�������ݸ�ָ������ָ����߳����ã���������ԣ����ڴ��ж�ȡ

	cout << "&num="<<&num << endl;
	cout << "&rnum=" << &rnum << endl;//��ַ��ͬ


	system("pause");
}




//����֮��������ã��������ݸ������ã�����ȥ��const����

int select(const int &rnum)
{

//	rnum = rnum - 0.2;//��ִֹ��

	int *p = const_cast<int *>(&rnum);//ȥ��const���Բ�ǿ��ת��
	*p = *p - 0.2;//ʵ�����ڴ����޸�
	
	return rnum;//���ڴ��ж�ȡ,����ʱ��ǿ��ת��Ϊ int

}


void main()
{

	int const num1(100);
	int num2(200);

	cout << select(num2) << endl;


	system("pause");
}




