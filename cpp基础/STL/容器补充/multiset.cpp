#include<iostream>
#include<set>

using namespace std;

void main1()
{

	multiset<int>myset;
	myset.insert(100);
	myset.insert(101);
	myset.insert(102);
	myset.insert(103);


	//auto pfind = myset.find(101);
	//cout << *pfind << endl;


	//找到红黑数的链表节点
	auto allfind = myset.equal_range(100);

	//first 是链表的头结点  second是最后一个节点 遍历所有的元素
	for (auto it= allfind.first;it!=allfind.second;it++ )
	{
		cout << *it << endl;
	}



	cin.get();


}