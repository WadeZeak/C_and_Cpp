#include<stdlib.h>
#include<stdio.h>
#include<Windows.h>


void openQQ()
{

	system("\"E://progra~1//Tencent//QQ//Bin/QQScLauncher.exe");
	//ע��:\ ->/
	//64λ�����(x86)��Ҫ�ո�
	//ע��:ת���ַ�

	//ShellExecuteA(0, "open", "\"E:\\Program Files\\Tencent\\QQ\Bin\\QQProtect.exe\"", 0, 0, 1);
}

void closeQQ()
{

	system("taskkill /f /im QQ.exe");//��������

}


void moveQQ1(HWND win, int i)
{
	if (i == 1200)
	{
		return  ;
	}
	else
	{
		SetWindowPos(win, NULL, i, i * 9 / 16, 300, 400, 1);//�ƶ�����
		//i+=10
		moveQQ1(win, i + 10);
	}


}

void moveQQ()
{
	HWND win;//ָ�룬���ش��ڵı��
	win = FindWindowA("TXGuiFoundation", "QQ");//Ѱ��QQ
	//��1������:��������
	//��2������:���ڱ���
	//�첽ִ�У�һ��һ��ִ��
	//ͬ��,һ��ִ��

	if (win==NULL)//��ָ�����Ұָ��
	{
		printf("û���ҵ�QQ");
	}
	else
	{
		printf("�ҵ�QQ");
	}
	//���ƴ������ػ�����ʾ
	//while (1)
	//{

	//	ShowWindow(win, SW_HIDE);//��������
	//	Sleep(3000);
	//	ShowWindow(win, SW_SHOW);//������ʾ
	//	Sleep(3000);
	//}
	//���ô���λ��
	//SetWindowPos(win, NULL, 0, 0, 300, 400, 1);
	//��1������:HWND ���ڱ��
	//��2������:��һ������
	//��3����4������:λ��,����ֱ��Ӧx,y
	//��5,��6������:��Ӧ���ڵĳ���
	//���һ������(��7��),Ĭ��1


	
	int x = 0;
	int y = 0;

	//forѭ��
	for (; x <= 1200; x+=10)//ѭ������ x=1200
	{
		SetWindowPos(win, NULL, x, 0, 300, 400, 1);//�ƶ�����
		Sleep(30);
	}


	
	//while ѭ��
	while (y<=600)//ѭ������ y=600
	{
		SetWindowPos(win, NULL, 1200, y, 300, 400, 1);//�ƶ�����
		y += 10;
		Sleep(30);
	}


	//do while ѭ��
	do//ѭ�������� x=0
	{
		SetWindowPos(win, NULL, x, 600, 300, 400, 1);//�ƶ�����
		x -= 10;
		Sleep(30);
	} while (x);




AAA:	if(y)//y==0ʱ����ֹ
	{
		SetWindowPos(win, NULL, 0, y, 300, 400, 1);//�ƶ�����
		y -= 10;
		Sleep(30);
	}

		goto AAA;


		//forѭ���ܶԽ���
		////{
		////	for (int i = 0; i <= 1200; i+=10)
		////	{
		////		SetWindowPos(win, NULL, i, i * 9 / 16, 300, 400, 1);//�ƶ�����
		////	}
		////}
		moveQQ1(win, 0);

}





void main()
{

	openQQ();
	printf("Hello QQ!!\n");
	Sleep(5000);
	moveQQ();

	Sleep(2000);
	closeQQ();
	printf("Goodbye QQ!!\n");
	system("pause");

}