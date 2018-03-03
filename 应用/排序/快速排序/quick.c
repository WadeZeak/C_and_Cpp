#include<stdio.h>
#include<stdlib.h>




void Change(int *pa, int *pb)//根据地址交换两个变量的值
{
	int temp = *pa;
	*pa = *pb;
	*pb = temp;
}



void Show(int *p,int n)//显示数组状态
{
	printf("此时数组的状态\n");
	for (int i = 0; i < n; i++)
	{
		printf("%5d", *(p + i));
	}
	printf("\n\n");
}



void QuickSort(int *p,int left,int right)
{
	printf("\n\n需要处理的子序列\n");
	for (int i = left; i <= right; i++)//从左到右打印要处理子序列
	{
		printf("%5d", p[i]);
	}
	int i = left;
	int j = right + 1;
	if (i < j)//
	{
		do
		{
			do//从头部移动，寻找比基准大的数
			{
				i++;
			} while (p[i]<p[left] && i <= right);



			do//从尾部移动，寻找比基准小的数
			{
				j--;
			} while (p[j] >= p[left] && j>left);


			if (i<j)//实现数据交换，比基准大的移到后面，比基准小的移到前面
			{
				Change(p + i, p + j);
			}
		} while (i<j);

		//Show(p, 10);
		
		Change(p+left, p + j);//将基准移动到相应的位置


		QuickSort(p, left, j - 1);//分割左边
		QuickSort(p, j + 1, right);//分割右边
	}
}






void main()
{

	int a[10] = { 19, 9, 20, 8, 38, 49, 11, 58, 34, 22 };
//	Show(a, 10);//显示数组没有排序的状态
	QuickSort(a, 0, 9);//实现快速排序

	//Show(a, 10);
	system("pause");
}