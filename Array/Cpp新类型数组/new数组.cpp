#include<stdlib.h>
#include<iostream>
#include<array>
#include<string>
using namespace std;


void main1()
{

	double db[4] = { 1.1, 2.2, 3.3, 4.4 };
	
	//std::array<数据类型,元素个数>  数组名   
	array<double, 4> newdb = { 10.2, 45.8, 6.4, 8.7 };
	array<double, 4> newdb1 = newdb;//新版本的数组可以赋值,而老版本的不可以
	//for (auto data : db)//泛型
	//{
	//	cout << data << '\t';
	//}

	for (int i = 0; i < 4;i++)
	{
		cout << db[i] << '\t' << newdb[i] <<'\t'<<newdb1[i] << endl;
	}
	system("pause");
}


void main2()
{
	array<string, 5> str = { "calc", "mspaint", "notepad", "ipconfig", "tasklist" };

	for (int i = 0; i < 5; i++)
	{
		cout << str[i] << endl;
		system(str[i].c_str());//c_str()函数返回一个指向正规c字符串的指针,内容和string类的本身对象是一样的,通过string类的c_str()函数能够把string对象转换成c中的字符串的样式;
	}

	system("pause");
}


void main()
{
	string str1 = "task";
	string str2 = "list";
	string str3 = str1 + str2;
	system(str3.c_str());

	system("pause");



}