#include<iostream>
#include<iomanip>//���������


using namespace std;

void main1()
{


	cout.put('A').put('B').put('C').put('D');// .(��)����������

	cout << endl;
	char str[20] = "123456789ABCD";
	cout.write(str, 10);//���,�޶������� ������\0

	cin.get();


}



void main12()
{
	int num = 1080;
	cout << num<< endl;//Ĭ��Ϊʮ����
	cout << hex;//ʮ������ǿ�Ʊ�ʶ,֮���ӡ�����־�Ϊʮ������  endl��������
	cout << num << endl;
	cout << num << endl;
	cout << oct;//�˽���ǿ�Ʊ�ʶ ������hex
	cout << num << endl;
	cin.get();


}




void main3()
{

	double db = 1.23564698449856198168491498;

	cout << db << endl;//Ĭ�ϴ�ӡС������λ ��������
	cout << setprecision(25) << db<<endl;//С�������ʾ��ȷ�� �����15λ
	//1. 235 646 984 498 562
	cin.get();


}

void main4()
{

	cout.width(20);//������ʾ��� �����
	cout.fill('*');//����ַ�
	cout << "Hello World" << endl;
	
	cin.get();

}


void main5()
{
	//�ַ������
	cout.width(20);//���ÿ�� �����
	cout.fill('*');//����ַ�
	cout << "Hello World" << endl;


	cout.width(5);//������ʾ��� ����� �����ٺ����ַ������ȳ��������ĳ��� ���������
	cout.fill('*');//����ַ�
	cout << "HelloWorld" << endl;

	cin.get();

}


void main6()
{

	cout.width(20);//���ÿ�� �����
	cout.fill('*');//����ַ�
	cout.setf(ios::left);//��������������  ������ַ����������ַ������
	cout << "Hello World" << endl;


	cout.width(20);
	cout.fill('*');//����ַ�
	cout.setf(ios::right);//�Ҷ���  ������ַ����������ַ����ұ�
	cout << "HelloWorld" << endl;

	cin.get();
}


void main7()
{

	int num1;
	cin.setf(ios::hex, ios::basefield);//��������Ϊʮ������
	cin >> num1;
	cout.setf(ios::hex, ios::basefield);
	cout <<num1<<endl;

	int num2;
	cin.setf(ios::oct, ios::basefield);//��������Ϊ�˽���
	cin >> num2;
	cout.setf(ios::oct, ios::basefield);
	cout << num2 << endl;


	int num3;
	cin.setf(ios::dec, ios::basefield);//��������Ϊʮ����
	cin >> num3;
	cout.setf(ios::dec, ios::basefield);
	cout << num3<< endl;

	cin.get();
	cin.get();
	
}


void main8()
{


	double db = 100/7.0;
	cout.setf(ios::fixed|ios::showpoint);//��ʾС����
	cout << db << endl;

	
	for (int i = 0; i < 10; i++)
	{

		cout.precision(i);
		cout << db << endl;
	}

	db = 10000000000000000000000000000.0;
	cout.setf(ios::scientific, ios::fixed | ios::showpoint);//�Կ�ѧ��������ʾ
	//ʵ��,���ݷ����Զ�ѡ��ָ�����߶���С����ʾ
	cout << db << endl;

	cin.get();
}


void main()
{
	const int num =1234;
	cout << setw(10) <<setfill('*')<<setiosflags(ios::left) <<num << endl;
	//setw ���ÿ��    setfill���    setiosflags(ios::left) ����£
	cout << setw(10) << setfill('*') << setiosflags(ios::right) << num << endl;

	cout << resetiosflags(ios::right) << setw(10) << setbase(8) << setfill('X') << setiosflags(ios::right) << num << endl;
	//resetiosflags �����ʷ�ż�
	//setbase ���� ����


	cin.get();

}


