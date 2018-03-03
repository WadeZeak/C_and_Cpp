#include<stdlib.h>
#include<stdio.h>
#include<string.h>


//字符串库两种方式
//字符串封装，需要库函数 string.h
//不需要库函数

struct CString
{
	char *p;//字符串首地址
	int reallength;//实际长度  缓冲区可以存储的字符数量
};

typedef struct CString  MyString;//简化


//字符串,初始化,删除(字符，字符串)，打印
//查找字符或者字符串
//修改：替换,修改（字符/字符串）
//尾部增加，任意位置增加（字符，字符串）


void Init(MyString *str);//原封不动初始化
void InitWithLength(MyString *str, int length);//开辟长度，内存清零
void InitWithString(MyString *str, char *cpystr);//初始化并拷贝字符串
void PrintString(MyString *str);//打印字符串
void BackAddChar(MyString *str, char c);//尾部插入字符
void BackAddStr(MyString *str, char *newstr);//尾部插入字符窜
void RunStr(MyString *str);//执行字符串
char *FindFirstChr(MyString *str, char ch);//查找第一个字符并返回地址
char *FindFirstStr(MyString *str, char *Sstr);//查找第一个匹配的字符串的并返回首地址
int DelFirstChr(MyString *str, char const ch);//删除字符
int DelFirstStr(MyString *str, char const * const Sstr);//删除字符串
void AddChr(MyString *str, char const ch,char *pos);//任意位置增加字符
void AddStr(MyString *str, char const * const Sstr,char *pos);//任意位置增加字符串
void ReplaceChr(MyString *str, char const oldchr, char const newchr);//替换字符
void ReplaceStr(MyString *str, char const * const oldstr,const char * const newstr);//替换字符串
