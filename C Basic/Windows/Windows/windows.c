#include<windows.h>
#include<stdlib.h>



void windows1()
{
	//MessageBox����ԭ��

	//In_opt_ HWND hWnd,˭������
	//_In_opt_ LPCSTR lpText,
	//_In_opt_ LPCSTR lpCaption,
	//_In_ UINT uType);

	MessageBoxA(0,"��������������Σ�շ��ӣ�Ϊ�˱�֤�������ȫ����ĵ��Խ���10���Ӻ��Զ��ػ�","����",0);
	//0����ϵͳ����
	//"����������ϣ������µ�½" ����
	// "QQ����" ����
	//�������� ���� �Ի�������� 0-3
	//system("shutdown -s -t 600");
	//system("shutdown -a");
}

void main()
{
	ShellExecuteA(0,"open","notepad",0,0,6);
	//0 ϵͳ��
	//open ��
	//���������� ָ��
	//���ģ���������� Ĭ�� 0
	//�������������ƴ��ڴ�С��0 ���أ�1 ���� ��3 ��󻯣� 6 ��С��  
 	Sleep(1000);//���� 1 S


}