#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>


void mainfjfj()
{

	char str[5] = { '1', 'A', '5', 's', '\0' };
	//�ַ�����û��\0����һֱ���·��ʣ�ֱ������\0Ϊֹ

	char strm[5] = { 'c', 'a', 'l', 'c' ,'\0'};//{ }�����Ž��г�ʼ������Ҫ��ĩβ����\0
	char strx[10] = "notepad";// ""˫���Ž��г�ʼ�������ַ���ĩβ�Զ�����\0
	scanf("%s", strx);//ֻ���ַ������������������
	printf("%s", str);
	system(strm);
	system(strx);
	getchar();

}

void main6541()
{
	int a[3] = { 1, 2, 3 };
	int b[3];
	//�����������ǵ�ַ�����ܽ��и�ֵ
	//��������ַ������⣬���ܽ�������������������Ҫ������в���
	printf("%x,%x\n",&a,&b);
	for (int i = 0; i < 3; i++)
	{
		scanf("%d", &a[i]);
		printf("%d\n", a[i]);
	}


	system("pause");

}