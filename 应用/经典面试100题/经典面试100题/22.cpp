#include<iostream>

using namespace std;

//不适用sizeof 判断操作系统是16位还是32位


void main3333()
{

	int a = ~0;//16位 int 2字节   32位 4字节

	cout << a << endl;

	//cout << sizeof(int) << endl;;

	if (a>65536)
	{
		cout << "32位" << endl;//2^16
	}
	else
	{
		cout << "16位" << endl;
	}


	cin.get();
}