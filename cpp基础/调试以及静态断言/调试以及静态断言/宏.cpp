

#include<iostream>
#include<assert.h>

using namespace std;


//��
#define N 10 


void main1()
{

	int num = 10;

	cout << num << endl;

	//��
	cout << __FILE__ << endl;//��ʾ�ļ�Ŀ¼
	cout << __LINE__ << endl;//��ʾ�����ڵڼ���
	cout << __DATE__ << endl;//��ʾ������������
	cout << __TIME__ << endl;//��ʾʱ��
	cout << __FUNCTION__ << endl;//��ʾ���ڵĺ���

	cin.get();

}



//��̬���� �������������
void main2()
{


	short num = 10;
	int numA = 100;
	//��ȷ�˱������ֽڣ��˴�Ϊ2��������ֽ�>=4�ֽڣ����Գɹ�
	//static_assert(sizeof(num)>=4,"Error");//���� short �����ֽ�

	//sizeof()���ֽ�Ϊ��λ  


	//���Դ��룬Ѹ���ж���������һ��
	static_assert(sizeof(numA) >= 4, "Error"); //����ɹ�
	cin.get();

}


//GPU��CPU�����

//��������  ��������
//#define M

//��������
void main()
{
	short num = 10;

#ifdef M
	static_assert(sizeof(numA) >= 4, "Error");
	
#endif
	cin.get();
}