#include<stdlib.h>
#include<stdio.h>

//头文件存放声明

struct data
{
	int *p;//保存数组的起始点
	int  length;//保存数组长度，即元素的个数
	int stat;//表示有序或者无序  0代表无序,1代表从小到大,2代表从大到小
	int reallength;//数组实际长度
};

struct findres
{
	int **pp;
	int length;

};


//实现数组增、删、改、查、排序、插入

void init(struct data *pdata);//初始化
void reinit(struct data *pdata);//使用后初始化

void addobject(struct data *pdata, int num);//增加一个元素
void addobjects(struct data *pdata, int *pnum, int n);//增加一个数组

int *finddata(struct data *dpada, int num);//返回找到的一个的数据的地址
struct findres finddallata(struct data *pdada, int num);//返回一片内存,包含所有找到的数据的地址

void deleteone(struct data *pdata, int num);//删除一个找到的数据
void deleteall(struct data *pada, int num);//删除所有找到的数据

void insert(struct data *pdata, int num, int insertnum, int fb);//插入数据,fb代表前面插入还是后面插入
       //fb=0，后面插入;fb=1，后面插入



void change(struct data *pdata, int oldnum, int newnum);//实现数据修改

void sort(struct data *pdata, int obj);//排序,obj=0,从小到大;obj=1，从大到小

void printall(struct data *pdata);//打印数组

