#include<stdlib.h>
#include<stdio.h>


//数组->指针  指针数组->二级指针  二维数组->数组指针

int searchmax1(int num[3][4])//数组传递没有副本机制
{

	//printf("search_num=%d\n", sizeof(num));//4

	//int xnum[3][4]={ 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	//num = xnum;
	//printf("search_xnum=%d\n", sizeof(xnum));//48

	//选择排序法
	int max = num[0][0];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (num[i][j] > max)
				max = num[i][j];
		}
	}


	return max;

}




int searchmax2(int (*p)[4])
{

	int max = p[0][0];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (p[i][j] > max)
				max = p[i][j];
		}
	}


	return max;




}


int searchmin(int (*p)[4])
{


	int min= **p;//第一个元素的大小  *(*(p+0)+0)
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (*((*p+i)+j) < min)
				min = *((*p + i) + j);
		}
	}


	return min;


}


void main6()
{


	int num[3][4] = { 1, 2, -3, 4, 15, 6, 7, 8, 9, 10, 11, 12 };
	printf("main_num=%d\n", sizeof(num));//48
	printf("%d,%d,%d\n", sizeof(*num), sizeof(*(&num)), sizeof(*(*num)));//16,48,4
	//sizeof(num)==sizeof(*(&num))
	//printf("%d\n",searchmax1(num));
	//printf("%d\n", searchmax2(num));
	printf("%d\n", searchmin(num));
	system("pause");
}