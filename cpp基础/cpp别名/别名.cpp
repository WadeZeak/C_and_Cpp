#include<iostream>


using namespace std;

//using ֻ�ܼ�д��������

namespace space//�����ռ� ����ģ�壬�����ͻ
{
	template<class T>using ptr = T*;//ģ���д ʹ��ptr����ģ��ָ��
}

//template<class TN>using ptrA = TN*;
int add(int a, int b)
{
	return a + b;
}

typedef  int(*ADD)(int, int);//C�ı��� typedef
using FUNC = int(*)(int, int);//C++�ı���


using base = std::ios_base::fmtflags;//һ����������


void main()
{
	//ADD һ����������,����ָ������
	ADD p=add;
	cout << p(10,20) << endl;

	FUNC pfun = add;
	cout << p(1, 2) << endl;

	space::ptr<int>pint(new int(15));//������int *pint=new int(15) Ȼ����ʱ�ײ��洢�˵�����Ϊ15
	//*pint = 20;
	pint[0] = 10;
	pint[1] = 20;
	pint[2] = 30;
	cout << *pint << "\t" << pint << endl;
	cin.get();
}






