#include<stdio.h>
#include<stdlib.h>


//goto
char goA(char *p)
{
go1:
	printf("%c", *p++);

	if (*p == 0)
		return 0;
	else
	goto go1;

}

//�ݹ�
char Rec(char *p)
{
	if (*p == 0)
		return 0;
	else
	{		
		printf("%c", *p);
		Rec(++p);
	}
}


void main7()
{
	char *pl = "tasklist";
	//Rec(pl);
	goA(pl);
	system("pause");


}



void main6()
{

	char *p = "tasklist";
	p += 3;
	while (*p++!=0)//*p=='\0' ����ѭ��,*p==0
	{
		printf("%c,%x\n", *p,p);
	}

	system("pause");
}

//
//



void main5()
{

	char *p = "tasklist";//�������ַ������׵�ַ��ֵ��p
	printf("%d,%d\n", sizeof(p), sizeof("tasklist"));
	printf("%x\n", &p);
	printf("%x\n", p);

	system(p);//���������ַ������׵�ַ
	system("pause");
}



void main3()
{

//	char str[3] = { 'c', 'a', 'l', 'c' };
// ��ʼֵ�趨��̫��
	char str[5] = { 'c', 'a', 'l', 'c' };

	printf("%x\n", str);

	system("pause");

}




void main4()
{
	//�Ծ�̬�洢����̴߳洢������飬û����ʾ��ʼ������ʽ���ʼ����
	char str[10] = { 'c', 'a', 'l', 'c' };
	//Ĭ��û�г�ʼ�����ַ����0(���ڴ���)

	//char str[5]= { 'c', 'a', 'l', 'c' };
	//�ַ����б���Ҫ��\0,�����ı�־
	//char str[4] = "calc";//û�н�����
	//char str[4] = {'c','a','l''c'};//ͬ�ϣ�û�н�����
	printf("%d\n", sizeof("clac"));//5
	printf("%s\n", str);
	system(str);
	system("pause");
}



void main1()
{
	char str[50] = "notepad";
	printf("%x\n", str);
	printf("%d,%c\n", '\0', '\0');//0,���ַ�
	//  ASCII  '\0' <--> 0
	printf("%d,%c\n", 0, 0);//0,���ַ�
	printf("%d,%c\n", '0', '0');//48,0
	//'0'<-->48
system(str);



	//system("pause");

}