#include<iostream>
#include<stdlib.h>

using namespace std;


//const 约束对象的性质，只能读，不能写


//c++中的const ，虽然可以实现强转（去掉const属性），但是无法实现修改



void main10()
{
const	int num = 10;
	cout << num << endl;
	int a[num];//C++中允许此操作,允许使用const定义的常量初始化
	int i = 0;

	for (auto  data : a)//泛型
	{
		data = i++;
		cout << data << "\t";
	}

	system("pause");
}





void main2()
{
	const int num = 10;
	//int *p = &num;//报错 “初始化”: 无法从“const int *”转换为“int *”
	cout << num << endl;
	int *p = (int *)&num;//强转 a C语言的强专方式  
	*p = 50;//C++在执行时，跳过此代码

	//没有成功修改const定义的常量的值


	
	cout << num << endl;

	system("pause");
}


void main3()
{

	const int num = 10;
	cout << num << endl;

	int *p = const_cast<int *>(&num);//强制去掉const属性

	*p = 50;//赋值失败,可以编译成功,但是禁止执行
	cout << num << endl;

	system("pause");
}



void main5()
{
	int a = 10;
	const int b = 20;

	/*int const *p1=&a ;//C++用于限定权限,不会严格检查类型
	int const *p2=&b;*/ //p1,p2是指向常量的指针，指向的数据不能进行赋值操作
	//禁止对常量赋值
	//*p1 = 3;
	//*p2 = 4;

	
	 //int * const p1 = &a;//必须初始化 ////指向变量的常量指针
	// int * const p2 = &b;//类型不匹配 错误	“初始化”: 无法从“const int *”转换为“int *const ”

	//禁止修改指针的指向
	//p1 = &b;
	//p2 = &a;



	const int * const p1 = &a;//C++用于限定权限,不会严格检查类型
	const int * const p2 = &b;

}


//C++权限问题与强类型

//为了权限编程，只读不可写的权限 int const *p  但是可以改变指针的指向，c++强类型可忽略 用于查询
//给予可读可写权限，int  * const p ,但是不可改变指针的指向   //此时const int 强类型发生作用
//const int * const p   可读不可写，也不可变动指针的指向    





void main6()
{

	int const num = 10;
	int const &rnum = num;//引用


	//变量传递给指向常量的指针或者常引用，都会掉属性，从内存中读取

	cout << "&num="<<&num << endl;
	cout << "&rnum=" << &rnum << endl;//地址相同


	system("pause");
}




//函数之间参数调用，变量传递给常引用，可以去掉const属性

int select(const int &rnum)
{

//	rnum = rnum - 0.2;//禁止执行

	int *p = const_cast<int *>(&rnum);//去掉const属性并强制转换
	*p = *p - 0.2;//实现在内存中修改
	
	return rnum;//从内存中读取,返回时会强制转换为 int

}


void main()
{

	int const num1(100);
	int num2(200);

	cout << select(num2) << endl;


	system("pause");
}




