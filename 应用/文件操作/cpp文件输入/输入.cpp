#include<iostream>

using namespace std;

void main1()
{

	char chr;
	cin >> chr;
	cout << (char)chr-32;//ָ������ cout �����˺ܶ����������
	cin.get();
	cin.get();

}

void main2()
{
	while (1)
	{
		char chr = cin.get();
		cout.put(chr);

	}

	

}


void main3()
{
	char chr = cin.get();
	cin.get();//�Ե��س�
	cout.put(chr);

	while ((chr = cin.get())!= '\t')
	{
		cin.get();//�Ե��س�
		cout.put(chr);
	}

}

void main5()
{

	char str[30] = { 0 };

	cin.getline(str, 10);//�޶������� ���һλ \0

	cout << str << endl;

	system("pause");
}

void main()
{

	char chr=0;

	while (chr!='\t')
	{

		cin.get(chr);
		cin.get();
		cout.put(chr);

	}

	system("pause");
}