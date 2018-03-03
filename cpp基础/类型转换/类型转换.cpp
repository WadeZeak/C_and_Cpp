#include<iostream>
#include<stdlib.h>
#include<stdio.h>

using namespace std;

void main1()
{

	double db = 10.5;
	float f = db;// 默认数据类型转换   warning:“初始化”: 从“double”转换到“float”，可能丢失数据	


	cin.get();
}





void main2()
{

	void *p = new int[10];
	int *pint =(int *) p;//C语言风格的强制类型转换
}






void main3()
{
	//static_cast<需要转换的类型>(数据)  基本数据类型转换
	int n =static_cast<int> (78.98);//C++一般情况下的数据类型转换


	//printf("%d\n", 85.501);//printf()按照自己的格式进行输出，数据与格式不匹配，输出错误
	//printf("%f\n", 69);

	printf("%d\n", static_cast<int>(85.501));//static_cast 函数
	printf("%f\n", static_cast<float>(69));
	cout << n << endl;

	int *p = static_cast<int *>(malloc(100*sizeof(int)));


	cin.get();
}


//const int num=10  可以修改,无法生效   可以通过地址进行修改内存，但是读取时直接从寄存器读取
//const int *p = num; 只读不可写
//const_cast 去掉常量属性

void main4()
{
	int num[3] = {1,2,3};
	const int *p = num;

	cout << *p << '\t' << *(p + 1) <<'\t'<< *(p + 2) << endl;

	//*p = 10;//不能修改

	int *pnew = const_cast<int *>(p);
	*pnew = 10;


	cin.get();
}



void main()
{
	//指针  C++强类型  类型决定的数据的解析方式以及内存占多大(步长)

	//reinterpret_cast<>()  专业的指针类型强转  最安全

	int num = 300;
	char *p = reinterpret_cast<char *>(&num);


	for (int i = 0; i < 4; i++)
	{	
		printf("%x,%c,%d,%p\n",*(p+i), *(p+i), *(p+i),p);
	}



  
	system("pause");
}


//	dynamic_cast  类的指针之间的强转