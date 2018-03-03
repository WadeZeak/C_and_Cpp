//auto 局部变量（自动储存）
#define   自动	  auto 
//break无条件退出程序最内层循环
#define   中断	 break
//case   switch语句中选择项
#define  情况  case
//char单字节整型数据
#define  字符  char
//const定义不可更改的常量值
#define  固定  const
//continue中断本次循环，并转向下一次循环
#define  继续  continue
//default switch语句中的默认选择项
#define  默认  default
//do  用于构成do.....while循环语句
#define   执行  do
//double定义双精度浮点型数据
#define  双精度浮点型数据  double
//else构成if.....else选择程序结构
#define   否则 else
//enum枚举
#define    枚举   enum
//extern在其它程序模块中说明了全局变量
#define   外部   extern
//float定义单精度浮点型数据
#define  单精度浮点型  float
//for构成for循环语句
#define  正当 for  
//goto构成goto转移结构
#define  跳转  goto
//if构成if....else选择结构
#define  如果  if
//int基本整型数据
#define  整数 int
//long长整型数据
#define  长整数 long
//registerCPU内部寄存的变量
#define  寄存器  register
//return用于返回函数的返回值
#define  返回 return
//short短整型数据
#define  短整数  short
//signed有符号数
#define  有符号  signed
//sizoef计算表达式或数据类型的占用字节数
#define  求大小 sizeof
//static定义静态变量
#define  静态   static
//struct定义结构类型数据
#define  结构体  struct
//switch构成switch选择结构
#define  选择  switch
//typedef重新定义数据类型
#define  重定义  	    typedef
//union联合类型数据
#define  联合  union
//unsigned定义无符号数据
#define  无符号 unsigned
//void定义无类型数据
#define  空类型 void 
//volatile该变量在程序中执行中可被隐含地改变
#define  隐式变量  volatile
//while用于构成do...while或while循环结构
#define   当    while

#define  主函数 main
#define  打印  printf
#define  执行 system
#include<stdlib.h>
#define 记事本  notepad(); 
#define 进程管理 tasklist();
#define  等待   getchar();

void notepad()
{
	system("notepad");
}

void  tasklist()
{
	system("tasklist");

}