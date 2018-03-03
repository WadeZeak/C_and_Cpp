#include<iostream>


using namespace std;


void main()
{

	char str[30] = { 0 };

	cin >> str;
	cout << str << endl;

	system(str);
	cerr << "Error for you" << endl;//连接显示器,显示错误,不能重定向


	system("pause");
}