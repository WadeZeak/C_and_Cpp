#include<stdlib.h>
#include"iostream"



//命名空间中的成员都是公有的
namespace Move
{
	int y(5);
	int(*padd)(int, int);//函数接口指针
//private:  //namaspace不能私有(private)，是透明的
	int x(100);


	class MyClass
	{

	public:
		int a;
	private://类中的成员默认是私有的,实现封装
		int b;
	};

}

int add(int a, int b)
{
	return a + b;

}



struct MyStruct//结构体默认是透明的,private表示私有的，只有内部可以调用
{
private:
	int a;
public:
	int b;
};


int addplus(int a, int b)
{
	std::cout << a << "+" << b << std::endl;
	return a + b;
}


void mainadcv()
{

	Move::padd = add;
	std::cout<<	Move::padd(10, 20)<<std::endl;
	Move::padd = addplus;
	std::cout << Move::padd(40, 50) << std::endl;

	MyStruct S1;
	//S1.a=100;//结构体中私有成员不能访问
	S1.b=10;




	system("pause");
}