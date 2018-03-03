#include<map>
#include<iostream>

using namespace std;

void main5()
{

	map<char *, int>mymap;

	//映射,对等的映射查找
	mymap["军长"] = 10;
	mymap["师长"] = 9;
	mymap["旅长"] = 8;
	mymap["连长"] = 7;
	mymap["排长"] = 6;

	cout << mymap["军长"] << endl;
	cout << mymap["师长"] << endl;
	cout << mymap["旅长"] << endl;
	cout << mymap["连长"] << endl;
	cout << mymap["排长"] << endl;

	cin.get();
}






struct Student
{

	char *name;
	int age;

};


struct stuinfo
{

	int id;
	Student stu;

};

void main65()
{
	stuinfo infoarr[3] = {
			{ 1, { "Abel", 19 } },
			{ 12, { "Ben",20 } },
			{ 3, { "Clyde",21 } }		
	};

	map<int, Student>mymap;


	for (int i = 0; i < 3; i++)//编号映射 一一对应
	{
		mymap[infoarr[i].id] = infoarr[i].stu;//建立映射关系 
	}



	stuinfo stu2 = { 3, { "Crease", 10000 } };//重合时,会产生覆盖
	mymap[stu2.id] = stu2.stu;


	map<int, Student>::iterator ibeg = mymap.begin();
	auto iend = mymap.end();

	while (ibeg!=iend)
	{

		cout << (*ibeg).first << '\t';
		cout << (*ibeg).second.name << '\t';
		cout << (*ibeg).second.age << endl;
		ibeg++;

	}

	cin.get();


}