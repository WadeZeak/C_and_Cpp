#include<iostream>


using namespace std;
struct CLS
{
	int m_i;
	CLS(int i) : m_i(i) {}
	CLS()
	{

		/*
		��Ĭ�Ϲ��캯���ڲ��ٵ��ô��εĹ��캯�����û���Ϊ���Ǳ�������Ϊ���༴��ִ�к������ã�
		������ִ�����ĳ�ʼ�����ʽ��ֻ�������ɶ���ʱ����ʼ�����ʽ�Ż�����Ӧ�Ĺ��캯��һ����á�
*/
		CLS(0);
	}
};


void run(int *sa, int sz);//��������������Ĳ�������ֻ��ȱʡʵ�β�ͬ��ڶ�����������Ϊ��һ�����ظ����� �� 
void run(int *, int = 10);


void main()
{

	CLS obj;
	cout << obj.m_i << endl;


	static int val;//��̬�����Զ���ʼ��
	cout << val << endl;//0

	cin.get();
}