#include<stdio.h>

void helloworld1()
{

	printf("HelloWorld");
}


void helloworld2()
{

	printf("A%sB","HelloWorld");//HelloWorld��%s��ʽ��ʽ�������ַ���
}

void helloworld3()
{

	printf("%c%c%c%c%c%c%c%c%c%c",'H','e','l','l','o','W','o','r','l','d');
}

void helloworld4()
{

	putchar('H');
	putchar('e');
	putchar('l');
	putchar('l');
	putchar('o');
	putchar('W');
	putchar('o');
	putchar('r');
	putchar('l');
	putchar('d');
}

//ASCi�� BNI
void helloworld5()
{
	
	putchar(72);
	putchar(101);
	putchar(108);
	putchar(108);
	putchar(111);
	putchar(87);
	putchar(111);
	putchar(114);
	putchar(108);
	putchar(100);

	
}


//8���� OTC
void helloworld6()
{
	putchar(0110);//0 �˽���
	putchar(0145);
	putchar(0154);
	putchar(0154);
	putchar(0157);
	putchar(0127);
	putchar(0157);
	putchar(0162);
	putchar(0154);
	putchar(0144);
}


//16���� HEX
void helloworld7()
{

	putchar(0x48); //0x 16����
	putchar(0x65);
	putchar(0x6C);
	putchar(0x6C);
	putchar(0x6F);
	putchar(0x57);
	putchar(0x6F);
	putchar(0x72);
	putchar(0x6C);
	putchar(0x64);


}


void helloworld8()
{
	putchar('\110');// /ddd 1��3λ�˽��Ƶ��ַ���ʾ
	putchar('\145');
	putchar('\154');
	putchar('\154');
	putchar('\157');
	putchar('\127');
	putchar('\157');
	putchar('\162');
	putchar('\154');
	putchar('\144');
}

void helloworld9()
{

	putchar('\x48'); // /xhh 1��2λ16���� ת��Ϊ��ţ������ַ�
	putchar('\x65');
	putchar('\x6C');
	putchar('\x6C');
	putchar('\x6F');
	putchar('\x57');
	putchar('\x6F');
	putchar('\x72');
	putchar('\x6C');
	putchar('\x64');
}


void helloworld10()
{
	puts("HelloWorld");//��ӡ�ַ���


}

void mainhello()
{
	helloworld10();
	getchar();
}