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


	//�ҵ������������ڵ�
	auto allfind = myset.equal_range(100);

	//first �������ͷ���  second�����һ���ڵ� �������е�Ԫ��
	for (auto it= allfind.first;it!=allfind.second;it++ )
	{
		cout << *it << endl;
	}



	cin.get();


}