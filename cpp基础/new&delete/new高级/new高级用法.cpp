#include<iostream>
#include<stdlib.h>
#include<new>


using namespace std;

const int buf(512);//限定一个常量整数
int N(5);//数组大小
char buffer[buf] = { 0 };//在静态区  512字节




void main1()
{
	//cout << sizeof(double) << endl; 
	double *p1, *p2;
	p1 = new double[N];//分配一片连续内存,N个元素大小
	p2 = new(buffer)double[N];//指定区域分配内存

	for (int i = 0; i < N; i++)//数组初始化
	{
		p1[i] = p2[i] = static_cast<double>(i)+10.9;
		cout << &p1[i] <<"," << p1[i] <<'\t' << &p2[i]<<","<<p2[i]<< endl;
	}

	system("pause");
}



void main()
{


	double *p1, *p2;
		p1 = new double[N];//分配一片连续内存,N个元素大小
		p2 = new(buffer)double[N];//指定区域分配内存  此处限定区域在静态区 实现反复使用这片内存


		for (int i = 0; i < N; i++)//数组初始化
		{
			p1[i] = p2[i] = static_cast<double>(i)+10.9;
			cout << &p1[i] << "," << p1[i] << '\t' << &p2[i] << "," << p2[i] << endl;
		}
		cout << "\n\n" << endl;

		delete[]p1;//释放内存后，编译器优华，会使用同一片内存,如果不释放,会分配其他的内存


	double *p3, *p4;
	p3 = new double[N];
	p4 = new(buffer)double[N];//限定内存区域,使用完毕后自动释放

	for (int i = 0; i < N; i++)//数组初始化
	{
		p3[i] = p4[i] = static_cast<double>(i)+883.8;
		cout << &p3[i] << "," << p3[i] << '\t' << &p4[i] << "," << p3[i] << endl;
	}
	cout << "\n\n" << endl;
	delete[]p3;

	double *p5, *p6;
	p5 = new double[N];
	p6 = new(buffer)double[N];

	for (int i = 0; i < N; i++)//数组初始化
	{
		p5[i] = p6[i] = static_cast<double>(i)+56.4;
		cout << &p5[i] << "," << p5[i] << '\t' << &p6[i] << "," << p6[i] << endl;
	}
	cout << "\n\n" << endl;
	delete[]p5;

	//p1,p3,p5分配内存的方式可能出现内存泄漏   
	//p2,p4,p6限定内存使用区域可避免内存泄露 牺牲了内存访问的独立性


	//p1,p3,p5指向的内存在堆区,而它们存储在堆区 
	//手动释放内存

	//p2,p4,p6作为指针变量存储在栈区,指向的地址在静态区  缓冲区
	//自动释放内存,用于用完了便不会再使用的数据

	system("pause");
}