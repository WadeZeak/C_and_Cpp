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


using namespace MyData;//using namespace 必须放在命名空间定义的下方
using namespace YourData;
//using 如果变量重名，会出现不明确错误，喜是需要加上命名空间修饰符

void go()
{
	//命名空间如果在块语句内部，那么作用域就在定义开始到块语句结束
	std::cout << YourData::a << std:: endl;
}





//using namespace MyData;//作用范围从using namespace开始到程序末尾,不能跨文件使用

void main5424()
{
	go();

	system("pause");
}