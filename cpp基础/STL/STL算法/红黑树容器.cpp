#include<set>//集合
#include<iostream>

using namespace std;


void main()
{
	//不可以有重复项
	set<int>myset;

	myset.insert(10);//自动排序
	myset.insert(1);
	myset.insert(2);
	myset.insert(3);
	myset.insert(4);
	myset.insert(5);
	myset.insert(6);
	myset.insert(7);
	myset.insert(7);//重复项会被舍弃

	//使用二叉树中的二分查找法进行查找
	auto findpos = myset.find(10);
	cout << "find->" << *findpos << endl;



	auto ibegin = myset.begin();
	auto iend = myset.end();

	while (ibegin!=iend)
	{

		cout << *ibegin << endl;
		ibegin++;
	}

	cin.get();


}