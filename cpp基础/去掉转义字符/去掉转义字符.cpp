#include<iostream>
#include<string>
#include<stdlib.h>

using namespace std;


void main()
{

	//string path = "E:\Program Files\Tencent\QQ\Bin\QQScLauncher.exe";//����ʱ,����ʶ����ַ�ת������

	string path =R"("E:\Program Files\Tencent\QQ\Bin\QQScLauncher.exe")";
	//R"()"  ����֮������ݿ���ȥ��ת���ַ�
	system(path.c_str());

	cin.get();

}