#include<iostream>

using namespace std;

void main1()
{

	char buf1[80];
	cin.get(buf1, 80, 'x');// 存储目标 大小 结束符(不读入)
	cout << buf1 << endl;
	


	//只能提取文本一次
	//之后读取失败,没有执行
	char buf2[80];
	cin.get(buf2, 80, 'x');
	cout << buf2 << endl;

	
	system("pause");

}


void main2()
{

	char buf[80];

	////x意味着结束,之后的不会再读取
	cin.get(buf, 80,'x');// 不指定 以回车结束 指定结束符的情况,可以读入回车等空白字符
//	cin >> buf;//cin 无法区分空格

	cout << buf << endl;
	
	system("pause");

}


void main3()
{

	char buf[80];

	cin.getline(buf,80);//可以识别空白字符 逐行读取
	cout << buf << endl;

	//可以多次提取
	cin.getline(buf, 80);//可以识别空白字符
	cout << buf << endl;

	cin.get(buf, 80, 'x');//一次性读取
	system("pause");
}


void main()
{
	char buf[80];

	//实现数据切割
	cin.getline(buf, 80, ',');
	cout << buf << endl;
	cin.getline(buf, 80, ',');
	cout << buf << endl;
	cin.getline(buf, 80, ',');
	cout << buf << endl;
	cin.getline(buf, 80, '\n');
	cout << buf << endl;


	system("pause");
}









