#include<map>
#include<iostream>


using namespace std;


//multimap 类似于multiset 每个节点是一个链表

//而map的每一个节点是一个映射




void mainghgfhfh()
{

	map<char *, int>mymap;

	mymap.insert(pair<char *, int>("司令1", 101));
	mymap.insert(pair<char *, int>("司令2", 102));
	mymap.insert(pair<char *, int>("司令3", 103));
	mymap.insert(pair<char *, int>("司令4", 104));
	mymap.insert(pair<char *, int>("司令5", 105));

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