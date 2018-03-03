#include <hash_map>
#include <iostream>
#include<map>


using namespace std;


void mainssob()
{


	hash_map<const char *, int>mymap;

	//映射,对等的映射查找
	mymap["军长"] = 10;
	mymap["师长"] = 9;
	mymap["旅长"] = 18;
	mymap["连长"] = 7;
	mymap["排长"] = 6;

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

		//映射,对等的映射查找
		mymap["军长"] = 10;
		mymap["师长"] = 9;
		mymap["旅长"] = 18;
		mymap["连长"] = 7;
		mymap["排长"] = 6;
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

	mymap.insert(pair<int, const char *>(201, "司令1"));
	mymap.insert(pair<int, const char *>(101, "司令2"));
	mymap.insert(pair<int, const char *>(301, "司令3"));
	mymap.insert(pair<int, const char *>(401, "司令4"));

	auto ib = mymap.begin();
	auto ie = mymap.end();
	for (; ib != ie; ib++)
	{
		cout << (*ib).first << "   " << (*ib).second << "\n";
	}


	{


		hash_map<int, const char *>mymap;

		mymap.insert(pair<int, const char *>(201, "司令201"));
		mymap.insert(pair<int, const char *>(101, "司令101"));
		mymap.insert(pair<int, const char *>(301, "司令301"));
		mymap.insert(pair<int, const char *>(401, "司令401"));

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