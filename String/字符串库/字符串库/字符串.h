#include<stdlib.h>
#include<stdio.h>
#include<string.h>


//�ַ��������ַ�ʽ
//�ַ�����װ����Ҫ�⺯�� string.h
//����Ҫ�⺯��

struct CString
{
	char *p;//�ַ����׵�ַ
	int reallength;//ʵ�ʳ���  ���������Դ洢���ַ�����
};

typedef struct CString  MyString;//��


//�ַ���,��ʼ��,ɾ��(�ַ����ַ���)����ӡ
//�����ַ������ַ���
//�޸ģ��滻,�޸ģ��ַ�/�ַ�����
//β�����ӣ�����λ�����ӣ��ַ����ַ�����


void Init(MyString *str);//ԭ�ⲻ����ʼ��
void InitWithLength(MyString *str, int length);//���ٳ��ȣ��ڴ�����
void InitWithString(MyString *str, char *cpystr);//��ʼ���������ַ���
void PrintString(MyString *str);//��ӡ�ַ���
void BackAddChar(MyString *str, char c);//β�������ַ�
void BackAddStr(MyString *str, char *newstr);//β�������ַ���
void RunStr(MyString *str);//ִ���ַ���
char *FindFirstChr(MyString *str, char ch);//���ҵ�һ���ַ������ص�ַ
char *FindFirstStr(MyString *str, char *Sstr);//���ҵ�һ��ƥ����ַ����Ĳ������׵�ַ
int DelFirstChr(MyString *str, char const ch);//ɾ���ַ�
int DelFirstStr(MyString *str, char const * const Sstr);//ɾ���ַ���
void AddChr(MyString *str, char const ch,char *pos);//����λ�������ַ�
void AddStr(MyString *str, char const * const Sstr,char *pos);//����λ�������ַ���
void ReplaceChr(MyString *str, char const oldchr, char const newchr);//�滻�ַ�
void ReplaceStr(MyString *str, char const * const oldstr,const char * const newstr);//�滻�ַ���
