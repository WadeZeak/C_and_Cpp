#include<stdlib.h>
#include<stdio.h>

void mainerhe()
{

	int a= 10;
	
void *p = &a;
//void *p = &a;//������ָ����Խ����κε�ַ  
// ����ȡ�����ݣ���֪����С
//void �޴�С,��֪����ȡ�Ĵ�С

	printf("%x,%x\n", &a, p);
	printf("%d", *((int*)p));

	system("pause");



}




void mainhf()
{



	int *p=(int *)malloc(0 * sizeof(int));
	//malloc����һƬ�ڴ�ռ�
	//����int �ͽ��н���
	//malloc���Զ�̬����ķ����ڴ�
	printf("%x\n", p);

	for (int i = 0; i < 20;  i++)
	{

		p[i] = i;
		printf("%d,%x\n", p[i], &p[i]);
		printf("%d,%x\n", *(p+i), p+i);
		//p+i �ȼ��� &p[i]
		//*(p+i)�ȼ���p[i]
	}



	//malloc ����ֵ��void����
	//int i = 10;
	///int a[i];
	//������±�����ǳ���

	system("pause");
}