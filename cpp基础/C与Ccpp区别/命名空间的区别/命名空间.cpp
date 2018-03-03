#include<stdlib.h>
#include<iostream>//输入输出流



int a(100);

//全局变量在c++中有严格的限制
//extern int  a;//使用另一文件中的全局变量

void main()
{


	int a (2);
	std::cout << a;
	std::cout << std::endl;

	//::　域预算符
	std::cout <<::a ;//将全局视为一个域
	std::cout << std::endl;

	system("pause");

}