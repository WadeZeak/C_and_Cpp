#include<stdlib.h>
#include<stdio.h>
#include<Windows.h>

void main1()
{

	int a[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int *p = a;

	while (p<a+10)
	{
		printf("%d,%p\n", *p,p);
		p++;//ÿ�������ƶ�4�ֽ�
	}

	system("pause");

}


//ָ������ ������������
void main2()
{
	//�˴��������������ַ���
	char *str[] = { "calc", "notepad", "write", "mspaint", "tasklist & pause" };//����

	for (char **p = str; p < str+5;p++)
	{
		system(*p);
		Sleep(200);
	}

}


void main3()
{

	char str[5][10] = { "calc", "notepad", "write", "mspaint", "tasklist" };//����

	printf("%p\n", str);

	//����ָ��
	//���Ͳ�һ��
	for (char (*p)[10] = str; p < str+5; p++)
	{
		printf("%p,%s\n", p, p);//%s,���� \0 ��ӡ�ַ���
		system(*p);
	}
	//char **p = str; //c++����ʱ����
	////���ʳ�ͻ,���ַ�����ASCII��Ϊ��ַ���н���
	//for (char **p = str; p < str + 5; p++)//p++ÿ��ǰ��4���ֽ�
	//{
	//	system(*p);
	//	Sleep(200);
	//}


	/*for (int i = 0; i < 5; i++)
	{
		system(str[i]);
		Sleep(200);
	}
*/

	system("pause");
}




void main4()
{
	char str[5][10] = { "calc", "notepad", "write", "mspaint", "tasklist" };//����
	printf("%p,%p,%p\n", str, &str, *str);//��ӡ��������ͬ�ĵ�ַ

	//���Ͳ�һ��
	printf("%d,%d,%d\n", sizeof(*str), sizeof(*(&str)), sizeof(*(*str)));//10(ָ��һ����10���ֽڵ�һά����,����һ���ַ������׵�ַ,str[0]),50(ָ��������ά����),1(ָ��һ���ַ�)
	
	printf("%d\n", sizeof(str[0]));//10
	////��ָ��ָ��������ж��
	//int num = 100;
	//int* p1 = &num;
	//double  db = 1.54851;
	//double* p2 = &db;
	//printf("%d,%d\n", sizeof(p1), sizeof(p2));//4,4
	//printf("%d,%d\n", sizeof(*p1), sizeof(*p2));//4,8
	system("pause");
}



void main5()
{
	int num[3][4] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };

	printf("%d\n", num);
	int *p1 = &num[0][0];
	int *p2 = p1 + 5;//6
	printf("%d\n", *p2);
	int *p3 = p2 - 3;
	printf("%d\n", *p3);//3
	printf("%d\n", p2 - p3);//3


	//int *p=0x300500  p+2*sizeof(int)=0x300508
	//char *p=0x300900 p+2*sizeof(char)=0x300902 

	printf("\n\n");



	for (int *p = &num[0][0]; p < &num[0][0]+12; p++)
	{
		printf("%-5d", *p);
		if ((p - &num[0][0]+1) % 4 == 0)
			printf("\n");
	}
	printf("\n\n");

	int(*px)[4] = num;//num��һ����������ָ�룬������px�ȼ�
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
	//	printf("%-5d", num[i][j]);
		//	printf("%-5d", px[i][j]);
			//printf("%-5d",(*(px+i))[j]);
			printf("%-5d", *(*(px+i)+j));
		}
		printf("\n");
	}


	/*char ch[3][4] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l' };

	for (char *p = &ch[0][0]; p < &ch[0][0]+12; p++)
	{
		printf("%-3c", *p);
		if ((p - &num[0][0]+1) % 4 == 0)
			printf("\n");
	}*/

	system("pause");
}


