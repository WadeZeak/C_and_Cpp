


#include<stdlib.h>
#include<stdio.h>
#include<string.h>

//数组作为函数参数会退化指针
void printArray(int *p)
{
	printf("\n");
	for (int i = 0; i < 10; i++)
	{

		printf("%d  ", p[i]);
	}

}


void main6()
{


	int arr[10] = { 0 };
	srand((unsigned)time(NULL));
	for (int  i = 0; i < 10; i++)
	{
		arr[i] = rand() % 100;
		printf("%d  ", arr[i]);
	}
	printf("\n");
	//选择排序
	for (int  i = 0; i < 10; i++)
	{
		for (int j = i+1; j <10 ; j++)
		{
			if (arr[i]>arr[j])
			{
				int tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}

	}
	printArray(arr);


	system("pause");
	//shift + delete删除一行
	//crtl + u 小写变大些

}

void main9()
{

	char *p = 'a';
	printf("%d\n",sizeof(p));
	printf("%d\n", sizeof(*p));

	system("pause");
}