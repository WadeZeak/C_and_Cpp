#define _CRT_SECURE_NO_WARNINGS

#include<stdlib.h>
#include<stdio.h>

//����t�����г�Ա����ͬһ���ڴ�ռ䣬�����Ḳ��
//�ռ��С�����ı���ռ�õ��ڴ�

//���ܶԹ�����������г�ʼ��
//���ܽ������������Ϊ�����������ߺ�������ֵ
union score
{
	char grade;
	int point;

}s;

struct student
{
	char *name;
     union score w;
}t;

void main()
{
	//intel ϵ��CPU ������
	//266    0A 01 00 00(�ڴ���������)   ������00 00 01 0A
	
	t.name = (char *)malloc(sizeof(char) * 10);
	gets(t.name);
	t.w.grade = 'A';
	t.w.point = (int)0xFFFFFFF1;
	printf("%s%c\t%d", t.name,t.w.grade,t.w.point);
   /* s.grade = 65;
	s.point = 321;

	printf("%x,%x\n", &s.grade, &s.point);*/


	printf("%c,%d", s.grade, s.point);


	system("pause");

}