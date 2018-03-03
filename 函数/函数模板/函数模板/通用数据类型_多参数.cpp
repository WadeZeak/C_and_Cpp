#include<iostream>
#include<stdlib.h>
#include<cstdarg>//处理通用数据类型


using namespace std;

//函数模板注意事项
//参数至少有一个是函数模板类型


template<typename NT>//模板需要实例化
NT Sum(int count,NT data1,...)//可变参数
{

	va_list arg_ptr;//参数列表的指针
	va_start(arg_ptr, count);//限定从count开始,之后的所有参数都保存在参数列表中
	NT sum(0);

	for (int i = 0; i < count; i++)
	{
		sum += va_arg(arg_ptr, NT);////按照类型依次解析参数
	}
	va_end(arg_ptr);//释放
	return sum;
}


void main2()
{

	cout << "int_Sum=" << Sum(5, 1, 2, 3, 4, 5) << endl;
	cout << "int_Sum=" << Sum(5, 1, 2, 3, 4, 5,6) << endl;
	cout << "int_Sum=" << Sum(5, 1, 2, 3, 4, 5,7,8) << endl;



	cout << "int_Sum=" << Sum(5 ,1.5, 2.8, 3.9, 4.4, 5.7) << endl;
	cout << "int_Sum=" << Sum(6, 1.5, 2.8, 3.9, 4.4, 5.7,10.2) << endl;



	system("pause");
}