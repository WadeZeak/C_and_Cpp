#include<stdio.h>
#include<stdlib.h>


int FindMaxNum(int *p,int n)//ѡ�񷨻�ȡ���ֵ
{
	int maxnum = p[0];//�ٶ���һ������������
	int maxi = 0;//�������ֵ��±�

	for (int i = 0; i < n; i++)
	{
		if (p[i]>maxnum)//maxnumһֱ��������
		{
			maxnum = p[i];
			maxi = i;
		}
	}
	return maxi;//�����±�
}


void Swap(int *p1, int *p2)//���ݵ�ַ��������
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



	int maxi = FindMaxNum(a, 10);//�ҵ�������
	int maxnum=a[maxi];

	printf("\nMaxNum=%d\n", maxnum);	
	Swap(a, a + maxi);//��������

	//for (int i = 0; i < 10; i++)
	//{
	//	printf("%5d", a[i]);
	//}
	//int secmaxi = FindMaxNum(a+1,9);
	//int secmax = a[secmaxi + 1];
	//if (maxnum != secmax)//�ڶ����ҵ������������һ���ҵ��Ĳ�һ��
	//{
	//	printf("\nSecMaxNum=%d\n", secmax);
	//}
	//


	//30, 10, 78, 78, 22, 63, 50, 78, 20, 11
	//78, 78 ,78, 30, 10,  22, 63, 50, 20, 11

	printf("\n\n\n");

	int i = 1;
	int flag = 0;//�ٶ�������
	int nextmaxi ;
	//	printf("nextmaxi=%d\n", nextmaxi);
	int nextmaxnum ;

	while (i < 10)
	{
	 nextmaxi = FindMaxNum(a + i, 10 - i);
		//	printf("nextmaxi=%d\n", nextmaxi);
	 nextmaxnum = a[nextmaxi + i];
		if (maxnum!=nextmaxnum)//Ѱ��ʣ�µ�������������
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
		printf("�����ڴδ������");
	}


	
	system("pause");
}














