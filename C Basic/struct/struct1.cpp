#define _CRT_SECURE_NO_WARNINGS


#include<stdio.h>
#include<stdlib.h>

//结构体 复合类型
struct Birthday
{
	//成员
	int year;
	int month;
	int date;
	
};

struct Test
{
	char *str = (char *)malloc(sizeof(char) * 10);


};
struct Student
{
	char name[10];//10B
	int snum;//4B
	int Math_Score;//4B
	int English_Score;//4B
	int Computer_Score;
	int Total_Score;
	int code;//邮政编码
	char adress[100];
	float height;
	//struct Student *p;//结构体中可以递归定义结构体本身的指针
	//struct Student a;
	//不允许对结构体本身递归定义

	//结构体中可以定义其他结构体变量 
	struct Birthday a;
	
}per2 = { "Tom", 6461946, 90, 90, 100, 280, 341131, "QingDao",50.6f,{3,4,2938} };//定义结构体类型变量   b并初始化1

//定义结构体类型的变量2
struct Student per1;


//结构体数组

struct Student per3[3] = 
{ 
		{ "Zeak", 546641, 85, 85, 85, 280, 654641, "ShangHai", 65.2f, 5, 5, 1997 } ,
		{ "Mark", 564641, 86, 100, 85, 271, 6656, "XiaMen", 48.2f, 5, 8, 1996},
		per2
};

int main()
{	//以结构体变量为单位初始化,整体赋值
	per1= per2;
	gets(per1.name);
	//初始化结构体成员
	per1.snum = 516546;
	per1.a.date = 1;
	per1.a.month = 3;
	per1.a.year = 1994;
	for (int i = 0; i < 3; i++)
	{
		printf("%s\t%d\t%d\t%d\t%d\t%d\t%d\t%s\t%f\t%d/%d/%d", per3[i].name, per3[i].snum,
			per3[i].Math_Score, per3[i].English_Score, per3[i].Computer_Score, per3[i].Total_Score,
			per3[i].code, per3[i].adress, per3[i].height, per3[i].a.date, per3[i].a.month, per3[i].a.year);
		printf("\n\n");
	}
	
	system("pause");
	return 0;
	
	
}