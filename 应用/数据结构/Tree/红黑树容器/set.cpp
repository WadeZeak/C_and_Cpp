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


//������������ַǳ���,������ڴ�����������ַ���

void main1()
{

//	set<char *, strless>myset(strless());//Ĭ�Ϲ���
	
	//pair<set<char *>::iterator, bool>p;//pair ���ϼ���,����һ���յ�pair������������Ԫ�����ͷֱ�ΪT1��T2������Ĭ��ֵ��ʼ��

	//set �����


	const char *str[] = { "abc", "calc", "mspaint", "tasklist","notepad","shut" };

	//��˳���������
	set<const char *, strless>myset(str,str+6,strless());//����





	//����
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

	//�������
	auto rbeg = myset.rbegin();
	auto rend = myset.rend();
	while (rbeg != rend)
	{

		cout << *rbeg << endl;
		rbeg++;

	}


	cout << "\n\n-------------------------------------------------------\n\n";

	set<const char *, strless>::iterator pfind = myset.find("calc");//ָ�� ����Ч�� log2(n)
	cout << *pfind << endl;



	cin.get();



}






void main2()
{


	const char *str[] = { "abc", "calc", "mspaint", "tasklist", "notepad", "shut" };
	set<const char *, strless>myset(str, str + 6, strless());//����
	myset.insert("123456");
	myset.insert("monkey");

	//pair�𵽻�ȡ���뷵��ֵ������ ��һ��������ʶ���� �ڶ�����ʾ���ݱȴ�С�ķ�ʽ
	pair<set<const char *>::iterator, bool>mypair=myset.insert("9876");

	cout << *(mypair.first) << '\t' << mypair.second << endl;


	cin.get();


}


