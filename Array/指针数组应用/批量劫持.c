#include<stdlib.h>
#include<stdio.h>
#include"Windows.h"
#include"detours.h" //�������"Windows.h"
#pragma comment (lib, "detours.lib")
//express ����� ����Դ�뼶��ٳ֣�Ҳ����ȫ�ֽٳ�

//<>ֱ�Ӵ�ϵͳѰ��
//" "�ȴӵ�ǰĿ¼Ѱ�ң��ٴ�ϵͳѰ��

//
//static int jian(int a, int b)
//{
//	return a - b;
//}
//
//
//static int cheng(int a, int b)
//{
//	return a*b;
//}
//
//static int chu(int a, int b)
//{
//	return a / b;
//
//}
//
//static int jia(int a, int b)//static ֻ���ڱ�C�ļ�����Ӧ
//{
//	//printf("%d+%d=%d\n", a, b, a + b);
//
//	return a + b;
//
//}
//

//int(*p)(int, int) = jia; ����ָ��

//ʹ�þ�̬����ʵ��

#pragma comment(lib,"��̬��.lib")
#include"js.h"

//����ָ������
static int(*pold[4])(int, int) = { jia, jian, cheng, chu };//����ԭ����λ��



static int newjian(int a, int b)
{
	printf("%d-%d=%d\n", a, b, a - b);
	return a - b;
}


static int newcheng(int a, int b)
{
	printf("%d*%d=%d\n", a, b, a * b);
	return a*b;
}

static int newchu(int a, int b)
{
	printf("%d/%d=%d\n", a, b, a / b);
	return a / b;

}

static int newjia(int a, int b)//static ֻ���ڱ�C�ļ�����Ӧ
{
	printf("%d+%d=%d\n", a, b, a + b);

	return a + b;

}

static int(*pnew[4])(int,int) = {newjia,newjian,newcheng,newchu};

//��ʼ����
void Hook()
{

	DetourRestoreAfterWith();//�ָ�ԭ��״̬,
	DetourTransactionBegin();//���ؿ�ʼ
	DetourUpdateThread(GetCurrentThread());//ˢ�µ�ǰ�߳�
	//�������������ε���DetourAttach������HOOK�������
	
	for (int i = 0; i < 4; i++)
	{
		
		printf("�ɹ��ٳ�%d\n", i);
		DetourAttach((void **)&pold[i], pnew[i]);//ʵ�ֺ�������
	}
	DetourTransactionCommit();//������Ч

}

//ȡ������
void UnHook()
{


	DetourTransactionBegin();//���ؿ�ʼ
	DetourUpdateThread(GetCurrentThread());//ˢ�µ�ǰ�߳�
	//�������������ε���DetourDetach,���������������HOOK
	for (int i = 0; i < 4; i++)
	{
		DetourDetach((void **)&pold[i], pnew[i]);
	//�������غ���
	}
	DetourTransactionCommit();//������Ч
}


void main()
{

	//printf("%d\n", jia(3, 4));

	/*for (int i = 0; i < 4; i++)
	{
		
		printf("%d\n", pold[i](3, 4));
	}
*/
	printf("%d,%p\n", jia(20, 4),jia);
	printf("%d\n", jian(20, 4));
	printf("%d\n", cheng(20, 4));
	printf("%d\n", chu(20, 4));

	Hook();
	printf("\n\n�ٳ�֮��\n");
	printf("%d,%p\n", jia(20, 4),jia);
	printf("%d\n", jian(20, 4));
	printf("%d\n", cheng(20, 4));
	printf("%d\n", chu(20, 4));
	system("pause");
}









void change(int(*px)(int, int))//�����и������ƣ�����ͬһ������
{
	printf("change=%p", &px);
	px = jian;
}

//ͨ������ָ��ı亯��ָ���ָ��
void change1(int(** ppx)(int, int))//���ݺ���ָ��ĵ�ַ
{

	*ppx = jian;
}

void maintxt()
{
   
	int(*px)(int, int) = jia;
	printf("%d", px(3, 4));
	//printf("main=%p", &px);
	change1(&px);//���ݵ�ַ���޸�һ��ָ�����

	printf("\n%d", px(3, 4));//3-4=-1
	getchar();

}