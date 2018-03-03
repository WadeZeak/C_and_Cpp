#include"iostream"
#include<stdlib.h>//输入输出流

namespace Runnamespace
{
	int a(10);
	char *str("GOGOGOGOGO");
	void print()
	{
		std::cout << "Hello World!!!" << std::endl;
	}

	//嵌套命名空间
	namespace RunA
	{
		int a(90);
	}

}

//命名空间扩充
namespace  Runnamespace
{
	int x(200);
	//int a(500); 多次初始化
}


namespace Run = Runnamespace;//简化命名空间的名称



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