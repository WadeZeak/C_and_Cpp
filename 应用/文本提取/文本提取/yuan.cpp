#include<iostream>

using namespace std;

void main1()
{

	char buf1[80];
	cin.get(buf1, 80, 'x');// �洢Ŀ�� ��С ������(������)
	cout << buf1 << endl;
	


	//ֻ����ȡ�ı�һ��
	//֮���ȡʧ��,û��ִ��
	char buf2[80];
	cin.get(buf2, 80, 'x');
	cout << buf2 << endl;

	
	system("pause");

}


void main2()
{

	char buf[80];

	////x��ζ�Ž���,֮��Ĳ����ٶ�ȡ
	cin.get(buf, 80,'x');// ��ָ�� �Իس����� ָ�������������,���Զ���س��ȿհ��ַ�
//	cin >> buf;//cin �޷����ֿո�

	cout << buf << endl;
	
	system("pause");

}


void main3()
{

	char buf[80];

	cin.getline(buf,80);//����ʶ��հ��ַ� ���ж�ȡ
	cout << buf << endl;

	//���Զ����ȡ
	cin.getline(buf, 80);//����ʶ��հ��ַ�
	cout << buf << endl;

	cin.get(buf, 80, 'x');//һ���Զ�ȡ
	system("pause");
}


void main()
{
	char buf[80];

	//ʵ�������и�
	cin.getline(buf, 80, ',');
	cout << buf << endl;
	cin.getline(buf, 80, ',');
	cout << buf << endl;
	cin.getline(buf, 80, ',');
	cout << buf << endl;
	cin.getline(buf, 80, '\n');
	cout << buf << endl;


	system("pause");
}









