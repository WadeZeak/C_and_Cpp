#include<iostream>
#include<stdlib.h>
#include<map>

//多元数组
using namespace std;

//vector 类型一致


void main(void)//void在参数内部意味着参数为空,不写也意味着为空
{
	
	int num = 1;
	double db = 10.9;
	char chr = 'A';
	char *str = "HelloWorld";//常量

	tuple<int, double, char, const char *>mytuple( num, db, chr, str );//初始化
	

			const int num = 3;

		auto data1 = get<0>(mytuple);//泛型
		auto data2 = get<1>(mytuple);
		auto data3 = get<2>(mytuple);
		auto data4 = get<3>(mytuple);

		
		
		cout <<typeid(data1).name() <<'\t'<<data1 << endl;	
		cout << typeid(data2).name() << '\t' << data2 << endl;
		cout << typeid(data3).name() << '\t' << data3 << endl;
		cout << typeid(data4).name() << '\t' << data4 << endl;


	
		decltype(data1) dataA;//获取类型再次创建

	//	mytuple.swap(mytuple);//实现交换数组
	//vector与array都有这种特性
		



	system("pause");
}

//tuple 必须是一个静态数组
//tuple 配合vector与array
//只能用常量方式访问