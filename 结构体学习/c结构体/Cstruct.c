#define _CRT_SECURE_NO_WARNINGS

#include<stdlib.h>
#include<stdio.h>
#include<string.h>

//C���Խṹ����C++�Ĳ�ͬ
//C���Խṹ��Ĭ������ȫ����
//C���Խṹ����������������Ϲؼ���struct
//C���Խṹ���ڲ������к���
//C���Խṹû�й���˽��
//C���Խṹû�м̳�

struct MyStruct
{	
	int num1;
	int num2;
};


struct MyStruct mystruct1;


//����  12345.789*123.1458  ˼·�� ��С����Ϊ������֮��������г���
//����


//1234*19

//1   2   3     4       5 
//			    1        9
//     9     18    27   36  45 
// 1   2     3     4    5
// 1  11    21   31    41   45 
//��ǰ��λ��
// 2    3    4    5    5     5   



void GetBigData(char *data1,char *data2)
{

	int len1 = strlen(data1);
	int len2 = strlen(data2);

	int *pres = (int *)malloc(sizeof(int)*(len1 + len2));//���ڱ�����
	memset(pres, 0, sizeof(int)*(len1 + len2));//��ʼ��Ϊ0

	//�۳�
	for (int i = 0; i < len1; i++)
	{

		for (int j = 0; j < len2; j++)
		{
			pres[i+j+1]+=(data1[i] - '0')*(data2[j] - '0');
		}
	}

	//��λ
	for (int i = len1+len2-1; i >=0; i--)
	{
		if (pres[i] >= 10)
		{
			pres[i - 1] += pres[i] / 10;//��ǰ��λ
			pres[i] = pres[i] % 10;//ȡ����λ��
		}		
	}
	int i = 0;

	//����ǰ���0
	while (pres[i] == 0)
	{
		i++;
	}
	char *last = malloc(sizeof(char)*(len1 + len2));



	//ת��Ϊ�ַ���
	int j;
	for ( j = 0; (j < len1+len2)&&(i<len1+len2); j++,i++)
	{
		last[j] = pres[i] + '0';
	}

	last[j] = '\0';
	printf("result=%s\n", last);
	
}



void main()
{

	char str1[100] = { 0 };
	char str2[100] = { 0 };
	printf("����������data1\n");
	scanf("%s", str1);

	printf("����������data2\n");
	scanf("%s", str2);

	printf("%s*%s\n", str1, str2);
	GetBigData(str1, str2);


	system("pause");
}