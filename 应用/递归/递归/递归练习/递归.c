#include<stdlib.h>
#include<stdio.h>



//�ݹ��ж�
int a[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

int Isincre(int i)
{
	if (i==8)
		return a[i]<a[i+1];
	else 
	{
		return (a[i] < a[i + 1]) && Isincre(i + 1);
	}
}



void main4()
{

	int flag = Isincre(0);
	if (flag == 1)
	{
		printf("�����ǵ�����\n");
	}
	else
	{
		printf("���ݷǵ���\n");
	}
	system("pause");


}





//�ж������Ƿ����
void main3()
{
	int a[10] = { 0, 1, 2, 3, 4100, 5, 6, 7, 8, 9 };
	int flag = 1;//����,�ٶ������ǵ�����
	for (int i = 0; i < 9; i++)
	{
		if (a[i]>a[i + 1])
			flag = 0;
	}

	if (flag==1)
	{
		printf("�����ǵ�����\n");
	}
	else
	{
		printf("���ݷǵ���\n");
	}
	system("pause");


}