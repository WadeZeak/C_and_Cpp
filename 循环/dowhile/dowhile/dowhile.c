#include<stdlib.h>
#include<stdio.h>



void main()
{
	char ch;

	do
	{

		ch = getchar();//�س�������
		getchar();
		if (ch >= 'a'&&ch <= 'z')
			putchar(ch - 32);
		else if (ch>='A'&&ch<='Z')
		{
			putchar(ch +32);
		}
		else
		{
			printf("������ӷ�������Ҫ��");
		}
} while (ch!='\t');




}


void main757()
{
	char ch;
	do
	{
		ch = getchar();
		putchar(ch);
	} while (ch!='/t');
	//'a'=='/t'  ���0,����ѭ��   ; 
	///t tab��;/n �س�

}



void mainxx()
{
	int sum=0, num = 100;
	do
	{
		sum += (num--);
		printf("%d,%d\n", num, sum);
	} while (num>0);


	getchar();

}



void main999()
{
	int i = 0, sum = 0;
	do
	{
		sum += (++i);
		printf("%d,%d\n'",i, sum);

	} while (i<100);
	system("pause");

}



void main1()
{
	int i = 0;
	do
	{
		printf("%d\n",i++);//i++ 0-99  ;++i 1-100

	} while (i<100);

	system("pause");
}