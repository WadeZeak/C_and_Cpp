#include<stdlib.h>
#include<iostream>
#include<functional>
///using namespace std;

//函数包装器
//(1)设计执行接口，通用的接口设计关卡（）,计数
//(2)函数包装器依赖函数模板，实现通用泛型
//(3)函数代码可以内嵌在另外一个函数
//(4)用于管理内嵌函数与外部函数的调用



//函数包装器 T数据类型 F函数
template<typename T,typename F>
T Run(T t ,F f)
{
	using std::cout;
	using std::endl;

	static int count = 0;//计数器
	count++;
	cout << "函数包装器 Run执行额了" << count << "次" << endl;
	if (count>1)//限定执行次数
	{
		T x(0);
		return x;

	}

	return f(t);///函数传入参数

}

template<typename T, typename F>
T Run(T t1,T t2 ,F f)
{
	
	return f(t1,t2);///函数传入参数

}

int Mul(int a, int b)
{
	return a*b;
}






void main()
{
	using std::cout;//C++11 新语法 namespace 专门引入一个关键字 不需要std
	using std::function;
	using	std::endl;
	using std::cin;

	double db = 12.9;//
	int num1 = 19;
	int num2 = 20;
	function<double(double)>fun1 = [](double u)//定义函数包装器
	{  
		return u * 2;
	};


	function<double(double)>fun2 = [](double u)
	{
		return u*u;
	};


	function<int(int, int)>fun3 = [](int u1, int u2)
	{
		return u1 + u2;
	};



	function<int(int, int)>fun4 = Mul;//函数包装器调用外部函数





	cout << Run(db, fun1) << endl;//调用


	cout << Run(db, fun2) << endl;


	cout << Run(num1, num2,fun3) << endl;

	cout << Run(num1, num2, fun4) << endl;

	cin.get();//等价于getchar，输入一个字符
	//system("pause");
}
