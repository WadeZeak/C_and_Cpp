#include<iostream>
#include<set>
#include<string>


using namespace std;


struct strless
{

	bool  operator () (const char* str1,const char * str2)
	{
		return strcmp(str1, str2) < 0 ;
	}

};


//红黑树处理数字非常少,大多用于处理类对象与字符串

void main1()
{

//	set<char *, strless>myset(strless());//默认构造
	
	//pair<set<char *>::iterator, bool>p;//pair 符合集合,创建一个空的pair对象，它的两个元素类型分别为T1、T2，采用默认值初始化

	//set 红黑树


	const char *str[] = { "abc", "calc", "mspaint", "tasklist","notepad","shut" };

	//按顺序进行排列
	set<const char *, strless>myset(str,str+6,strless());//构造





	//插入
	myset.insert("123456");
	myset.insert("monkey");





	auto ibeg = myset.begin();
	auto iend = myset.end();
	while (ibeg!=iend)
	{

		cout << *ibeg << endl;
		ibeg++;

	}

	cout << "\n\n-------------------------------------------------------\n\n";

	//反向迭代
	auto rbeg = myset.rbegin();
	auto rend = myset.rend();
	while (rbeg != rend)
	{

		cout << *rbeg << endl;
		rbeg++;

	}


	cout << "\n\n-------------------------------------------------------\n\n";

	set<const char *, strless>::iterator pfind = myset.find("calc");//指针 查找效率 log2(n)
	cout << *pfind << endl;



	cin.get();



}






void main2()
{


	const char *str[] = { "abc", "calc", "mspaint", "tasklist", "notepad", "shut" };
	set<const char *, strless>myset(str, str + 6, strless());//构造
	myset.insert("123456");
	myset.insert("monkey");

	//pair起到获取插入返回值的作用 第一个参数标识类型 第二个表示数据比大小的方式
	pair<set<const char *>::iterator, bool>mypair=myset.insert("9876");

	cout << *(mypair.first) << '\t' << mypair.second << endl;


	cin.get();


}


