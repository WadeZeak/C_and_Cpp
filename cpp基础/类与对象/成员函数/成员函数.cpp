
#include "Complex.h"

void StackRun()
{

	Complex complex1;//��ջ��,ʹ����ɺ�,�Զ������ͷ�
	complex1.Show();


}



void HeapRun()
{


	Complex *pcomplex = new Complex;//�����ڶ���
	pcomplex->Show();
	pcomplex->ShowAll(10, 20);
	pcomplex->Setxy(100, 200);
	
	//�ڲ��������أ�����ָ�룬��ȷ����
	pcomplex->Show(15,25);

	delete pcomplex;


}


void main()
{

	HeapRun();
	cin.get();


}