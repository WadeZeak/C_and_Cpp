#include<map>
#include<iostream>

using namespace std;

void main5()
{

	map<char *, int>mymap;

	//ӳ��,�Եȵ�ӳ�����
	mymap["����"] = 10;
	mymap["ʦ��"] = 9;
	mymap["�ó�"] = 8;
	mymap["����"] = 7;
	mymap["�ų�"] = 6;

	cout << mymap["����"] << endl;
	cout << mymap["ʦ��"] << endl;
	cout << mymap["�ó�"] << endl;
	cout << mymap["����"] << endl;
	cout << mymap["�ų�"] << endl;

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


	for (int i = 0; i < 3; i++)//���ӳ�� һһ��Ӧ
	{
		mymap[infoarr[i].id] = infoarr[i].stu;//����ӳ���ϵ 
	}



	stuinfo stu2 = { 3, { "Crease", 10000 } };//�غ�ʱ,���������
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