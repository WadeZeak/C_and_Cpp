#include<map>
#include<iostream>


using namespace std;


//multimap ������multiset ÿ���ڵ���һ������

//��map��ÿһ���ڵ���һ��ӳ��




void mainghgfhfh()
{

	map<char *, int>mymap;

	mymap.insert(pair<char *, int>("˾��1", 101));
	mymap.insert(pair<char *, int>("˾��2", 102));
	mymap.insert(pair<char *, int>("˾��3", 103));
	mymap.insert(pair<char *, int>("˾��4", 104));
	mymap.insert(pair<char *, int>("˾��5", 105));

	map<char *,int>::iterator ibeg = mymap.begin();
	auto iend = mymap.end();

	while (ibeg != iend)
	{

		cout << (*ibeg).first << '\t';
		cout << (*ibeg).second << endl;
		ibeg++;

	}


	cin.get();

}