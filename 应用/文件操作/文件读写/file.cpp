#include<iostream>
#include<fstream>

using namespace std;

void main1()
{

	ofstream fout;//ofstream 输出文件

	fout.open("C:\\Users\\Zeak_K\\Desktop\\1.txt");//打开文件

	fout << "Hello World!!" << endl;
	fout.close();

}


void main2()
{
	ifstream fin("C:\\Users\\Zeak_K\\Desktop\\1.txt");//ifstream 创建读取文件的流
	char str[50] = { 0 };
	fin >> str;// 从文件读取 空白字符作为结束符
	fin.close();
	cout << str << endl;
	cin.get();

}



void main3()
{
	
	ifstream fin("C:\\Users\\Zeak_K\\Desktop\\2.txt");
	char str[50] = { 0 };

	for (int i = 0; i < 4; i++)
	{
		fin.getline(str,50);//逐行读取
		cout << str << endl;
	}

	cin.get(); 

}



void main4()
{

	ofstream fout;//ofstream 输出文件

	fout.open("C:\\Users\\Zeak_K\\Desktop\\3.txt");//打开文件

	fout << "Hello World!!" << endl;//写入文件
	fout << "Hello China!!" << endl;
	fout << "Hello The U.S.A!!" << endl;
	fout << "Hello England!!" << endl;
	fout << "Hello XiaMen!!" << endl;
	fout.close();

}




void main5()
{

	//fstream 既能读又能写

	//文件需要原本就存在
	fstream fio("C:\\Users\\Zeak_K\\Desktop\\3.txt", ios::in | ios::out);//读写权限

	fio << "Hello World!!" << endl;//写入文件
	fio << "Hello China!!" << endl;
	fio << "Hello The U.S.A!!" << endl;
	fio << "Hello England!!" << endl;
	fio << "Hello XiaMen!!" << endl;//文件指针到达文件末尾



	//解决方法一 重新打开文件
	//	fio.close();
	//{
	//	fstream fio("C:\\Users\\Zeak_K\\Desktop\\3.txt", ios::in | ios::out);//读写权限

	//	for (int i = 0; i < 5; i++)
	//	{
	//		char str[50] = { 0 };
	//		fio.getline(str, 50);//逐行读取
	//		cout << str << endl;
	//	}

	//	fio.close();
	//}
	//



	//解决方法二 seeking
	fio.seekg(ios::beg);//文件指针移动到开头


		for (int i = 0; i < 5; i++)
		{
			char str[50] = { 0 };
			fio.getline(str, 50);//逐行读取
			cout << str << endl;
		}

		fio.close();

	cin.get();



}

//写入文件 不需要转换为字符串
//读取文件时,不需要将字符串换转换为其他类型的操作


void main6()
{

	ofstream fout;
	fout.open("C:\\Users\\Zeak_K\\Desktop\\in.txt");
	fout << "Hello" << "\t" << 123 << "\t" << "Z" << endl;//写入
	fout.close();

	ifstream fin("C:\\Users\\Zeak_K\\Desktop\\in.txt");
	
	char str[10] = { 0 };
	int num = 0;
	char chr = '\0';
	fin >> str >> num >> chr;//以白字符作为每一次读取的结束符

	cout << str << endl;
	cout << num << endl;
	cout << chr << endl;

	cin.get();


}


void main7()
{
	
	ifstream fin("C:\\Users\\Zeak_K\\Desktop\\2.txt");

	ofstream fout("C:\\Users\\Zeak_K\\Desktop\\20.txt");


	if (!fin||!fout)
	{
		cout << "文件读取失败" << endl;
		return;
	}

	cout << "文件拷贝开始...." << endl;

	char chr = 0;

	//如果读取二进制文件，会将其按照文本格式读取,进行压缩
	//1 2  3 按照二进制读取0000001  00000010  00000100
	// 按照文本读取 01111011
	while (fout&&fin.get(chr))//引用方式读取一个字符   读取失败,循环停止
	{
		///读取一个字节
		fout.put(chr);//写入一个字节
	}

	cout << "文件拷贝结束...." << endl;

	//关闭文件缓冲区
	fin.close();
	fout.close();

}




void main()
{
	ofstream fout("C:\\Users\\Zeak_K\\Desktop\\2.txt", ios::app);//文件追加
	fout << endl; //<<  >> 流输入输出符号
	fout << "Hello World";


	fout.close();


}