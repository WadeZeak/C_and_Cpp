#include<stdio.h>


int add(int a, int b)
{
	return a + b;

}


void run()
{
	printf("run/n");
}

void main()
{

	int(*p)(int,int) = add;

	void(*pr)() = run;


	 printf("%d\n",p(10, 20));
	 printf("%d\n", (*p)(10, 20));//�������Ὣ*p����Ϊp
	 printf("%d\n", (*************p)(10, 20));
	 printf("%d\n", (&(*************p))(10, 20));	//ֻ�ܼ�һ��ȡ��ַ,ͬʱ������* ��*��������

	 //����ֱ��ȡ�����ĵ�ִַ��

	 printf("%p,%p,%p\n", p, *p, &p);//ȡ�����ĵ�ַ ����ȡ���뼴��ִ�е���ڵ�	��ʾ���غ���	C������Ƕasmʱ��Ҫ
	 printf("%p,%p,%p\n", pr, *pr ,&pr);

	 //��һЩ�ϰ汾�ı������&p��*p��pһ��

	 getchar();
  
}