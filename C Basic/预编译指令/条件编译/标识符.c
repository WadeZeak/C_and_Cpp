#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>

#define N 10

void mainA()
{
	//相当于开关,决定执行什么语句
#if N==10
	MessageBoxA(0, "天朝万岁", "123", 0);
	//内嵌木马
#else
	MessageBoxA(0, "China", "China", 0);

#endif

}


#define Ver 'E'

void mainB()
{
#if Ver=='C'
	MessageBoxA(0, "天朝", "天朝", 0);
#elif Ver=='E'
	MessageBoxA(0, "China", "China", 0);
#else
	MessageBoxA(0, "------", "-------", 0);
#endif

}


#define MMM
void mainC()
{

	//相当于开关
//#ifdef MMM  //如果MMM被定义,执行以下语句
//	printf("MMM");
//#endif

#ifndef MMM//MMM没有被定义,执行以下语句
	printf("MMM");
	system("notepad");
#endif

	system("pause");
}





#define print(M) printf("%s\n",#M)// # 将宏的参数转换成字符串字变量


void mainD()
{

char  num= 'W';
int main = 10;
	print(num);
	print(main);
	system("pause");

}


//## 将两个记号粘贴成一个记号 相当于字符的拼接
#define Y(x,y) x##y  
void mainE()
{
	int MyData = 10;
	printf("%d\n", Y(My, Data));//Y(My, Data): My##Data --> MyData
	system("pause");
}


void PrintA()
{
	printf("HelloWorld!!!\n");
	system("pause");
}

void mainF()
{
	Y(Print, A)();//Y(Print, A)  --> PrintA
}


// \(单斜杠) 宏定义中表示换行 后面不能跟注释
#define Run(m)  system(m);   \
                printf("%s",m);

void main()
{
	Run("calc");
	system("pause");
}








