#include<stdio.h>


int add(int a, int b)
{
	return a + b;

}


void run()
{
	printf("run/n");
}

void main()
{

	int(*p)(int,int) = add;

	void(*pr)() = run;


	 printf("%d\n",p(10, 20));
	 printf("%d\n", (*p)(10, 20));//编译器会将*p解析为p
	 printf("%d\n", (*************p)(10, 20));
	 printf("%d\n", (&(*************p))(10, 20));	//只能加一次取地址,同时必须有* 而*可以随便加

	 //不能直接取函数的地址执行

	 printf("%p,%p,%p\n", p, *p, &p);//取函数的地址 就是取代码即将执行的入口点	表示加载函数	C语言内嵌asm时需要
	 printf("%p,%p,%p\n", pr, *pr ,&pr);

	 //在一些老版本的编译器里，&p，*p，p一样

	 getchar();
  
}