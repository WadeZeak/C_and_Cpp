#include<stdlib.h>
#include<stdio.h>



void main1()
{

	//int a[1024*1024];//ջ��������С

	//�޷�������Ҫ�����ڴ棬gcc���Ը�����Ҫ�����ڴ� 
	//VC�����С���볣��,gcc�����Ǳ���
	//int num=100;
	//int a[num];

}




//��ɾ�Ĳ�

//ɾ������

int a[10];
int len=10;
void main2()
{

	for (int i = 0; i <len; i++)
	{
		printf("%5d", a[i] = i);//�����ʼ������ӡ
	}

	int num = 3;//ָ��Ҫɾ��������
	if (a[len - 1] == num)//����Ҫɾ�������������һ������,ֱ��ɾ��
	{
		len--;
	}
	else
	{
		for (int i = 0; i < len; i++)
		{
			if (a[i] == num)//�ҵ���Ҫɾ��������
			{
				for (int j = i; j < len-1; j++)
				{
					a[j] = a[j + 1];//֮������ݶ���ǰ�ƶ�,�Ӷ�ʵ��ɾ��
				}
				len--;//���ȼ�1
				break;
			}
		}
	}
	
	printf("\n\n����ɾ����:\n");
	for (int i = 0; i <len; i++)
	{
		printf("%5d", a[i] );
	}

	system("pause");
}


void main3()
{

	int a[10] = { 0 };
	//дC����ʱ����ر�֤���򲻳���,ż������������������OK
	//a[11] = 11;���
	getchar();
}




void main()
{
	//malloc ֻ�����ڴ�,����ʼ��;calloc ����ʵ���ڴ�����(�ڴ��ʼ��ȫ��Ϊ0)
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