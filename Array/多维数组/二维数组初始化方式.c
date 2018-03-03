#include<stdlib.h>
#include<stdio.h>


void mainuii()
{

	int num[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12}; 

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
			printf("%d,%d,%x,%-10x", num[i][j],*(num[i]+j), *(&num[i][j]), &num[i][j], num[i] + j);
		//&num[i][j]=num[i]+j;
		//num[i][j]=*(num[i]+j)=*(&num[i][j])
		printf("\n");
	}
	printf("\n\n");
	//num[x]代表每一行首元素的地址
	printf("num[0]=%x\nnum[1]=%x\nnum[2]=%x", num[0], num[1], num[2]);
	getchar();
}
void main5()
{
	//全部赋值为0
	//int a[3][4] = { 0 };
	int b[3][4] = { { 1, 2 }, { 5, 6, 7, 8 }, { 9, 10, 11, 12 } };
	//空余的位置补0

	//int b[3][4] = { { 1, 2, 3, 4 } };行坐标可省略，此时有多少数据开辟多少空间
	//列坐标不能省略

	//当声明语句中提供有全部元素的初始值时，第1维的大小可以缺省
	//N维数组 ，用大括号初始化，有确定的元素,只有第一个下标可省略
	printf("%d\n", sizeof(b));
	printf("%x", b);
	

	system("pause");


}