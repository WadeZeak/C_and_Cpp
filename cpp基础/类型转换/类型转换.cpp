#include<iostream>
#include<stdlib.h>
#include<stdio.h>

using namespace std;

void main1()
{

	double db = 10.5;
	float f = db;// Ĭ����������ת��   warning:����ʼ����: �ӡ�double��ת������float�������ܶ�ʧ����	


	cin.get();
}





void main2()
{

	void *p = new int[10];
	int *pint =(int *) p;//C���Է���ǿ������ת��
}






void main3()
{
	//static_cast<��Ҫת��������>(����)  ������������ת��
	int n =static_cast<int> (78.98);//C++һ������µ���������ת��


	//printf("%d\n", 85.501);//printf()�����Լ��ĸ�ʽ����������������ʽ��ƥ�䣬�������
	//printf("%f\n", 69);

	printf("%d\n", static_cast<int>(85.501));//static_cast ����
	printf("%f\n", static_cast<float>(69));
	cout << n << endl;

	int *p = static_cast<int *>(malloc(100*sizeof(int)));


	cin.get();
}


//const int num=10  �����޸�,�޷���Ч   ����ͨ����ַ�����޸��ڴ棬���Ƕ�ȡʱֱ�ӴӼĴ�����ȡ
//const int *p = num; ֻ������д
//const_cast ȥ����������

void main4()
{
	int num[3] = {1,2,3};
	const int *p = num;

	cout << *p << '\t' << *(p + 1) <<'\t'<< *(p + 2) << endl;

	//*p = 10;//�����޸�

	int *pnew = const_cast<int *>(p);
	*pnew = 10;


	cin.get();
}



void main()
{
	//ָ��  C++ǿ����  ���;��������ݵĽ�����ʽ�Լ��ڴ�ռ���(����)

	//reinterpret_cast<>()  רҵ��ָ������ǿת  �ȫ

	int num = 300;
	char *p = reinterpret_cast<char *>(&num);


	for (int i = 0; i < 4; i++)
	{	
		printf("%x,%c,%d,%p\n",*(p+i), *(p+i), *(p+i),p);
	}



  
	system("pause");
}


//	dynamic_cast  ���ָ��֮���ǿת