#include<stdlib.h>
#include<iostream>
#include<string.h>
#include<stdio.h>

using namespace std;




struct BigDataCom
{
private:
	char data1[100];
	char data2[100];



public:
	char Init(const char *str1, const char  *str2)//ʵ���ַ�������Ԥ��˽�б����ķ��ʽӿ�
	{
		cout << typeid(str1).name() << endl;//��ӡ��������
		strcpy(this->data1, str1);
		strcpy(this->data2, str2);
	}

	char * GetBigData()
	{

		int len1 = strlen(data1);
		int len2 = strlen(data2);

		int *pres = (int *)malloc(sizeof(int)*(len1 + len2));//���ڱ�����
		memset(pres, 0, sizeof(int)*(len1 + len2));//��ʼ��Ϊ0

		//�۳�
		for (int i = 0; i < len1; i++)
		{

			for (int j = 0; j < len2; j++)
			{
				pres[i + j + 1] += (data1[i] - '0')*(data2[j] - '0');
			}
		}

		//��λ
		for (int i = len1 + len2 - 1; i >= 0; i--)
		{
			if (pres[i] >= 10)
			{
				pres[i - 1] += pres[i] / 10;//��ǰ��λ
				pres[i] = pres[i] % 10;//ȡ����λ��
			}
		}
		int i = 0;

		//����ǰ���0
		while (pres[i] == 0)
		{
			i++;
		}
		char *last =(char *) malloc(sizeof(char)*(len1 + len2));



		//ת��Ϊ�ַ���
		int j;
		for (j = 0; (j < len1 + len2) && (i<len1 + len2); j++, i++)
		{
			last[j] = pres[i] + '0';
		}
		last[j] = '\0';
		return last;
	}
	

};


struct MyStruct : private BigDataCom   //�̳�
{

	void coutstr()
	{
		cout << "���Ǽ̳еĽṹ��" << endl;
	}

};




void main()
{

	BigDataCom bigdata;
	char *str1 = (char *)malloc(sizeof(char) * 100);
	char *str2 = (char *)malloc(sizeof(char) * 100);
	memset(str1, 0, sizeof(char) * 100);
	memset(str2, 0, sizeof(char) * 100);
	cout << "����������data1:" << endl;
	cin >> str1;
	cout << "����������data2:" << endl;
	cin >> str2;
	bigdata.Init(str1, str2);
	//printf("result=%s\n", bigdata.GetBigData());
	cout << "result = " << bigdata.GetBigData() << endl;
	system("pause");
}
