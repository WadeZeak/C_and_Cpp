#include<string>
#include<iostream>

using namespace std;


void main432()
{
	//C����д��
	//char str[123];
	//str = "123456789;


	//�ַ�����ʼ��
	char str[123]="China is great";

	string str1(str);
	str1 = "gfcisaugvigv";
	cout << str1 << endl;




	cin.get();

}


void mainasfa()
{


	string str1("12345");
	string str2("678910");
	string str3 = str1 + str2;//����char ���� ������ӷ�����



	cout << str3 << endl;

	cin.get();
}


void mainfhfh()
{
	string str1("12345");
	string str2("678910");

	str1.append(str2);//�ַ���׷��

	//str1 = str1 + str2;//�൱��׷��

	cout << str1<<endl;
	cin.get();


}





void mainlkfskv()
{

	string str1("12345");

	//��������ַ���
	str1.insert(str1.begin(), 'a');
	cout << str1 << endl;

	str1.insert(str1.end(), 'b');
	cout << str1 << endl;

	str1.insert(str1.begin()+2,3, 'c');
	cout << str1 << endl;


	cin.get();
}




void mainsgsgs()
{
	string str1("12345abcd");


//	str1.erase(str1.begin());//ɾ��


	str1.erase(3, 4);//�ӵ�3���ַ���ʼ,ɾ����4���ַ�
	auto ibeg = str1.begin();
	auto iend = str1.end();

	//����
	while (ibeg!=iend)
	{
		cout << *ibeg << endl;
		ibeg++;

	}


	cin.get();
}



void mainsdvsonvo()
{

	string str = "123456789abcdef";

	str.replace(0, 3, "China");//�ӵ�0���ַ�����3���ַ��滻ΪChina

	cout << str << endl;

	cin.get();


}



void maindfhdh()
{


	string str ("������һ��ͳ�����Ϻڿ������ƹ����ϰף��׹�������");

	cout << (int)str.find("���Ϻڿ���") << endl;
	
	//int pos = str.find("��");//�ҵ���һ��ƥ���,���򷵻�-1

	int pos = str.rfind("�ƹ�");
	cout << pos << endl;


	cin.get();

}




void maindbsfbs()
{

	string str = "fa123sdf";

	//int pos = str.find_first_of("789");

	//find_first_of �ҵ���һ�����ַ���ƥ����ַ�λ��

	//int noposs = str.find_first_not_of("123");
//find_first_not_of �ҵ���һ�����ַ�����ƥ����ַ�

	//int pos = str.find_last_of("789");
	//find_last_of �ҵ����һ�����ַ���ƥ����ַ�λ��

	int pos = str.find_last_not_of("123");
	//find_last_not_of �ҵ����һ�����ַ�����ƥ����ַ���λ��
	cout << pos << endl;

	cin.get();

}



void maindfgdfh()
{
	string str1 = "ABC";
	string str2 = "ABCD";
	cout << (str1 == str2) << endl;//��������� �Ƚ��ַ����Ƿ�һ��
	

	char strA[] = "1234";
	char strB[] = "7894";

	cout << (strA == strB) << endl;//�Ƚϵ�ַ�Ƿ�һ��

	cin.get();
}


void main()
{
	string str("abc is abc china is china");


	/*int pos = str.find('a',0);
	cout << pos << endl;

	pos = str.find('a', pos + 1);
	cout << pos << endl;

*/

	//int pos = str.find("AB",0);//û���ҵ�,����-1
	//cout << pos << endl;

	int pos = str.find("china",0);
	cout << pos << endl;
	pos = str.find("china", pos+5);
	cout << pos << endl;

	cin.get();



}