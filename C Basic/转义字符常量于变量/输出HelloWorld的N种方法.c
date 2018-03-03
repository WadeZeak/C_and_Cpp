#include<stdio.h>

void helloworld1()
{

	printf("HelloWorld");
}


void helloworld2()
{

	printf("A%sB","HelloWorld");//HelloWorld按%s方式格式化成了字符串
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

//ASCi码 BNI
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


//8进制 OTC
void helloworld6()
{
	putchar(0110);//0 八进制
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


//16进制 HEX
void helloworld7()
{

	putchar(0x48); //0x 16进制
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
	putchar('\110');// /ddd 1到3位八进制的字符表示
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

	putchar('\x48'); // /xhh 1到2位16进制 转换为编号，查找字符
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
	puts("HelloWorld");//打印字符串


}

void mainhello()
{
	helloworld10();
	getchar();
}