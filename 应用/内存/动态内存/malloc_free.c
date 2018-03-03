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


	free(p);//free只能释放一次

	int *px = p;
	free(px);//报错    已触发了一个断点。
	//同一地址不能释放两次内存

	//p = NULL;
	//if (p == NULL)
	//{
	//	free(p);//free只能释放一次,如果是NULL,可释放多次

	//}
	printf("%x\n", p);
	system("pause");

}