#include<stdlib.h>
#include<iostream>
#include<locale.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "chs");//���ñ��ػ������ñ�����������  ch ���� s ����
 	wchar_t *p1 = L"123456avsf";

	wcout << p1 << endl;

	wchar_t *p2 = L"�쳯123456";//��Ҫ���ַ����ػ�֮������������

	wcout << p2 << endl;


	system("pause");
}