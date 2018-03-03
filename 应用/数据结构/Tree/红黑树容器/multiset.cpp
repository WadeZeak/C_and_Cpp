#define _CRT_SECURE_NO_WARNINGS


#include<iostream>
#include<set>
#include<string>

using namespace std;



struct Student
{

	int id;
	char name[30];

};



struct stuless
{

	bool operator()( const Student &s1, const  Student &s2)
	{
		return s1.id < s2.id;
	}

};


void main3()
{

	//set 不允许重复的项 而multiset允许
	//multiset 红黑树的每一个节点是一个链表

	Student myarray[3] = { { 10, "Alias" },{ 2, "Aron" }, { 3, "Ben" } };
	multiset< Student, stuless>mymulset(myarray, myarray + 3, stuless());


	 Student student1;
	student1.id = 20;
	strcpy(student1.name ,"Ceasar");

	mymulset.insert(student1);

	strcpy(student1.name, "Ceasar1");
	mymulset.insert(student1);

	strcpy(student1.name, "Ceasar2");
	mymulset.insert(student1);

	auto ibeg = mymulset.begin();
	auto iend = mymulset.end();

	while (ibeg!=iend)
	{
		cout << (*ibeg).id << '\t';
		cout << (*ibeg).name << endl;
		ibeg++;

	}




	cin.get();

}