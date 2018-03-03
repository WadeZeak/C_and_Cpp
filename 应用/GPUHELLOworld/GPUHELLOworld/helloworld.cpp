#include<amp.h>
#include<iostream>


using namespace concurrency;
using namespace std;



void mainhlh()
{

	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	array_view<int>av(10, a);//GPU�ļ���ṹ av�洢���Դ� �������ݳ�ʼ��

	parallel_for_each(av.extent, [=](index<1>idx)restrict (amp)//parallel_for_each �㷨�ṹ �������
	{
		av[idx] += 1; 
	});

	//[=](index<1>idx)restrict (amp)
	//= ֱ�Ӳ���av,û�и�������
	//index<1>idx ����ÿһ��Ԫ��
	//restrict (amp) ����GPUִ��


	for (int i = 0; i < 10; i++)
	{
		std::cout << av[i] << endl;

	}


	std::cin.get();

}

//GPU ���� ��������
//CPU �������