#include<stdlib.h>
#include<iostream>//���������



int a(100);

//ȫ�ֱ�����c++�����ϸ������
//extern int  a;//ʹ����һ�ļ��е�ȫ�ֱ���

void main()
{


	int a (2);
	std::cout << a;
	std::cout << std::endl;

	//::����Ԥ���
	std::cout <<::a ;//��ȫ����Ϊһ����
	std::cout << std::endl;

	system("pause");

}