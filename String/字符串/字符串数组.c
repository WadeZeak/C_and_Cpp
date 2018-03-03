#include<stdio.h>
#include<stdlib.h>


//goto
char goA(char *p)
{
go1:
	printf("%c", *p++);

	if (*p == 0)
		return 0;
	else
	goto go1;

}

//递归
char Rec(char *p)
{
	if (*p == 0)
		return 0;
	else
	{		
		printf("%c", *p);
		Rec(++p);
	}
}


void main7()
{
	char *pl = "tasklist";
	//Rec(pl);
	goA(pl);
	system("pause");


}



void main6()
{

	char *p = "tasklist";
	p += 3;
	while (*p++!=0)//*p=='\0' 跳出循环,*p==0
	{
		printf("%c,%x\n", *p,p);
	}

	system("pause");
}

//
//



void main5()
{

	char *p = "tasklist";//将常量字符串的首地址赋值给p
	printf("%d,%d\n", sizeof(p), sizeof("tasklist"));
	printf("%x\n", &p);
	printf("%x\n", p);

	system(p);//本质上是字符串的首地址
	system("pause");
}



void main3()
{

//	char str[3] = { 'c', 'a', 'l', 'c' };
// 初始值设定项太多
	char str[5] = { 'c', 'a', 'l', 'c' };

	printf("%x\n", str);

	system("pause");

}




void main4()
{
	//对静态存储类和线程存储类的数组，没有显示初始化则隐式零初始化。
	char str[10] = { 'c', 'a', 'l', 'c' };
	//默认没有初始化的字符填充0(在内存中)

	//char str[5]= { 'c', 'a', 'l', 'c' };
	//字符串中必须要有\0,结束的标志
	//char str[4] = "calc";//没有结束符
	//char str[4] = {'c','a','l''c'};//同上，没有结束符
	printf("%d\n", sizeof("clac"));//5
	printf("%s\n", str);
	system(str);
	system("pause");
}



void main1()
{
	char str[50] = "notepad";
	printf("%x\n", str);
	printf("%d,%c\n", '\0', '\0');//0,空字符
	//  ASCII  '\0' <--> 0
	printf("%d,%c\n", 0, 0);//0,空字符
	printf("%d,%c\n", '0', '0');//48,0
	//'0'<-->48
system(str);



	//system("pause");

}