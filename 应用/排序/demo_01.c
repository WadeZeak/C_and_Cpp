


#include<stdlib.h>
#include<stdio.h>
#include<string.h>

//������Ϊ�����������˻�ָ��
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
	//ѡ������
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
	//shift + deleteɾ��һ��
	//crtl + u Сд���Щ

}

void main9()
{

	char *p = 'a';
	printf("%d\n",sizeof(p));
	printf("%d\n", sizeof(*p));

	system("pause");
}