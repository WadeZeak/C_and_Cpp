#define _CRT_SECURE_NO_WARNINGS

#include<stdlib.h>
#include<stdio.h>

//һ��һ����֧,��Ҫ����break
//����ִ�ж����֧,����Ҫbreak




void main1()
{

	int num;
	scanf("%d",&num);
	printf("%d\n", num);

	//���������غ�
	switch (num)
	{
		//switch ���κη�֧����ƽ�ȵ�
		//case �൱һ������(���)������Ҫ��ʱ����ʼִ�У�ֱ������breakֹͣ
	case 10 :
		printf("˾��");
		break;
	case 9:
		printf("����");
		break;
	case 8:
		printf("ʦ��");
		//break;
	case 7:
		printf("�ó�");
		//break;
	case 6:
		printf("�ų�");
		//break;
	case 5:
		printf("Ӫ��");
	case 4:
		printf("����");
		//break;
	case 3:
		printf("�ų�");
		break;
	case 2:
		printf("�鳤");
		//break;
	case 1 :
		printf("���");
		break;
	case 0:
	case -1:
		printf("Hello World");
		break;
		//���Բ�����defealt��֧,Ҳ���Խ�������ײ�
		//default������������
	default :
		printf("�������");
		break;
	}


	system("pause");



}