#include<stdlib.h>
#include<iostream>

using namespace std;



//自动变量，自动获取类型，输出，泛型
//自动变量，可以实现自动循环一维数组
//自动循环的时候，对应的必须是常量




void main1()
{

	auto num = 10;//自动变量,自动匹配类型
	auto numA = 15/3.5;
	

	cout << num << endl;
	cout << numA << endl;
	system("pause");
}

void main()
{
	//int num[10] = { 1, 2, 3, 4, 65, 6, 8, 9, 9, 10 };
double num[2][5] = { 10.5, 265.5, 3.4, 4.4, 6.5, 6, 8, 9, 9, 's' };
//num数组名,是一个指针常量

//auto 自动循环 begin  end，必须是一个数组的常量


	//for (auto data :num )//泛型,循环一维数组C++语法
	//{

	//	cout << data<<endl;

	//}

//for (auto data : num)
//{
//	cout << data << endl;
//
//	for (auto i :data)//data是个变量，不满足条件
//	{

//	}
//
//	cout << endl;
//}



for (auto data :num )
{
	cout << data << endl;
	
	for (int i = 0; i < 5;i++)
	{
		cout << *(data+i) << endl;//data是一个行指针变量
	}

	cout << endl;
}





	system("pause");
}

