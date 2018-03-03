#include<stdio.h>
#include<stdlib.h>


int FindMaxNum(int *p,int n)//选择法获取最大值
{
	int maxnum = p[0];//假定第一个数字是最大的
	int maxi = 0;//最大的数字的下标

	for (int i = 0; i < n; i++)
	{
		if (p[i]>maxnum)//maxnum一直是最大的数
		{
			maxnum = p[i];
			maxi = i;
		}
	}
	return maxi;//返回下标
}


void Swap(int *p1, int *p2)//根据地址交换数据
{
	*p1 = (*p1) ^ (*p2);
	*p2 = (*p1) ^ (*p2);
	*p1 = (*p1) ^ (*p2);
}





int FindSecMaxNum()
{



}





//   30   10    5    8   22   63   50   78   20   11

//78      10    5    8   22   63   50   30   20   11




void main2()
{
	int a[10] = { 30, 10, 78, 78, 78, 78, 50, 78, 20, 11 };
	for (int i = 0; i < 10; i++)
	{
		printf("%5d", a[i]);
	}



	int maxi = FindMaxNum(a, 10);//找到最大的数
	int maxnum=a[maxi];

	printf("\nMaxNum=%d\n", maxnum);	
	Swap(a, a + maxi);//交换数据

	//for (int i = 0; i < 10; i++)
	//{
	//	printf("%5d", a[i]);
	//}
	//int secmaxi = FindMaxNum(a+1,9);
	//int secmax = a[secmaxi + 1];
	//if (maxnum != secmax)//第二次找到的最大的数与第一次找到的不一样
	//{
	//	printf("\nSecMaxNum=%d\n", secmax);
	//}
	//


	//30, 10, 78, 78, 22, 63, 50, 78, 20, 11
	//78, 78 ,78, 30, 10,  22, 63, 50, 20, 11

	printf("\n\n\n");

	int i = 1;
	int flag = 0;//假定不存在
	int nextmaxi ;
	//	printf("nextmaxi=%d\n", nextmaxi);
	int nextmaxnum ;

	while (i < 10)
	{
	 nextmaxi = FindMaxNum(a + i, 10 - i);
		//	printf("nextmaxi=%d\n", nextmaxi);
	 nextmaxnum = a[nextmaxi + i];
		if (maxnum!=nextmaxnum)//寻找剩下的数字中最大的数
		{
			flag = 1;
			break;
		}
		Swap(a + i, a + nextmaxi+i);
		i++;
	}

	printf("\n\n\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%5d", a[i]);
	}

	if (flag==1)
	{
		printf("\nSecMaxNum=%d\n", nextmaxnum);
	}
	else
	{
		printf("不存在次大的数字");
	}


	
	system("pause");
}














