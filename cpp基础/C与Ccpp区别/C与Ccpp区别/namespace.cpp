#include"iostream"
#include<stdlib.h>



//命名空间 加以区分重命名
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

	//std::cout输出,<<输出符    根据类型的泛型转换为字符串输出 
	//std::endl  换行,结束一个输出


	std::cout << "Hello World"<<std::endl;

	//命名空间  变量
	std::cout << "main_a=" << a<<std::endl;
	std::cout << "MySpace_a=" << MySpace::a << std::endl;
	std::cout << "MySpaceA_a=" << MySpaceA::a << std::endl;



	//命名空间  函数
	MySpace::print();
	MySpaceA::print();



	system("pause");
}