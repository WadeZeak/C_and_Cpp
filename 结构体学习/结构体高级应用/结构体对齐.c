#include<stdlib.h>
#include<stdio.h>


struct info1 //12
{
	char a;//4
	int num;//4
	char c;//4
	
};


//�������
//��������м䣬�����ڴ�ȷ������ҪС
//���������������ͳ�Ա�����
struct info2//16
{
	int sh;//4	
	char ch[9];//9
	//��ĩβ����ֽ�
	char a;	//3 
};


struct info3//20
{
	char a;//4
	int sh;//4
	char ch[9];//12
};


struct info4//24
{
	short a;	//2

	//������������ֽ�
	char ch[9];//14
	double sh;//8
};





struct info5//32
{
	short a;	//8
	double sh;//8
	char ch[9];//16

};








void main1()
{

	//�ṹ������Ĵ�С�ܹ��������������ͳ�Ա�Ĵ�С��������
	//�������ͣ�int,long,double,char,float....

	//	�ṹ��ÿ����Ա����ڽṹ���׵�ַ��ƫ������offset�����ǳ�Ա��С����������������Ҫ���������ڳ�Ա֮���������ֽڣ�internal adding��
	//ƫ������offset��:��Ա�ĵ�ַ��ȥ�ṹ����׵�ַ

	//�ṹ����ܴ�СΪ�ṹ�����������ͳ�Ա��С����������������Ҫ������������ĩһ����Ա֮���������ֽڣ�trailing padding��


	printf("%d\n", sizeof(struct info1));
	printf("%d\n", sizeof(struct info2));
	printf("%d\n", sizeof(struct info3));

	/*struct info2 s2 = {10,"123456",97};
	printf("%d\n", sizeof(struct info2));
	printf("%p\n", &s2);
	printf("%p\n", s2.ch);
	printf("%p\n", &(s2.a))*/;


	//printf("%d\n", sizeof(struct info4));
	//struct info4 avc = {10,"123456",100.0};
	//printf("%p\n", &avc);//24
	//printf("%p\n", &(avc.ch));//2
	//printf("%p\n", &(avc.sh));//14

	printf("%d\n", sizeof(struct info5));

	system("pause");
}



void main2()
{

	struct info3 ss = {10,100,"123456"};
	printf("%p\n", &ss);
	printf("%p,%d\n", &(ss.a));
	printf("%p,%d\n", &(ss.sh));
	printf("%p,%d\n", ss.ch);

	system("pause");
}