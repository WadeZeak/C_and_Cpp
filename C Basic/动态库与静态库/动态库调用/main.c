#include<stdlib.h>
#include<stdio.h>
#include<windows.h>




//��̬��
//˭�����Ե���, �ܹ�����exe��ֻ�ø���dll������ʵ�ָ���
//ʹ�õ�ʱ�����,���õ�ʱ���ͷ�,��Լ�������Դ
//��̬�����ʵ�ֽٳ�



typedef void(*pmsg)();//�򻯺���ָ��
//pmsg �൱�� void(*)()


typedef int(*padd)(int a, int b);

void main()
{
	HMODULE mydll = LoadLibraryA("��̬��.dll");//���ض�̬��

	if (mydll==NULL)
	{
		printf("��̬�����ʧ��!!!");
	}
	else
	{

		pmsg pmsg1;//���庯��ָ��
		//���к�������ת��
		pmsg1 = (pmsg)GetProcAddress(mydll, "msg");//��ȡ����ָ���ַ
		if (pmsg1!=NULL)//�ҵ��ú���
		{
			pmsg1();
		}

		padd padd1;
		padd1 = (padd)GetProcAddress(mydll, "add");
		if (padd1!=NULL)
		{
		printf("%d\n",padd1(10, 20));
		}
	}
	FreeLibrary(mydll);

	system("pause");

}