#include<iostream>
#include<fstream>


using namespace std;

void main1()
{

	ofstream fout("C:\\Users\\Zeak_K\\Desktop\\abc.txt");
	fout << "123456789abcdefghigklmn" << endl;
	fout.close();

	ifstream fin("C:\\Users\\Zeak_K\\Desktop\\abc.txt");

	//fin.seekg(9, ios::beg);//�ӿ�ʼ��ǰ9���ַ�
	fin.seekg(-9, ios::end);//��β������ȡ9���ַ�
	char chr;
	while (fin.get(chr))
	{
		cout << chr;
	}

	system("pause");

}



void main2()
{
	ofstream fout("C:\\Users\\Zeak_K\\Desktop\\abc.txt");
	fout << "123456789abcdefghigklmn" << endl;
	fout.close();

	ofstream  Fout("C:\\Users\\Zeak_K\\Desktop\\abc.txt", ios::in | ios::out);//�ȿɶ��ֿ�д
	char str[] = "ABCDEFG";

	//ȷ�����λ�ý��ж�д
///	Fout.seekp(0, ios::beg);//��ʼд��

	Fout.seekp(0,ios::end);//β��׷��
	Fout << str;
	Fout.close();

	ifstream fin("C:\\Users\\Zeak_K\\Desktop\\abc.txt");
	char chr;

	while (fin.get(chr))
	{
		cout << chr;
	}

	system("pause");


}

void main3()
{

	ofstream fout("C:\\Users\\Zeak_K\\Desktop\\abc.txt");
	fout << "123456789abcdefghigklmn" << endl;
	fout.close();

	ofstream  Fout("C:\\Users\\Zeak_K\\Desktop\\abc.txt", ios::in | ios::out);//�ȿɶ��ֿ�д
	char str[] = "ABCDEFG";
	Fout.seekp(0, ios::end);//β��׷��

	long size = Fout.tellp();//��ǰλ�þ���begin �ж����ֽ�  β�����Ի�ȡ�ļ���С

	cout << size << endl;

	system("pause");



}