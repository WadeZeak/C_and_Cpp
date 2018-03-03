#include<amp.h>
#include<iostream>


using namespace concurrency;
using namespace std;



void mainhlh()
{

	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	array_view<int>av(10, a);//GPU的计算结构 av存储到显存 根据数据初始化

	parallel_for_each(av.extent, [=](index<1>idx)restrict (amp)//parallel_for_each 算法结构 矩阵计算
	{
		av[idx] += 1; 
	});

	//[=](index<1>idx)restrict (amp)
	//= 直接操作av,没有副本机制
	//index<1>idx 操作每一个元素
	//restrict (amp) 定向到GPU执行


	for (int i = 0; i < 10; i++)
	{
		std::cout << av[i] << endl;

	}


	std::cin.get();

}

//GPU 优势 并发计算
//CPU 单点计算