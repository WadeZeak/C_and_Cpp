#include"1.h"


//λ��
struct weiyu
{
	int num : 3;//3λ������λ
	char ch : 4;
	char chr :4;//4λ������λ
};



enum ABC
{
	����=3,ʦ��=1
};


//C���Խṹ�岻�ܰ���������ֻ�ܰ�������,���ǿɰ�������ָ��
struct info
{
	int num;
	char str[100];
	int(*p)(int a, int b);//����ָ��
};

typedef struct  info Info;
//�����ṹ������ʹ��==��!=�����е�����

void main1()
{

	Info info1 = { 1,"123" };//	//�ṹ��ֻ���ڳ�ʼ��ʱ���и�ֵ
	Info info2;
	info2 = info1;
	(&info2)->num = 100;
//(*&info2).num
	//info2 = { 2, "345" };//����
	printf("%d,%s\n", info2.num, info2.str);

	system("pause");
}


void main()
{
	struct weiyu AAA;
	AAA.ch = 20;
	//10100
	printf("%d\n", AAA.ch);//0100 4  ��ȡ4λ
	printf("%d\n", sizeof(AAA));//8
	system("pause");


}