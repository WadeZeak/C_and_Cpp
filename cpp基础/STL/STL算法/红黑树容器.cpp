#include<set>//����
#include<iostream>

using namespace std;


void main()
{
	//���������ظ���
	set<int>myset;

	myset.insert(10);//�Զ�����
	myset.insert(1);
	myset.insert(2);
	myset.insert(3);
	myset.insert(4);
	myset.insert(5);
	myset.insert(6);
	myset.insert(7);
	myset.insert(7);//�ظ���ᱻ����

	//ʹ�ö������еĶ��ֲ��ҷ����в���
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