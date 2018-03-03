#include<stdlib.h>
#include<iostream>

using namespace std;


//引用
//引用在定义初始化时就需要与对象绑定，程序中不能对引用重定义
//一个对象的别名，从使用方式与效果上，与使用的对象名称一致




//改变外部变量，使用指针或者引用


//左值引用是通过指针实现的


void main1()
{

	int a = 5;
	int &ra(a);//引用初始化，必须的
	ra = 100;

	cout << ra << endl;

	system("pause");
}


void change(int &a)//引用，新建一个变量接收实际引用的值，指向同一个地址
{

	a = 19;

	cout << "change_a_add=" << &a << endl;
}



void main2()
{
	int a = 10;

	cout << "main_a_add=" << &a << endl;

	//cout << "main_a=" << a << endl;


	change(a);
	cout << "main_a=" << a << endl;





	system("pause");
}




void main3()
{

	int num1(5);
	int num2(20);
	int *pnum(&num1);
	cout << "num1_add=" << &num1<<endl;
	cout << "num2_add=" << &num2 << endl;

	//引用,引用的是变量名 


int * &prnum=pnum;//指针需要传递地址


//引用可以改变指针的指向，也可以改变变量的值


	prnum = &num2;
	cout << "pnum=" << pnum << endl;

	cout << "*pnum=" <<* pnum << endl;



	system("pause");
}

void main4()
{

	int num1(5);
	int num2(20);


	cout << &num1 << endl;
	cout << &num2 << endl;
	
	int *p;

	p = &num1;//取地址 &num1(右值) 在寄存器


	p = &num2;

	int * &&pnum = &num1;//引用右值 (指针的引用)
	//& 引用左值  ;  && 引用右值

	int *px = pnum;//用于对象拷贝


	system("pause");
}


int &Get()
{

	int a = 10;//在栈上,函数使用完成后，回收内存
	int &ra = a;
	cout << &ra << endl;

	return ra;

}




void main5()
{
	
	int & rnum = Get();


	cout << rnum << endl;

	cout << "ABCDE" << endl;

	cout << rnum << endl;//已经刷新栈区

	system("pause");
}




int * & getdata()//返回一个指针的引用
{
	int *p;//p指向的堆上的地址 在栈上存储

	p	= new int;//堆上分配内存

	*p = 100;//在堆上

	int * &rp = p;//引用指针

	return rp;//返回引用的指针,之后再栈上p指向的指针刷新


}



void main6()
{


	int * &rp = getdata();//函数中返回的指针消亡后，指针引用成为野指针
	int *p = rp;//保存在堆上的地址
	cout << *rp << endl;

	//cout << *rp << endl;//函数中返回的指针已经消亡，所以会成为野指针，所以指针引用也会出错
	cout << *p << endl;
	cout << *p << endl;
	//delete(p);//删除后,指针的值会发生变化，禁止访问
	//free 释放内存

	cout << *p << endl;
	system("pause");
}





void main()
{
	//引用，从寄存器中直接赋值，而一般情况下需要从寄存器到内存，再赋值
	int a(10);//在栈上
	int &ra = a;//左值引用
	int * &&rra = &a;//右值引用 从寄存器中直接赋值


}











