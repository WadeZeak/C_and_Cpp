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
	char Init(const char *str1, const char  *str2)//实现字符串拷，预留私有变量的访问接口
	{
		cout << typeid(str1).name() << endl;//打印数据类型
		strcpy(this->data1, str1);
		strcpy(this->data2, str2);
	}

	char * GetBigData()
	{

		int len1 = strlen(data1);
		int len2 = strlen(data2);

		int *pres = (int *)malloc(sizeof(int)*(len1 + len2));//用于保存结果
		memset(pres, 0, sizeof(int)*(len1 + len2));//初始化为0

		//累乘
		for (int i = 0; i < len1; i++)
		{

			for (int j = 0; j < len2; j++)
			{
				pres[i + j + 1] += (data1[i] - '0')*(data2[j] - '0');
			}
		}

		//进位
		for (int i = len1 + len2 - 1; i >= 0; i--)
		{
			if (pres[i] >= 10)
			{
				pres[i - 1] += pres[i] / 10;//向前进位
				pres[i] = pres[i] % 10;//取出个位数
			}
		}
		int i = 0;

		//忽略前面的0
		while (pres[i] == 0)
		{
			i++;
		}
		char *last =(char *) malloc(sizeof(char)*(len1 + len2));



		//转换为字符串
		int j;
		for (j = 0; (j < len1 + len2) && (i<len1 + len2); j++, i++)
		{
			last[j] = pres[i] + '0';
		}
		last[j] = '\0';
		return last;
	}
	

};


struct MyStruct : private BigDataCom   //继承
{

	void coutstr()
	{
		cout << "我是继承的结构体" << endl;
	}

};




void main()
{

	BigDataCom bigdata;
	char *str1 = (char *)malloc(sizeof(char) * 100);
	char *str2 = (char *)malloc(sizeof(char) * 100);
	memset(str1, 0, sizeof(char) * 100);
	memset(str2, 0, sizeof(char) * 100);
	cout << "请输入数据data1:" << endl;
	cin >> str1;
	cout << "请输入数据data2:" << endl;
	cin >> str2;
	bigdata.Init(str1, str2);
	//printf("result=%s\n", bigdata.GetBigData());
	cout << "result = " << bigdata.GetBigData() << endl;
	system("pause");
}
