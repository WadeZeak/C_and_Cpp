#include<iostream>
#include<fstream>

using namespace std;

void main1()
{

	ofstream fout;//ofstream ����ļ�

	fout.open("C:\\Users\\Zeak_K\\Desktop\\1.txt");//���ļ�

	fout << "Hello World!!" << endl;
	fout.close();

}


void main2()
{
	ifstream fin("C:\\Users\\Zeak_K\\Desktop\\1.txt");//ifstream ������ȡ�ļ�����
	char str[50] = { 0 };
	fin >> str;// ���ļ���ȡ �հ��ַ���Ϊ������
	fin.close();
	cout << str << endl;
	cin.get();

}



void main3()
{
	
	ifstream fin("C:\\Users\\Zeak_K\\Desktop\\2.txt");
	char str[50] = { 0 };

	for (int i = 0; i < 4; i++)
	{
		fin.getline(str,50);//���ж�ȡ
		cout << str << endl;
	}

	cin.get(); 

}



void main4()
{

	ofstream fout;//ofstream ����ļ�

	fout.open("C:\\Users\\Zeak_K\\Desktop\\3.txt");//���ļ�

	fout << "Hello World!!" << endl;//д���ļ�
	fout << "Hello China!!" << endl;
	fout << "Hello The U.S.A!!" << endl;
	fout << "Hello England!!" << endl;
	fout << "Hello XiaMen!!" << endl;
	fout.close();

}




void main5()
{

	//fstream ���ܶ�����д

	//�ļ���Ҫԭ���ʹ���
	fstream fio("C:\\Users\\Zeak_K\\Desktop\\3.txt", ios::in | ios::out);//��дȨ��

	fio << "Hello World!!" << endl;//д���ļ�
	fio << "Hello China!!" << endl;
	fio << "Hello The U.S.A!!" << endl;
	fio << "Hello England!!" << endl;
	fio << "Hello XiaMen!!" << endl;//�ļ�ָ�뵽���ļ�ĩβ



	//�������һ ���´��ļ�
	//	fio.close();
	//{
	//	fstream fio("C:\\Users\\Zeak_K\\Desktop\\3.txt", ios::in | ios::out);//��дȨ��

	//	for (int i = 0; i < 5; i++)
	//	{
	//		char str[50] = { 0 };
	//		fio.getline(str, 50);//���ж�ȡ
	//		cout << str << endl;
	//	}

	//	fio.close();
	//}
	//



	//��������� seeking
	fio.seekg(ios::beg);//�ļ�ָ���ƶ�����ͷ


		for (int i = 0; i < 5; i++)
		{
			char str[50] = { 0 };
			fio.getline(str, 50);//���ж�ȡ
			cout << str << endl;
		}

		fio.close();

	cin.get();



}

//д���ļ� ����Ҫת��Ϊ�ַ���
//��ȡ�ļ�ʱ,����Ҫ���ַ�����ת��Ϊ�������͵Ĳ���


void main6()
{

	ofstream fout;
	fout.open("C:\\Users\\Zeak_K\\Desktop\\in.txt");
	fout << "Hello" << "\t" << 123 << "\t" << "Z" << endl;//д��
	fout.close();

	ifstream fin("C:\\Users\\Zeak_K\\Desktop\\in.txt");
	
	char str[10] = { 0 };
	int num = 0;
	char chr = '\0';
	fin >> str >> num >> chr;//�԰��ַ���Ϊÿһ�ζ�ȡ�Ľ�����

	cout << str << endl;
	cout << num << endl;
	cout << chr << endl;

	cin.get();


}


void main7()
{
	
	ifstream fin("C:\\Users\\Zeak_K\\Desktop\\2.txt");

	ofstream fout("C:\\Users\\Zeak_K\\Desktop\\20.txt");


	if (!fin||!fout)
	{
		cout << "�ļ���ȡʧ��" << endl;
		return;
	}

	cout << "�ļ�������ʼ...." << endl;

	char chr = 0;

	//�����ȡ�������ļ����Ὣ�䰴���ı���ʽ��ȡ,����ѹ��
	//1 2  3 ���ն����ƶ�ȡ0000001  00000010  00000100
	// �����ı���ȡ 01111011
	while (fout&&fin.get(chr))//���÷�ʽ��ȡһ���ַ�   ��ȡʧ��,ѭ��ֹͣ
	{
		///��ȡһ���ֽ�
		fout.put(chr);//д��һ���ֽ�
	}

	cout << "�ļ���������...." << endl;

	//�ر��ļ�������
	fin.close();
	fout.close();

}




void main()
{
	ofstream fout("C:\\Users\\Zeak_K\\Desktop\\2.txt", ios::app);//�ļ�׷��
	fout << endl; //<<  >> �������������
	fout << "Hello World";


	fout.close();


}