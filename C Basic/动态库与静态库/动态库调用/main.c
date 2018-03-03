#include<stdlib.h>
#include<stdio.h>
#include<windows.h>




//动态库
//谁都可以调用, 能够更新exe，只用更新dll，可以实现更新
//使用的时候调用,不用的时候释放,节约计算机资源
//动态库可以实现劫持



typedef void(*pmsg)();//简化函数指针
//pmsg 相当于 void(*)()


typedef int(*padd)(int a, int b);

void main()
{
	HMODULE mydll = LoadLibraryA("动态库.dll");//加载动态库

	if (mydll==NULL)
	{
		printf("动态库调用失败!!!");
	}
	else
	{

		pmsg pmsg1;//定义函数指针
		//进行函数类型转换
		pmsg1 = (pmsg)GetProcAddress(mydll, "msg");//获取函数指针地址
		if (pmsg1!=NULL)//找到该函数
		{
			pmsg1();
		}

		padd padd1;
		padd1 = (padd)GetProcAddress(mydll, "add");
		if (padd1!=NULL)
		{
		printf("%d\n",padd1(10, 20));
		}
	}
	FreeLibrary(mydll);

	system("pause");

}