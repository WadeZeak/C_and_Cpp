#include<iostream>
#include<map>
#include<string>


using namespace std;

void main32()
{

	multimap<string, string>mymap;

	//pair һ����ģ�� ���ڴ洢�ڵ������
	mymap.insert(pair<string, string>("China", "123f"));
	mymap.insert(pair<string, string>("China2", "12fh3"));
	mymap.insert(pair<string, string>("China", "12fdh3"));
	mymap.insert(pair<string, string>("China", "12dh3"));
	mymap.insert(pair<string, string>("China5", "12dh3"));

	auto ibeg = mymap.begin();
	auto iend = mymap.end();

	while (ibeg!=iend)
	{
		cout << (*ibeg).first << '\t';
		cout << (*ibeg).second << endl;
		ibeg++;
	}

	cout << "\n\n---------------------------------------------------------------------------\n\n" << endl;

	auto pfind = mymap.find("China2");
	cout << (*pfind).first << '\t';
	cout << (*pfind).second << endl;

	cout << "\n\n---------------------------------------------------------------------------\n\n" << endl;


	auto allfind = mymap.equal_range("China");//�����ڵ�ѹؼ�����ͬ������ȫ������


	//first��㣬second���������Ľڵ����һ���սڵ㣬���ǵ�����
	for (auto ifind = allfind.first; ifind != allfind.second;ifind++ )
	{
		cout << (*ifind).first << '\t';
		cout << (*ifind).second << endl;

	}



	cin.get();
}