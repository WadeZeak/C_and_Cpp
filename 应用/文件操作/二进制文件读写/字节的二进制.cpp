#include<iostream>
#include<fstream>

using namespace std;

//按照字方式读取二进制
//文件加密解密需要二进制读写


void main1()
{

	
	//二进制读写
	ifstream fin("C:\\Users\\Zeak_K\\Desktop\\write.exe", ios::binary);
	ofstream  fout("C:\\Users\\Zeak_K\\Desktop\\newwrite.exe", ios::binary);


	if (!fin || !fout)
	{
		std::cout << "文件打开失败";
		system("pause");
		return;
	}
	std::cout << "文件拷贝开始\n";

	char ch = 0;
	while (fout && fin.get(ch))//引用的方式读取到一个字符
	{
		fout.put(ch);//写入一个字节

	}
	fin.close();
	fout.close();

	std::cout << "文件拷贝完成";



	cin.get();

}




