#include<stdlib.h>
#include<iostream>

using namespace std;



//C++��⵽��ֵ���ڴ�����ʵ�壬���Զ�ת��Ϊ��ֵ
//C���Բ��������ֵ����ֵ���Զ�ת��


//C++��ǿ����ϵͳ,���������з���ֵ���ͣ���C���Բ���
void main1()
{

	int a = 3;
	(a = 3) = 5;//��ֵ����
	cout << a << endl;
	int b = 7;
	(a > b ? a : b) = 10;
	cout << a <<"\t"<<b<< endl;

	(++a)++;
	cout << a << endl;


	//C++��register�Ĵ������������Ż�,�����⵽ȡ��ַ���ͻ�ŵ��ڴ���
	//register����ȡ��ַ
	register int num=10;//�Ĵ�������
	cout << &num << endl;


	system("pause");
}


//C++ȫ�ֱ���û�������붨��֮��,ֻ�ܶ���һ��
//int a;
//int a;
//C++��̬ȫ�ֱ���Ҳû�������붨��֮��,ֻ�ܶ���һ��
static int b;
//static int b;


//C++������ ����Ŀ�
//Ϊ���޸�Դ���룬����������չ
//���Ա���ɹ�
void test(int x, double, char)//ռλ��ռλ����
{


}

//delete֮��������ΪNULL������Ұָ��


void main2()
{


	int *p=new int;
	delete p;
	p = NULL;//��ֹ�ظ�ɾ��
	//delete p;//�ڴ治�������ͷ�����

}

void main()
{

	/*int num;
	cin >> num;*/

	//�ļ����ض��� �������  ��ҳ�ض���CGI
	char str[100] = { 0 };
	cin >> str;
	cout << str<<endl;
	system(str);
	system("pause");


}