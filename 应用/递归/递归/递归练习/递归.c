#include<stdlib.h>
#include<stdio.h>



//递归判断
int a[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

int Isincre(int i)
{
	if (i==8)
		return a[i]<a[i+1];
	else 
	{
		return (a[i] < a[i + 1]) && Isincre(i + 1);
	}
}



void main4()
{

	int flag = Isincre(0);
	if (flag == 1)
	{
		printf("数据是递增的\n");
	}
	else
	{
		printf("数据非递增\n");
	}
	system("pause");


}





//判断数据是否递增
void main3()
{
	int a[10] = { 0, 1, 2, 3, 4100, 5, 6, 7, 8, 9 };
	int flag = 1;//打标记,假定数据是递增的
	for (int i = 0; i < 9; i++)
	{
		if (a[i]>a[i + 1])
			flag = 0;
	}

	if (flag==1)
	{
		printf("数据是递增的\n");
	}
	else
	{
		printf("数据非递增\n");
	}
	system("pause");


}