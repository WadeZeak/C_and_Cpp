#include<stdlib.h>
#include<iostream>
#include<locale.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "chs");//设置本地化，设置本地语言种类  ch 中文 s 简体
 	wchar_t *p1 = L"123456avsf";

	wcout << p1 << endl;

	wchar_t *p2 = L"天朝123456";//需要宽字符本地化之后才能正常输出

	wcout << p2 << endl;


	system("pause");
}