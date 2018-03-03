#include<stdlib.h>
#include<stdio.h>
#include"Windows.h"
#include"detours.h" //必须包含"Windows.h"
#pragma comment (lib, "detours.lib")
//express 体验版 不能源码级别劫持，也不能全局劫持

//<>直接从系统寻找
//" "先从当前目录寻找，再从系统寻找

//
//static int jian(int a, int b)
//{
//	return a - b;
//}
//
//
//static int cheng(int a, int b)
//{
//	return a*b;
//}
//
//static int chu(int a, int b)
//{
//	return a / b;
//
//}
//
//static int jia(int a, int b)//static 只能在本C文件中适应
//{
//	//printf("%d+%d=%d\n", a, b, a + b);
//
//	return a + b;
//
//}
//

//int(*p)(int, int) = jia; 函数指针

//使用静态库来实现

#pragma comment(lib,"静态库.lib")
#include"js.h"

//函数指针数组
static int(*pold[4])(int, int) = { jia, jian, cheng, chu };//保存原来的位置



static int newjian(int a, int b)
{
	printf("%d-%d=%d\n", a, b, a - b);
	return a - b;
}


static int newcheng(int a, int b)
{
	printf("%d*%d=%d\n", a, b, a * b);
	return a*b;
}

static int newchu(int a, int b)
{
	printf("%d/%d=%d\n", a, b, a / b);
	return a / b;

}

static int newjia(int a, int b)//static 只能在本C文件中适应
{
	printf("%d+%d=%d\n", a, b, a + b);

	return a + b;

}

static int(*pnew[4])(int,int) = {newjia,newjian,newcheng,newchu};

//开始拦截
void Hook()
{

	DetourRestoreAfterWith();//恢复原来状态,
	DetourTransactionBegin();//拦截开始
	DetourUpdateThread(GetCurrentThread());//刷新当前线程
	//这里可以连续多次调用DetourAttach，表明HOOK多个函数
	
	for (int i = 0; i < 4; i++)
	{
		
		printf("成功劫持%d\n", i);
		DetourAttach((void **)&pold[i], pnew[i]);//实现函数拦截
	}
	DetourTransactionCommit();//拦截生效

}

//取消拦截
void UnHook()
{


	DetourTransactionBegin();//拦截开始
	DetourUpdateThread(GetCurrentThread());//刷新当前线程
	//这里可以连续多次调用DetourDetach,表明撤销多个函数HOOK
	for (int i = 0; i < 4; i++)
	{
		DetourDetach((void **)&pold[i], pnew[i]);
	//撤销拦截函数
	}
	DetourTransactionCommit();//拦截生效
}


void main()
{

	//printf("%d\n", jia(3, 4));

	/*for (int i = 0; i < 4; i++)
	{
		
		printf("%d\n", pold[i](3, 4));
	}
*/
	printf("%d,%p\n", jia(20, 4),jia);
	printf("%d\n", jian(20, 4));
	printf("%d\n", cheng(20, 4));
	printf("%d\n", chu(20, 4));

	Hook();
	printf("\n\n劫持之后\n");
	printf("%d,%p\n", jia(20, 4),jia);
	printf("%d\n", jian(20, 4));
	printf("%d\n", cheng(20, 4));
	printf("%d\n", chu(20, 4));
	system("pause");
}









void change(int(*px)(int, int))//函数有副本机制，不是同一个变量
{
	printf("change=%p", &px);
	px = jian;
}

//通过二级指针改变函数指针的指向
void change1(int(** ppx)(int, int))//传递函数指针的地址
{

	*ppx = jian;
}

void maintxt()
{
   
	int(*px)(int, int) = jia;
	printf("%d", px(3, 4));
	//printf("main=%p", &px);
	change1(&px);//传递地址，修改一个指针变量

	printf("\n%d", px(3, 4));//3-4=-1
	getchar();

}