#include<stdio.h>
#include<stdlib.h>

void main()
{
	int num = 10;
	printf("%d", 10 * num++);

	getchar();

}






//������ɨ���ַ�ʱ���������£���������

void main18()
{
	int a = 3, b = 4;
	printf("%d", a+++b);//7

	getchar();
}



void main17()
{
	int num = 5;
	printf("%d", -num++);
	printf("\n%d", -++num );
	getchar();
}


void main16()
{
	//�����Լ�������������ڳ���
	//���ʽ��������
	//�ַ���������
	char ch = 'A';
	printf("%c", ++ch);

	//ʵ��Ҳ���������Լ�
	float m = 2.0;
	printf("\n%f", ++m);
	getchar();

	//�����Լ������ȼ����ڼӼ��˳�
}





void main15()
{
	int num = 0;
	while (num++ < 5)
	{
		system("echo notepad");
	//	num++;
	//++numҲ�У�û�е���
	}
	system("pause");
}






void main14()
{

	int num = 100;

	printf("%x", &num);

	printf("\n%d", --num);

	printf("\n%d", num);

	getchar();


}





void main13()
{

	int num = 100;

	printf("%x", &num);

	printf("\n%d",++num);

	printf("\n%d", num);

	getchar();


}




void main12()
{

	int num = 100;

	printf("%x", &num);

	printf("\n%d", num--);

	printf("\n%d", num);

	getchar();
}




void main11()
{
	int num = 10;

	printf("%x", &num);

	printf("\n%d",num++);

	printf("\n%d",num);

	getchar();
}