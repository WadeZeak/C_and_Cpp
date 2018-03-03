#include<iostream>
#include<string>
#include<fstream>



using namespace std;



struct MyStruct
{
	//char str[30];// 无法指定数组的显式初始值设定项
	char *p = "Hello World";
	int num = 20;
	double db = 10.25;
	char chr = 'a';

};




//文本方式
void main1()
{
	ofstream fout("C:\\Users\\Zeak_K\\Desktop\\new.txt",ios::out);
	ifstream fin("C:\\Users\\Zeak_K\\Desktop\\new.txt");

	cout << sizeof(MyStruct) << endl;


	MyStruct mystruct;
	fout << mystruct.chr << mystruct.db << mystruct.num << mystruct.p << '\n';
	fout.close();
	char str[100] = { 0 };
	fin.getline(str, 100, 0);//提取
	cout << str << endl;
	fin.close();

	system("pause");

}


//二进制文件
void main()
{
	cout << sizeof(MyStruct) << endl;
	ofstream fout("C:\\Users\\Zeak_K\\Desktop\\bin.txt", ios::binary);//以二进制方式打开
	MyStruct mystruct;
	mystruct.p = "Hello China";

	fout.write((char *)&mystruct, sizeof(mystruct));//写入
	//第一个参数 要写入文件的内存的首地址
	//第二个参数 写入的长度



	fout.close();

	ifstream fin("C:\\Users\\Zeak_K\\Desktop\\bin.txt");
	MyStruct mystruct1;

	fin.read((char *)&mystruct1, sizeof(mystruct1));//读取

	cout << mystruct1.p << endl;

	fin.close();

	system("pause");


}



