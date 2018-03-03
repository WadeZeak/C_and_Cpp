#include<stdlib.h>
#include<stdio.h>



void main1()
{

	//int a[1024*1024];//栈区容量较小

	//无法根据需要分配内存，gcc可以根据需要分配内存 
	//VC数组大小必须常量,gcc可以是变量
	//int num=100;
	//int a[num];

}




//增删改查

//删除数据

int a[10];
int len=10;
void main2()
{

	for (int i = 0; i <len; i++)
	{
		printf("%5d", a[i] = i);//数组初始化并打印
	}

	int num = 3;//指定要删除的数据
	if (a[len - 1] == num)//若需要删除的数据是最后一个数据,直接删除
	{
		len--;
	}
	else
	{
		for (int i = 0; i < len; i++)
		{
			if (a[i] == num)//找到需要删除的数据
			{
				for (int j = i; j < len-1; j++)
				{
					a[j] = a[j + 1];//之后的数据都向前移动,从而实现删除
				}
				len--;//长度减1
				break;
			}
		}
	}
	
	printf("\n\n数据删除后:\n");
	for (int i = 0; i <len; i++)
	{
		printf("%5d", a[i] );
	}

	system("pause");
}


void main3()
{

	int a[10] = { 0 };
	//写C语言时，务必保证程序不出错,偶尔不报错，不代表程序就OK
	//a[11] = 11;溢出
	getchar();
}




void main()
{
	//malloc 只分配内存,不初始化;calloc 可以实现内存清零(内存初始化全部为0)
	int *pm = (int *)malloc(sizeof(int) * 10);
	int *pc = (int *)calloc(10, sizeof(int));

	printf("%p,%p\n", pm, pc);
	
	for (int i = 0; i < 10; i++)
	{
		*pm = i;
		*pc = i;
	}

	getchar();
}