#include<stdlib.h>
#include<stdio.h>



void main1()
{
	//int num[3][4] = {11,10,9,8,7,6,5,4,3,2,1,0};
	int num[3][4];
	printf("%x", num);//�ڴ��ַ��������

	//��forѭ����ʼ��
	for (int i = 0; i < 12; i++)
	{
		num[i / 4][i % 4] = i + 1;

		//�Եڶ����±�Ϊ��׼
	}

	system("pause");
}
void mainfff()
{
	int a[3][4];
	int num;
	//ˬfor ѭ����ʼ��
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			a[i][j] = i  * 4 + j + 1;//��ѧ��ʽ
			printf("%-6d ", a[i][j]);
		}
		printf("\n");
	}

	getchar();

}