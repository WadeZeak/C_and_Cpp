#include<iostream>
#include<fstream>

using namespace std;

//�����ַ�ʽ��ȡ������
//�ļ����ܽ�����Ҫ�����ƶ�д


void main1()
{

	
	//�����ƶ�д
	ifstream fin("C:\\Users\\Zeak_K\\Desktop\\write.exe", ios::binary);
	ofstream  fout("C:\\Users\\Zeak_K\\Desktop\\newwrite.exe", ios::binary);


	if (!fin || !fout)
	{
		std::cout << "�ļ���ʧ��";
		system("pause");
		return;
	}
	std::cout << "�ļ�������ʼ\n";

	char ch = 0;
	while (fout && fin.get(ch))//���õķ�ʽ��ȡ��һ���ַ�
	{
		fout.put(ch);//д��һ���ֽ�

	}
	fin.close();
	fout.close();

	std::cout << "�ļ��������";



	cin.get();

}




