#include <iostream>  
#include <amp.h>
#include <WinBase.h>

#define COUNT 100000

float nickName_GPU[COUNT];
float nickName_CPU[COUNT];


double rungpu(int num)		 restrict(amp)//只能在GPU内部执行
{
	double temp = 0;
	for (int i = 0; i < num; i++)
	{
		temp += i;
	}

	return temp;

}
double runcpu(int num)		 restrict(cpu)	 //只能在CPU内部执行
{
	double temp = 0;
	for (int i = 0; i < num; i++)
	{
		temp += i;
	}
	return temp;

}
double runcpugpu(int num)		 restrict(amp, cpu) //混合执行
{
	double temp = 0;
	for (int i = 0; i < num; i++)
	{
		temp += i;
	}
	return temp;

}


int main6()
{

	LARGE_INTEGER freq;
	LARGE_INTEGER strt;
	LARGE_INTEGER ed;

	QueryPerformanceFrequency(&freq);
	QueryPerformanceCounter(&strt);

	double dx[1] = { 0.0 };
	double  db = 0.0;

	concurrency::array_view<double> myview(1, dx);
	parallel_for_each(myview.extent,
		[=](concurrency::index<1> idx) restrict(amp)
	{
		myview[idx] += rungpu(20000000);
	});



	myview.synchronize();//显式等待GPU计算完成并将数据打回内存
	printf("%f\n", dx[0]);
	QueryPerformanceCounter(&ed);
	printf("GPU耗时: %d 毫秒\r\n", (ed.QuadPart - strt.QuadPart) * 1000 / freq.QuadPart);


	QueryPerformanceCounter(&strt);
	printf("%f\n", runcpu(20000000));

	QueryPerformanceCounter(&ed);
	printf("CPU耗时: %d 毫秒\r\n", (ed.QuadPart - strt.QuadPart) * 1000 / freq.QuadPart);
	puts("测试结束");


	getchar();
	return 0;



}



int main(void)
{
	LARGE_INTEGER freq;
	LARGE_INTEGER strt;
	LARGE_INTEGER ed;
	QueryPerformanceFrequency(&freq);
	QueryPerformanceCounter(&strt);

	concurrency::array_view<float> myView(COUNT, nickName_GPU); //将数据打入显存  

	concurrency::parallel_for_each(myView.extent, [=](concurrency::index<1> idx) restrict(amp)
	{
		for (int i = 0; i < COUNT/10; i++)
		{
			myView[idx] = (myView[idx] + 0.1f) / 2.3f;
		}

	});


	myView.synchronize();//显式等待GPU计算完成并将数据打回内存  

	QueryPerformanceCounter(&ed);
	printf("GPU耗时: %d 毫秒\r\n", (ed.QuadPart - strt.QuadPart) * 1000 / freq.QuadPart);
	QueryPerformanceCounter(&strt);


	for (int idx = 0; idx < COUNT; idx++)
	{
		for (int i = 0; i < COUNT/10; i++)
		{
			nickName_CPU[idx] = (nickName_CPU[idx] + 0.1f) / 2.3f;
		}
	}
	QueryPerformanceCounter(&ed);
	printf("CPU耗时: %d 毫秒\r\n", (ed.QuadPart - strt.QuadPart) * 1000 / freq.QuadPart);


	for (int idx = 0; idx < COUNT; idx++)
	{
		if (nickName_CPU[idx] != nickName_GPU[idx])
		{
			puts("CPU和GPU的计算结果不相符！");
			getchar();
			return 0;
		}
	}
	puts("测试结束");


	getchar();
	return 0;
}
