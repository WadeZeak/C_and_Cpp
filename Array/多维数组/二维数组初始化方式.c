#include<stdlib.h>
#include<stdio.h>


void mainuii()
{

	int num[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12}; 

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
			printf("%d,%d,%x,%-10x", num[i][j],*(num[i]+j), *(&num[i][j]), &num[i][j], num[i] + j);
		//&num[i][j]=num[i]+j;
		//num[i][j]=*(num[i]+j)=*(&num[i][j])
		printf("\n");
	}
	printf("\n\n");
	//num[x]����ÿһ����Ԫ�صĵ�ַ
	printf("num[0]=%x\nnum[1]=%x\nnum[2]=%x", num[0], num[1], num[2]);
	getchar();
}
void main5()
{
	//ȫ����ֵΪ0
	//int a[3][4] = { 0 };
	int b[3][4] = { { 1, 2 }, { 5, 6, 7, 8 }, { 9, 10, 11, 12 } };
	//�����λ�ò�0

	//int b[3][4] = { { 1, 2, 3, 4 } };�������ʡ�ԣ���ʱ�ж������ݿ��ٶ��ٿռ�
	//�����겻��ʡ��

	//������������ṩ��ȫ��Ԫ�صĳ�ʼֵʱ����1ά�Ĵ�С����ȱʡ
	//Nά���� ���ô����ų�ʼ������ȷ����Ԫ��,ֻ�е�һ���±��ʡ��
	printf("%d\n", sizeof(b));
	printf("%x", b);
	

	system("pause");


}