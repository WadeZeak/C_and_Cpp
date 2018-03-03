#include<iostream>
#include<fstream>


using namespace std;

void main1()
{

	ofstream fout("C:\\Users\\Zeak_K\\Desktop\\abc.txt");
	fout << "123456789abcdefghigklmn" << endl;
	fout.close();

	ifstream fin("C:\\Users\\Zeak_K\\Desktop\\abc.txt");

	//fin.seekg(9, ios::beg);//从开始向前9个字符
	fin.seekg(-9, ios::end);//从尾部向后读取9个字符
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

	ofstream  Fout("C:\\Users\\Zeak_K\\Desktop\\abc.txt", ios::in | ios::out);//既可读又可写
	char str[] = "ABCDEFG";

	//确定随机位置进行读写
///	Fout.seekp(0, ios::beg);//开始写入

	Fout.seekp(0,ios::end);//尾部追加
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

	ofstream  Fout("C:\\Users\\Zeak_K\\Desktop\\abc.txt", ios::in | ios::out);//既可读又可写
	char str[] = "ABCDEFG";
	Fout.seekp(0, ios::end);//尾部追加

	long size = Fout.tellp();//当前位置距离begin 有多少字节  尾部可以获取文件大小

	cout << size << endl;

	system("pause");



}