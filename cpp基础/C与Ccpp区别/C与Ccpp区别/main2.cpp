
#include<stdlib.h>
#include<iostream>//C++没有.h文件  加以区分C/C++


//C/C++的最大区别  C没有命名空间


using namespace std;

void main2()
{

	//C++十分注重类型,强类型，严格检查类型
	int *p1 = NULL;
	double *p2 = NULL;
	//p1 = p2;//编译可以不能同过   类型不匹配，无法实现赋值

}


void main4()
{
	//int a=5;
//	int a(5);
	double a(3.5);
	cout << a << endl;

	//char *str = "china"
	char *str("china");
	cout << str << endl;



	//wchar_t *wchr = L"China";
	wchar_t *wchr(L"China");//宽字符用于汉子，汉语等
	wcout << wchr << endl;//wcout 输出宽字符
	system("pause"); 

}