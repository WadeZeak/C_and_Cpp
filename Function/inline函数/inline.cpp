#include<stdio.h>
#include<iostream>

using namespace std;

//��������
//C���� define
//Cpp define ����inline

//define����������ͼ��

//inline ���ڱ�����ֻ��һ������,�ӿ���������ٶ�

//ʹ�ù���
//һ�������
//(1)�����еݹ�
//(2)���ܰ�����̬����
//(3)������ѭ��
//(4)������switch��goto���
//(5)���ܰ�������
//���������������������Ϲ��򣬱������Ὣinline ����������ͨ�����Դ�


//�滻
#define Cube(x) (x)*(x)*(x)//��������

inline int GETX(int x);//�������� ���ڲ�չ��

//����
inline int GETX(int x)//��֤���Ͱ�ȫ
{
	return x*x*x;
}
 
//inline ģ�廯
template<class T>
inline T GetNum(T x)
{
	return x*x*x;
}


//����
int GetX(int num)
{
	return num*num*num;
}

void main()
{

	cout << Cube(1 + 2) << endl;
	cout << Cube(1.1*2.2) << endl;
	cout << Cube('a') << endl;

	cout << GETX(10) << endl;

	cout << GetNum(10) << endl;
	system("pause");
}
