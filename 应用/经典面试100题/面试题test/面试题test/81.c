
#include<stdio.h>
#include<stdlib.h>
//
//int Compare(int a[], int n)
//{
//	if (n==1)
//		return 1;
//	else
//	{
//	return 	Compare(a, n - 1) && Compare(a, n - 2);
//		return  (a[n] > a[n - 1]);
//	}
//}

int Compare(int a[], int n)
{
	if (n == 1)
		return 1;
	if (n  == 2)
	return a[n - 1] > a[n - 2];
	return Compare(a, n - 1) && (a[n - 1] >a[n - 2]);
}







void main()
{

	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int flag = Compare(a, 10);
	if (flag == 1)
		printf("数组是递增数组\n");
	else
	{
		printf("False\n");
	}

	system("pause");

}