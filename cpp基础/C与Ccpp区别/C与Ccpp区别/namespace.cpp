#include"iostream"
#include<stdlib.h>



//�����ռ� ��������������
namespace MySpace
{
	int a(20);
	void print()
	{
		std::cout<<"Hello,TianChao"<<std::endl;

	}
}

namespace MySpaceA
{
	int a(30);
	void print()
	{
		std::cout << "Hello,China" << std::endl;

	}
}

void main673()
{

	int a(10);

	//std::cout���,<<�����    �������͵ķ���ת��Ϊ�ַ������ 
	//std::endl  ����,����һ�����


	std::cout << "Hello World"<<std::endl;

	//�����ռ�  ����
	std::cout << "main_a=" << a<<std::endl;
	std::cout << "MySpace_a=" << MySpace::a << std::endl;
	std::cout << "MySpaceA_a=" << MySpaceA::a << std::endl;



	//�����ռ�  ����
	MySpace::print();
	MySpaceA::print();



	system("pause");
}