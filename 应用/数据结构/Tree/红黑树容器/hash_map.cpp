#include <hash_map>
#include <iostream>
#include<map>


using namespace std;


void mainssob()
{


	hash_map<const char *, int>mymap;

	//ӳ��,�Եȵ�ӳ�����
	mymap["����"] = 10;
	mymap["ʦ��"] = 9;
	mymap["�ó�"] = 18;
	mymap["����"] = 7;
	mymap["�ų�"] = 6;

	auto  ibeg = mymap.begin();
	auto iend = mymap.end();

	while (ibeg != iend)
	{

		cout << (*ibeg).first << '\t';
		cout << (*ibeg).second <<endl;
	
		ibeg++;

	}

	cout << "\n\n---------------------------------------------------------\n" << endl;


	{

		map<char *, int>mymap;

		//ӳ��,�Եȵ�ӳ�����
		mymap["����"] = 10;
		mymap["ʦ��"] = 9;
		mymap["�ó�"] = 18;
		mymap["����"] = 7;
		mymap["�ų�"] = 6;
		auto  ibeg = mymap.begin();
		auto iend = mymap.end();

		while (ibeg != iend)
		{

			cout << (*ibeg).first << '\t';
			cout << (*ibeg).second << endl;

			ibeg++;

		}

	
	}

	cin.get();
}



void main()
{

	map<int, const char *>mymap;

	mymap.insert(pair<int, const char *>(201, "˾��1"));
	mymap.insert(pair<int, const char *>(101, "˾��2"));
	mymap.insert(pair<int, const char *>(301, "˾��3"));
	mymap.insert(pair<int, const char *>(401, "˾��4"));

	auto ib = mymap.begin();
	auto ie = mymap.end();
	for (; ib != ie; ib++)
	{
		cout << (*ib).first << "   " << (*ib).second << "\n";
	}


	{


		hash_map<int, const char *>mymap;

		mymap.insert(pair<int, const char *>(201, "˾��201"));
		mymap.insert(pair<int, const char *>(101, "˾��101"));
		mymap.insert(pair<int, const char *>(301, "˾��301"));
		mymap.insert(pair<int, const char *>(401, "˾��401"));

		auto ib = mymap.begin();
		auto ie = mymap.end();
		for (; ib != ie; ib++)
		{
			cout << (*ib).first << "   " << (*ib).second << "\n";
		}

		hash_map<int, const char *> ::iterator pfind = mymap.find(301);

		if (pfind==ie)
		{
			cout << "Not Found" << endl;
		}

		else
		{
			cout << (*pfind).first << endl;

		}

	}


	cin.get();


}