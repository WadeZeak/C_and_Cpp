#include<stdlib.h>
#include<stdio.h>


//const int *p//限定地址可以移动，但是只能读，不能写
//int const *p


//int * const p//地址不能移动，但是可读可写




//const  int *  const p //限定地址，不能移动，只能读，不能写
//int const * const  p





void main1()
{

	int num = 10;//变量
	const int data = num;//const 限定了常量,不可随意修改,只有初始化是可以赋值
//	num = 3;
	const int *p = &num;//p指向常量的指针
	//限制权限，只能读,不能修改
	p = &data;
	printf("%d\n", *p);
	system("pause");

}



void main2()
{
	int num = 10;
	int data = 20;
	int const *p = &num;//限定写入权限,可读不可写
	p = &data;
	//*p = 1000;//不能对常量赋值
	printf("%d\n", *p);

	system("pause");
}




void main3()
{
	int num = 10;
	int data = 20;
	int * const p = &num;

//	p = &data;//不可修改地址
	*p = data;//可以修改内容

	printf("%d\n", *p);
	system("pause");
}



void main()
{

	int num = 10;
	int data = 20;
	const int *  const p = &data;
	//p = &num;//不可修改地址
	//*p = num;//不可更改内容


}