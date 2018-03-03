#define _CRT_SECURE_NO_WARNINGS

#include<stdlib.h>
#include<stdio.h>

//共用t体所有成员共用同一段内存空间，变量会覆盖
//空间大小以最大的变量占用的内存

//不能对共用体变量进行初始化
//不能将共用体变量作为函数参数或者函数返回值
union score
{
	char grade;
	int point;

}s;

struct student
{
	char *name;
     union score w;
}t;

void main()
{
	//intel 系列CPU 逆序存放
	//266    0A 01 00 00(内存中逆序存放)   正常：00 00 01 0A
	
	t.name = (char *)malloc(sizeof(char) * 10);
	gets(t.name);
	t.w.grade = 'A';
	t.w.point = (int)0xFFFFFFF1;
	printf("%s%c\t%d", t.name,t.w.grade,t.w.point);
   /* s.grade = 65;
	s.point = 321;

	printf("%x,%x\n", &s.grade, &s.point);*/


	printf("%c,%d", s.grade, s.point);


	system("pause");

}