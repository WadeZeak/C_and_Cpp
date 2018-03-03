#include<stdio.h>
#include<iostream>

using namespace std;

//内联函数
//C语言 define
//Cpp define 或者inline

//define不会进行类型检查

//inline 对于编译器只是一个建议,加快程序运行速度

//使用规则
//一般情况下
//(1)不能有递归
//(2)不能包含静态数据
//(3)不能有循环
//(4)不能有switch与goto语句
//(5)不能包含数组
//若内联函数不能满足以上规则，编译器会将inline 函数当做普通函数对待


//替换
#define Cube(x) (x)*(x)*(x)//内联函数

inline int GETX(int x);//内联函数 在内部展开

//内联
inline int GETX(int x)//保证类型安全
{
	return x*x*x;
}
 
//inline 模板化
template<class T>
inline T GetNum(T x)
{
	return x*x*x;
}


//函数
int GetX(int num)
{
	return num*num*num;
}

void main()
{

	cout << Cube(1 + 2) << endl;
	cout << Cube(1.1*2.2) << endl;
	cout << Cube('a') << endl;

	cout << GETX(10) << endl;

	cout << GetNum(10) << endl;
	system("pause");
}
