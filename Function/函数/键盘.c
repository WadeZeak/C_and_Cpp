#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>

void go();//��������

/*

��һ��Ϊ�����������ֵ����س���Ϊvk_return, tab��Ϊvk_tab
�ڶ�������Ϊɨ���룬һ�㲻�����ã���0������У�

����������Ϊѡ���־�����Ϊkeydown����0���ɣ����Ϊkeyup�����"KEYEVENTF_KEYUP"��

���ĸ�����һ��Ҳ����0���ɡ�
*/
void mainfgjf()
{
	//�����¼�����

	//0x5b  windows��
	//������� win+E windows��Դ������
	keybd_event(0x5b, 0, 0, 0);//���̰���
	keybd_event('E', 0, 0, 0);
	keybd_event(0x5b, 0, 2, 0);//�����ɿ�
	keybd_event('E', 0, 2, 0);

}
void mainvvv()
{

	keybd_event(0x5b, 0, 0, 0);
	keybd_event('R', 0, 0, 0);
	keybd_event(0x5b, 0, KEYEVENTF_KEYUP, 0);
	keybd_event('R', 0, 2, 0);
	Sleep(200);
	keybd_event(VK_BACK, 0, 0, 0);
	keybd_event(VK_BACK, 0, 2, 0);
	Sleep(200);
	keybd_event('N', 0, 0, 0);
	keybd_event('N', 0, 2, 0);
	keybd_event('O', 0, 0, 0);
	keybd_event('O', 0, 2, 0);
	keybd_event('T', 0, 0, 0);
	keybd_event('T', 0, 2, 0);
	keybd_event('E', 0, 0, 0);
	keybd_event('E', 0, 2, 0);
	keybd_event('P', 0, 0, 0);
	keybd_event('P', 0, 2, 0);
	keybd_event('A', 0, 0, 0);
	keybd_event('A', 0, 2, 0);
	keybd_event('D', 0, 0, 0);
	keybd_event('D', 0, 2, 0);
	keybd_event(VK_RETURN, 0, 0, 0);//VK_RETURN �س�
	keybd_event(VK_RETURN, 0, 2, 0);
	Sleep(200);
	keybd_event(VK_RETURN, 0, 0, 0);
	keybd_event(VK_RETURN, 0, 2, 0);
	Sleep(5000);//�˳����� 
	go();
	exit(0);
}

//�������в������ڶ��庯��
void go()
{

	system("echo hello world!!!");
}