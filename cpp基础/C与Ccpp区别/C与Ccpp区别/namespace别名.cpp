#include"iostream"
#include<stdlib.h>//���������

namespace Runnamespace
{
	int a(10);
	char *str("GOGOGOGOGO");
	void print()
	{
		std::cout << "Hello World!!!" << std::endl;
	}

	//Ƕ�������ռ�
	namespace RunA
	{
		int a(90);
	}

}

//�����ռ�����
namespace  Runnamespace
{
	int x(200);
	//int a(500); ��γ�ʼ��
}


namespace Run = Runnamespace;//�������ռ������



void mainfbdzb()
{

	std::cout << Run::a << std::endl;
	std::cout << Run::str << std::endl;
	Run::print();

	std::cout << Run::RunA::a << std::endl;
	std::cout << Run::x << std::endl;
	//std::cout << Runnamespace::a << std::endl;

	system("pause");
}