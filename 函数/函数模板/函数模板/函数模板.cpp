#include<iostream>
#include<stdlib.h>

using namespace std;

//����ģ��

//����ͨ���������� template<typename T> T
template<typename T> T GetMaxTemplate(T *p,const int n)
{


	T maxdata = p[0];
	for (int i = 0; i < n; i++)
	{
		if (p[i]>maxdata)
		{
			maxdata = p[i];
		}
	}

	return maxdata;
}





int GetMax(int *p,int n)//int�������Ԫ��ѡ��
{
	int maxnum(p[0]);
	
	for (int i = 0; i < n; i++)
	{
		if (p[i]>maxnum)
		{
			maxnum = p[i];
		}
	}

	return maxnum;
}




double GetMax(double *p, int n)//��������ʵ��double�������Ԫ��ѡ��
{
	double maxnum(p[0]);

	for (int i = 0; i < n; i++)
	{
		if (p[i]>maxnum)
		{
			maxnum = p[i];
		}
	}
	return maxnum;
}




void main1()
{
	int a[10] = { 1, 2, 5, 87, 44, 62, 77, 45, 11, 100 };
	double b[10] = { 10.25, 55.58, 99.5, 55.4, 77.4, 61.1, 23.58, 89.45, 44 };


	//ͨ����������ʵ�ֲ�ͬ�������͵�������ݵ�ѡȡ
	cout <<"int_maxnum="<< GetMax(a, 10) << endl;
	cout << "double_maxnum=" << GetMax(b, 10) << endl;


	//����ģ��
	cout << "template_maxnum=" << GetMaxTemplate(a, 10) << endl;
	cout << "template_maxnum=" << GetMaxTemplate(b, 10) << endl;

	system("pause");
}