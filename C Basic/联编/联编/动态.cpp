#include<iostream>

using namespace std;


//形态联编,程序匹配与连接在编译时,如重载函数
//动态联编 联编在程序运行时 如if 与switch


void Go(int num)
{





}


void Go(char *str)
{




}



//:: 在类中的重载
class AAA
{

public:
	void Go(int num)
	{





	}


	void Go(char *str)
	{




	}



};





void main()
{

	//auto  *pstr;编译阶段

	void(*p1)(char *str) = Go;

	void(*p2)(int num) = Go;

	Go(NULL);//调用Go(int num)

	//编译器编译时决定的 静态联编
	Go(nullptr);//调用Go(char *str) 关键字 

}

void main1()
{

	int num = 110;
	cout << num << endl;//执行阶段

	if (num>10)
	{

		system("calc");

	}
	else
	{

		system("mspaint");

	}

	system("pause");
}

