#define _CRT_SECURE_NO_WARNINGS


#include<stdlib.h>
#include<stdio.h>
#include<Windows.h>
#include<locale.h>//���ػ�

void main1a()
{
	char str[10] = { "��" };//һ������ռ�����ֽ�
	printf("%c%c\n", str[0], str[1]);//������������������ӽ�ƴ�Ӻ�������
	printf("%s\n", str);
	getchar();

}



void main2a()
{
	
	MessageBoxA(0, "���ABC", "���ABC", 0);//ָ��խ�ַ�

	MessageBoxW(0, L"���ABC", L"���ABC", 0);//ָ�����ֽ�

	MessageBox(0,L"���ABC", L"���ABC", 0);
	//ʹ�ö��ֽ��ַ��� MessageBoxA
	//ʹ��Unicode�ַ��� MessageBoxW

	MessageBox(0, TEXT("���ABC"), TEXT("���ABC"), 0);//TEXT()����ʵ�ּ���
}




void main3a()
{

	wchar_t wchr = L'��';//�����ֵ����ַ�

	printf("%d\n", sizeof(wchr));

	wchar_t *pwch = L"���쳯����!!";//������ַ�ָ��
	setlocale(LC_ALL,"chs");//�趨���ػ����� zh-CH 

	putwchar(wchr);//��ӡ���ַ�
	_putws(pwch);//��ӡ���ַ���

	wprintf(L"%lc\n", wchr);//ʵ�ֿ��ַ����
	wprintf(L"%ls\n", pwch);//������ַ���


	system("pause");


}


void main4a()
{

	char str[100] = { 0 };
	scanf("%s", str);//�ַ����Ļ�����
	printf("\n%s\n", str);
	system("pause");


}



void main8a()
{
	printf("%c\n", *(stdin->_ptr));//ȡ������������
	printf("%d\n", stdin->_cnt);//���������ж��ٸ��ַ�
	printf("\n\n");

	char chr = getchar();
	printf("\n\n");
	printf("%c\n", *(stdin->_ptr));//ȡ������������
	printf("%d\n", stdin->_cnt);//���������ж��ٸ��ַ�

	putchar(chr);


	chr = getchar();
	printf("\n\n");
	printf("%c\n", *(stdin->_ptr));//ȡ������������
	printf("%d\n", stdin->_cnt);//���������ж��ٸ��ַ�

	putchar(chr);
	system("pause");

	//stdout stdin����Ҫˢ�£��ἰʱ���£��ǻ���
	//file  fflush,ˢ�»�����

	//char str[100] = "12345"; sizeof(str)=100      strlen(str)=5

	//sizeof ��������������κ�ͷ�ļ�
}




int add(int a, int b)
{

	return 10.0;//return����,�Զ�������������ת��
}


void main573()
{


//	printf("%d\n", add(1, 2));
	//�ڼĴ����в�������


	//printf()���������������ת��
	double db = 10.9;
	printf("%d\n",(int)db);



	system("pause");



}

void main()
{
	int num = 10;
	printf("%d,%d", num, num++);
	//getchar();
	exit(0);//�����˳�

	system("pause");

}























