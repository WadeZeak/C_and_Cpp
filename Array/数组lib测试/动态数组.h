#include<stdlib.h>
#include<stdio.h>

//ͷ�ļ��������

struct data
{
	int *p;//�����������ʼ��
	int  length;//�������鳤�ȣ���Ԫ�صĸ���
	int stat;//��ʾ�����������  0��������,1�����С����,2����Ӵ�С
	int reallength;//����ʵ�ʳ���
};

struct findres
{
	int **pp;
	int length;

};


//ʵ����������ɾ���ġ��顢���򡢲���

void init(struct data *pdata);//��ʼ��
void reinit(struct data *pdata);//ʹ�ú��ʼ��

void addobject(struct data *pdata, int num);//����һ��Ԫ��
void addobjects(struct data *pdata, int *pnum, int n);//����һ������

int *finddata(struct data *dpada, int num);//�����ҵ���һ�������ݵĵ�ַ
struct findres finddallata(struct data *pdada, int num);//����һƬ�ڴ�,���������ҵ������ݵĵ�ַ

void deleteone(struct data *pdata, int num);//ɾ��һ���ҵ�������
void deleteall(struct data *pada, int num);//ɾ�������ҵ�������

void insert(struct data *pdata, int num, int insertnum, int fb);//��������,fb����ǰ����뻹�Ǻ������
       //fb=0���������;fb=1���������



void change(struct data *pdata, int oldnum, int newnum);//ʵ�������޸�

void sort(struct data *pdata, int obj);//����,obj=0,��С����;obj=1���Ӵ�С

void printall(struct data *pdata);//��ӡ����

