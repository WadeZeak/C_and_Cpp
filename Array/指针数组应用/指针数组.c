#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<Windows.h>


void main1()
{

	int a[10] = { 0 };
	time_t ts;
	unsigned int randdata = time(&ts);//��ȡʱ��ת��Ϊ�޷�������
	srand(randdata);//���������
	int *p[10];//ָ�����飬�����е�Ԫ���ǵ�ַ
	for (int i = 0; i < 10; i++)
	{
		p[i] = &a[i];//ֻ���Ӧÿһ��Ԫ�صĵ�ַ
	}

	while (1)
	{
		for (int i = 0; i < 10; i++)
		{
			a[i] = rand() % 1000;
			printf("%d\n", a[i]);//��ӡ����
		}

		Sleep(5000);
		printf("\n");
		for (int j = 0; j < 10; j++)
		{

			if (*p[j] < 500)
				*p[j] += 100;
			printf("%d\n", a[j]);
		}

		Sleep(5000);

		printf("\n\n");
	}

	system("pause");
}




void main2()
{

	char *p[] = { "calc", "notepad", "mspaint", "write", "tasklist & pause" };

	int n = sizeof(p) / sizeof(char *);
	for (int i = 0; i < n; i++)
	{
		printf("%s\n", p[i]);
		system(p[i]);
		Sleep(2000);
	}


	
}

static int jia(int a,int b)//static ֻ���ڱ�C�ļ�����Ӧ
{
	//printf("%d+%d=%d\n", a, b, a + b);

	return a + b;

}

static int jian(int a, int b)
{
	return a - b;
}


static int cheng(int a,int b)
{
	return a*b;
}

static int chu(int a, int b)
{
	return a / b;

}


void main3()
{

	//��������һ������ָ��
	int(*p)(int a, int b) = jia;//�洢�����ĵ�ַ
	printf("%d\n", p(1, 2));
	p = jian;
	printf("%d\n", p(1, 2));
	system("pause");
}





//����ָ������
//�������;���һ��
//���������ַ
void main4()
{
	//int * a[10];ָ������

	int(*p[4])(int a, int b) = {jia,jian,cheng,chu};

	for (int i = 0; i < 4; i++)
	{
		printf("%d\n", p[i](10, 2));
	}


	system("pause");
}