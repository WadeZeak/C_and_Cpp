#include<iostream>
#include<string>
#include<fstream>



using namespace std;



struct MyStruct
{
	//char str[30];// �޷�ָ���������ʽ��ʼֵ�趨��
	char *p = "Hello World";
	int num = 20;
	double db = 10.25;
	char chr = 'a';

};




//�ı���ʽ
void main1()
{
	ofstream fout("C:\\Users\\Zeak_K\\Desktop\\new.txt",ios::out);
	ifstream fin("C:\\Users\\Zeak_K\\Desktop\\new.txt");

	cout << sizeof(MyStruct) << endl;


	MyStruct mystruct;
	fout << mystruct.chr << mystruct.db << mystruct.num << mystruct.p << '\n';
	fout.close();
	char str[100] = { 0 };
	fin.getline(str, 100, 0);//��ȡ
	cout << str << endl;
	fin.close();

	system("pause");

}


//�������ļ�
void main()
{
	cout << sizeof(MyStruct) << endl;
	ofstream fout("C:\\Users\\Zeak_K\\Desktop\\bin.txt", ios::binary);//�Զ����Ʒ�ʽ��
	MyStruct mystruct;
	mystruct.p = "Hello China";

	fout.write((char *)&mystruct, sizeof(mystruct));//д��
	//��һ������ Ҫд���ļ����ڴ���׵�ַ
	//�ڶ������� д��ĳ���



	fout.close();

	ifstream fin("C:\\Users\\Zeak_K\\Desktop\\bin.txt");
	MyStruct mystruct1;

	fin.read((char *)&mystruct1, sizeof(mystruct1));//��ȡ

	cout << mystruct1.p << endl;

	fin.close();

	system("pause");


}



