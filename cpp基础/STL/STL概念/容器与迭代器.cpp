#include<iostream>
#include<set>
#include<stdio.h>
#include<list>
#include<vector>
#include <functional>
#include <algorithm>


using namespace std;

void main2()
{

	multiset<int>mymuset;
	mymuset.insert(10);
	mymuset.insert(11);
	mymuset.insert(12);
	mymuset.insert(13);
	mymuset.insert(20);
	mymuset.insert(15);
	mymuset.insert(11);
	mymuset.insert(17);


	auto ibeg = mymuset.begin();
	auto iend = mymuset.end();

	while (ibeg!=iend)
	{
		cout << *ibeg << endl;
		printf("%p,%p\n", ibeg, ibeg._Ptr);//ibeg iend ������������ָ��
		ibeg++;
	}


	cin.get();
}


void main3()
{
	list<int>mylist;

	mylist.push_back(10);
	mylist.push_back(15);
	mylist.push_back(56);
	mylist.push_back(25);
	mylist.push_back(16);
	mylist.push_back(17);

	auto ibeg = mylist.begin();
	auto iend = mylist.end();

	while (ibeg != iend)
	{
		cout << *ibeg << endl;
		printf("%p,%p\n", ibeg, ibeg._Ptr);//ibeg iend ������������ָ��
		ibeg++;
	}

	cin.get();


}


void main5()
{

	list<int> mylist;

	mylist.push_back(1);
	mylist.push_back(2);
	mylist.push_back(3);
	mylist.push_back(4);
	//mylist[1];
	auto ibegin = mylist.begin();//ָ�룬ָ��һ�����������������洢��λ��
	auto iend = mylist.end();
	//list�õ��������б���
	for (; ibegin != iend; ibegin++)
	{
		cout << *ibegin << endl;
		printf("%p,%p\n", ibegin._Ptr, ibegin);//����
	}

	cin.get();
}


bool less3(int x)
{

	return x<3;

}



void main()
{

	vector<int> myvector;
	myvector.push_back(12);
	myvector.push_back(55);
	myvector.push_back(16);
	myvector.push_back(1);
	myvector.push_back(18);

	using namespace std;

	auto ib = myvector.begin();
	auto ie = myvector.end();
	for (; ib != ie; ib++)
	{
		std::cout << *ib << std::endl;

	}

	cout << "\n\n-----------------------------------------------------------------\n\n" ;

	//�º�������ʵ��һ�����㷨����
	//�º���
	//auto ifind = find_if(myvector.begin(), myvector.end(), bind1st(greater<int>(), 19));

	// bind1st(greater<int>(), 3)
	//bind1st��һ������
	//greater<int>()  ����ģ�� �ҳ���ָ������С�ĵ�һ����

	auto ifind = find_if(myvector.begin(), myvector.end(), less3);

	cout << *ifind << endl;

	cin.get();
}