#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
void main()
{
	unsigned short num = 65535+1+3;//���
	printf("%d",num);
	getchar();
}



void main2()
{

	short num=100;//�����ͣ����ſ�ʡ��
	printf("%x\n",num);//ʮ����->ʮ������
	printf("short �����ֵ%d��short����Сֵ%d\n",SHRT_MAX,SHRT_MIN);
	printf("unsinged short �����ֵ%d��unsined short����Сֵ%d",USHRT_MAX , 0);//�޷���short
	printf("\nshort zize=%d,unsigned short =%d", sizeof(short), sizeof(unsigned short));//short,unsigned short ��С
	system("pause");

}
