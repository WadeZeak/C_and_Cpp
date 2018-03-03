#include<iostream>
#include<stdlib.h>

using namespace std;

//
//
//auto Get(int num, double db)->decltype(num*db)//指定auto的类型
//{
//
//}


//自动数据类型，根据实际推导出类型
template<class T1,class T2>//根据类型获取类型
auto Get(T1 data, T2 bigdata)->decltype(data*bigdata)//auto的数据类型为data*bigdata结果的类型
{
	return data*bigdata;
}



//出错,函数参数不能使用自动变量
//void Fun(auto num)
//{
//
//
//}






void main()
{

cout<<"typename:"<< typeid(Get(12.0, 'a')).name()<<endl;//打印数据类型
cout << "Get()=" << Get(12.1, 'a') << endl;


	system("pause");
}