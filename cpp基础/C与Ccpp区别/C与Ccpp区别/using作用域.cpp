#include<stdlib.h>
#include<iostream>


namespace MyData
{
	int a(6);

}
namespace YourData
{
	int a(6);

}


using namespace MyData;//using namespace ������������ռ䶨����·�
using namespace YourData;
//using �����������������ֲ���ȷ����ϲ����Ҫ���������ռ����η�

void go()
{
	//�����ռ�����ڿ�����ڲ�����ô��������ڶ��忪ʼ����������
	std::cout << YourData::a << std:: endl;
}





//using namespace MyData;//���÷�Χ��using namespace��ʼ������ĩβ,���ܿ��ļ�ʹ��

void main5424()
{
	go();

	system("pause");
}