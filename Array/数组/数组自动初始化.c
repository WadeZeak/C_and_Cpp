#include<stdlib.h>
#include<stdio.h>


void mainss()
{
	//int num[10] = { 0, 1, 2, 3, 4, 5, 6, 7,9 };
	//等价于对每一个元素进行赋值，自动进行数据转换
	//int num[10] = {0,1,2,3,4,5,6,7};
	//多余的部分全部填充0
	//double num[10] = { 1, 2, 3, 4 };
	//int num[] = {1,2};
	//元素的大小已经确定，可以省略数组下标
	// int num[]={}; 
	//无法确定元素的个数
	int num[10] = { 0 };
	//每一个元素都是0
	printf("%x", &num);
	
	getchar();

}