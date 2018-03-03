#include<iostream>

using namespace std;



//运算符重载 用于自定义重载
//不能重载的运算符
//.    ::    .*     ?:     sizeof

//其他运算符均可重载  例如 + -  / * ^ new  delete....
 
//重载运算符的限制
//1、不改变运算符的优先级
//2、不改变运算符的结合性
//3、不改变运算符需要的操作数
//4、不能创建新的运算符


void main1()
{

	int a(1);
	int b(2);
	int c = a + b;
	char str1[10] = "123456";
	char  str2[20] = "78913513";
	char str3[40] = { 0 };


	sprintf_s(str3, "%s%s", str1, str2);


}