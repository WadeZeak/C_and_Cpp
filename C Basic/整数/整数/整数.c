#include<stdio.h>
#include<stdlib.h>
#include<limits.h>


void int_max_min()
{
	//win32ƽ̨�ϣ�%d�ķ�Χͬintһ����%u�ķ�Χͬunsigned int һ��
	printf("%d,%d",INT_MAX,INT_MIN);
	printf("\n%d,%d", INT_MAX+1, INT_MIN+1);
	printf("\n%u,%d",UINT_MAX, 0);
	getchar();
}


void shot_max_min()
{

	printf("short=%d,int=%d,long=%d",sizeof(short),sizeof(int),sizeof(long));
	//win32 short=2,int=4,long=4
	printf("\nunsigned short=%d,unsigned int=%d,unsignedlong=%d", sizeof(unsigned short), sizeof(unsigned int), sizeof(unsigned long));
	printf("\nshort ���ֵ%d,short��Сֵ%d",SHRT_MAX,SHRT_MIN);
	printf("\nunsigned short ���ֵ%d,unsigned short��Сֵ%d",USHRT_MAX,0);
	getchar();


}




void main5()
{
	printf("%d\n", -10);
	printf("%u\n",-10);
	printf("%f", -10);//%f �޷��� ʮ������
	printf("%o", -10);//%o�޷��Ű˽���
	getchar();

	//C/C++ ����ɹ���������֤�����ȷ
}



void main4()
{
	//ʹ��printf��ӡʱ�����ͱ���ƥ��
	printf("%d,%u",-1,-1);//%d �з��� ʮ���ƣ�%u �޷���ʮ����
	getchar();

}



void main3()
{
	printf("%f\n", 1);//������
	printf("%d\n", 1);//����
	//printf()�����Լ��ķ�ʽ�������,��������������ʽ��ƥ�䣬������
	getchar();
}

void main2()
{
	//�з������ݳ�������,�����
	short test = 32768;
	printf("%d\n", test);
	getchar();
}

void main1()
{
	//�޷������ݱ�������Ч��Χ�ڣ������������
	unsigned short num = 65535+1;
	printf("%d\n", num);
	printf("%d",sizeof(num));
	getchar();

}