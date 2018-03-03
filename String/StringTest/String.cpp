#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<string>


using namespace std;





void main()
{
	string str;
	
	//str.resize(10);//需要预先分配空间，才能用scanf输入
	//scanf遇到空白符(如空格,制表符或者回车)结束输入
//	scanf("%s", &str[0]);//作为字符数组输入

	

	scanf("%s", str.c_str());//作为const char 输入

	//不分配大小,使用scanf() 输入,大小为0
	cout << str.length() << endl;
	cout << str.size() << endl;

	//str[2] = 'A';
	printf("%s\n", str.c_str());

	//puts(str.c_str());
	
	//printf("%s\n", str);

	char chr1 = str[0];
	printf("%c", chr1);

//	cout << str << endl;

	system("pause");

}