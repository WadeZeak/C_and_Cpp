#include<stdlib.h>
#include<stdio.h>

void main()
{

	int *p = (int *)malloc(10 * sizeof(int));
	printf("%x\n", p);
	for (int i = 0; i<10 ; i++)
	{
		*(p+i) = i;
		printf("%d\t",*(p+i));
	}


	free(p);//freeֻ���ͷ�һ��

	int *px = p;
	free(px);//����    �Ѵ�����һ���ϵ㡣
	//ͬһ��ַ�����ͷ������ڴ�

	//p = NULL;
	//if (p == NULL)
	//{
	//	free(p);//freeֻ���ͷ�һ��,�����NULL,���ͷŶ��

	//}
	printf("%x\n", p);
	system("pause");

}