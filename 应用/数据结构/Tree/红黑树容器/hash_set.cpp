#include <hash_set>
#include <iostream>
#include<string>


using namespace std;





void mainfhrfj()
{

	hash_set<int>hs;

	hs.insert(10);
	hs.insert(50);
	hs.insert(30);

	auto ibeg = hs.begin();
	auto iend = hs.end();

	while (ibeg!=iend)
	{
		cout << *ibeg << endl;
		ibeg++;

	}

	auto pfind = hs.find(21);

	if (pfind==iend)
	{
		cout << "Not Find" << endl;
	}
	else
	{

		cout << *pfind << endl;
	}

	cin.get();
}


struct strd
{


	bool operator()(const char *str1, const char *str2)const
	{
		return strcmp(str1, str2) == 0;//ÏàµÈ·µ»Ø1
	}

};




void mainsdg()
{

	hash_set<const char *>hs;

	hs.insert("China");
	hs.insert("Japan");
	hs.insert("The U.S.A");
	hs.insert("Russia");
	hs.insert("Austria ");

	auto ibeg = hs.begin();
	auto iend = hs.end();

	while (ibeg != iend)
	{
		cout << *ibeg << endl;
		ibeg++;

	}

	auto pfind = hs.find("China");

	if (pfind == iend)
	{
		cout << "Not Find" << endl;
	}
	else
	{

		cout << *pfind << endl;
	}

	cin.get();

}