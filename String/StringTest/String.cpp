#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<string>


using namespace std;





void main()
{
	string str;
	
	//str.resize(10);//��ҪԤ�ȷ���ռ䣬������scanf����
	//scanf�����հ׷�(��ո�,�Ʊ�����߻س�)��������
//	scanf("%s", &str[0]);//��Ϊ�ַ���������

	

	scanf("%s", str.c_str());//��Ϊconst char ����

	//�������С,ʹ��scanf() ����,��СΪ0
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