#include<iostream>


using namespace std;


void main()
{

	char str[30] = { 0 };

	cin >> str;
	cout << str << endl;

	system(str);
	cerr << "Error for you" << endl;//������ʾ��,��ʾ����,�����ض���


	system("pause");
}