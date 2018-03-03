#include<stdlib.h>
#include<stdio.h>
#include<time.h>


//VC只是建议,g++强制
//volatitle 从内存中读取 防止变量被修改而不知道
void main1()
{
	time_t start, end;
	time(&start);//获取时间,传给start
	double res = 0;

	//register 请求编译器尽可能的将变量存在CPU内部寄存器中，而不是通过内存寻址访问，以提高效率
	for (register int i = 0; i < 3000000000; i++)//从CPU寄存器读取i的值，保证速度  
	{
		res += i;//自动进行数据类型转换
	}
	time(&end);
	printf("消耗的时间:%fs\n", difftime(end, start));

	//块语句
	//{
	//	time_t start, end;
	//	time(&start);//获取时间,传给start
	//	double res = 0;
	//	for (volatile int i = 0; i < 3000000000; i++)//volatitle 强制每次从内存中读取,可实现数据的更改
	//	{
	//		res += i;//自动进行数据类型转换
	//	}
	//	time(&end);

	//	printf("volatitle消耗的时间:%fs\n", difftime(end, start));
	//	

	//}

	printf("%lf\n", res);
	system("pause");

}



void main()
{


	time_t start, end;
	time(&start);//获取时间,传给start
	double res = 0;
	for (volatile int i = 0; i < 3000000000; i++)//volatitle 强制每次从内存中读取,可实现数据的更改
	{
		res += i;//自动进行数据类型转换
	}
	time(&end);

	printf("volatitle消耗的时间:%fs\n", difftime(end, start));
	printf("%lf\n", res);
	system("pause");



}