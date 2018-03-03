#include<stdlib.h>
#include<iostream>
#include<array>
#include<vector>//C++标准库
#include<string>

//using namespace std;

using std::array;//array  静态数组,在栈上
using std::vector;//vector 动态数组,在堆上

//使用C++风格的数组不用管理内存
//使用array,要注意栈溢出
//array适用于任何类型

//vevtor的本质是relloc

using std::string;

using std::cin;
using std::cout;
using std::endl;


void main1()
{
	//C++新数组优点
	//可以突破栈的限制
	

	array<int, 10>myint = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	//array<int, 1024 * 256>myint1;// Stack overflow
		//array  静态数组,栈上
	//array<double, 1024 * 1024>mydb;// Stack overflow

	//vector 动态数组,在堆上
	vector<double>myvector;
	for (int i = 0; i < 1024*1024; i++)
	{
		myvector.push_back(i);	
	}



	cin.get();
}


void main2()
{
	array<int, 5>myint1 = { 1, 2, 3, 4, 5 };//不能变长
	array<int, 5>myint2 = {11,22,33,44,55};
	array<int, 5>myint3 = { 111, 222, 333, 444, 555 };

	//array<array<int, 5>, 3>myint = {myint1,myint2,myint3};//二维数组 myint[3][5]

//	array<array<array<int, 5>, 4>, 3>myint4;//三维数组
	array<array<int, 5>, 3>myint = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14 };

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << myint[i][j]<<'\t';
		}
		cout << endl;
	}

	cin.get();
}




void main3()
{
	//vector 可变长数组

	vector<string>str1;//动态的字符串数组
	str1.push_back("notepad");
	str1.push_back("mspaint");
	str1.push_back("calc");
	str1.push_back("tasklist");
	str1.push_back("ipconfig");
	
	str1.pop_back();//弹出(删除)最新加入的一个
	//str1.clear();//清空,可以实现重复利用


	//使用下标进行迭代
	for (int i = 0; i <static_cast<int>( str1.size()); i++)
	{
		system(str1[i].c_str());
	}

	cin.get();
}


void main5()
{
	vector<string>str1;//动态的字符串数组
	str1.push_back("notepad");
	str1.push_back("mspaint");
	str1.push_back("calc");
	str1.push_back("tasklist");
	str1.push_back("ipconfig");

	//迭代器
	vector<string>::iterator ibegin, iend;//迭代器的指针
	ibegin = str1.begin();//开始
	iend = str1.end();//结束

	while (ibegin!=iend)//线性
	{
		string tempstr = *ibegin;//获取指针指向的数据
		system(tempstr.c_str());

		ibegin++;
	}

	cin.get();

}

//迭代器可以实现不管哪种数据结构，使用一套方法
void main6()
{
	array<int, 10>myint = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	//正向迭代器
	array<int,10>::iterator ibegin, iend;//需要指定大小

	ibegin = myint.begin();
	iend = myint.end();

	while (ibegin!=iend)
	{
		cout << *ibegin << endl;
		ibegin++;
	}

	array<int, 10>::reverse_iterator rbegin, rend;//反向迭代器    

	rbegin = myint.rbegin();//本质是指针
	rend = myint.rend();

	//反向输出
	while (rbegin!=rend)
	{

		cout << *rbegin << endl;
		rbegin++;//注意 不是rbegin--
	}


	cin.get();
}


void main()
{
	vector<string>str1;//动态的字符串数组
	str1.push_back("notepad");
	str1.push_back("mspaint");
	str1.push_back("calc");
	str1.push_back("tasklist");
	str1.push_back("ipconfig");

	vector<string>::reverse_iterator rbegin, rend;
	rbegin = str1.rbegin();
	rend = str1.rend();

//AAA:
//	if (rbegin!=rend)
//	{
//		cout << *rbegin << endl;
//		rbegin++;
//
//		goto AAA;
//	}
//	
//	goto AAA;
//

	//反向迭代器反过来用  实现正序输出
	while (rbegin!=rend)//rend 不指向结束的数据,而是指向结尾的下一个
	{
		rend--;
	cout << *rend << endl;
		
	}

	cin.get();
}