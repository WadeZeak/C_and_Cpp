#include<iostream>
#include<sstream>
#include<string>

using namespace std;

struct MyStruct
{

	string str1, str2,str3;
	int num;
	double db;
	char chr;
};

void main1()
{

	string mystr("baidu google bing  123 12.9 A");

	MyStruct mystruct;

	istringstream input(mystr);//创建一个字符串扫描流  以空格作为结束符

	input >> mystruct.str1 >> mystruct.str2 >> mystruct.str3;
	input >> mystruct.num >> mystruct.db >> mystruct.chr;

	cout << mystruct.str1 << endl;
	cout << mystruct.str2 << endl;
	cout << mystruct.str3 << endl;
	cout << mystruct.num << endl;
	cout << mystruct.db << endl;
	cout << mystruct.chr << endl;

	cin.get();
}





void main2()
{
	char mystr[50]="baidu#123#A";

	for (char *p=mystr; *p!='\0'; p++)
	{
		if (*p=='#')
		{
			*p = ' ';
		}

	}

	string str1;
	int num;
	char chr;
	istringstream input(mystr);
	input >> str1 >> num >> chr;
	cout << str1 << endl;
	cout << num << endl;
	
	cout << chr << endl;


	cin.get();
}


void main3()
{
	
	ostringstream myout;
	char str2[50] = "5123bfia";
	myout << "ab1213" << 123 << 125.6<<'A'<<str2<<endl;
	

	cout << myout.str() ;

	cin.get();

}

void main()
{
	char str1[100] = { 0 };
		ostringstream myout(str1,sizeof(str1));//初始化

	char str2[50] = "5123bfia";
	myout << "ab1213" << 123 << 125.6 << 'A' << str2 ;//打印到字符串

	cout << myout.str() << endl;;//输出

	strcpy_s(str1, myout.str().c_str());
	cout << str1 << endl;
	

	cin.get();

}