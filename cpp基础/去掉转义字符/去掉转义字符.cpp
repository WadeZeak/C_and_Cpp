#include<iostream>
#include<string>
#include<stdlib.h>

using namespace std;


void main()
{

	//string path = "E:\Program Files\Tencent\QQ\Bin\QQScLauncher.exe";//生成时,不可识别的字符转义序列

	string path =R"("E:\Program Files\Tencent\QQ\Bin\QQScLauncher.exe")";
	//R"()"  括号之间的内容可以去掉转义字符
	system(path.c_str());

	cin.get();

}