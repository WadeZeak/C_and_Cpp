#include<bitset>
#include<iostream>


using namespace std;

void main5()
{

	//8λ 255��ʾ���������
	//bitset<8>bs (255);
	bitset<8>bs(215);
	for (int i = 0; i < 8; i++)//�������� ���λ�ڵ�7λ
	{
		cout << bs[i] <<'\t';
		cout << ~bs[i] << endl;
	}



	cin.get();




}


void main543()
{

	float f = 1046461161611.5534;
	bitset<32>myset(f);//����
	
	for (int i = 31; i >=0; i--)
	{
		cout << myset[i];
		if (i%8==0)
		{
			cout << '\t';
		}

	}

	cin.get ();
}






void main8afa()
{

	int num = -5;
	bitset<32>myset(num);//����

	for (int i = 31; i >= 0; i--)
	{
		cout << myset[i];
		if (i % 8 == 0)
		{
			cout << '\t';
		}

	}

	cout << endl;

	string str = myset.to_string();
	cout << str << endl;

	cin.get();
}


void mainhouhfo()
{



	bitset<8>bs(255);

	bs.set(7, 0);//����������λ

	bs.set(0, 0);


	cout << bs.size() << endl;//λ��

	//bs.reset();//����

	//cout << bs.none() << endl;;//�����Ƿ���Խλ

	for (int i = 0; i < 8; i++)//�������� ���λ�ڵ�7λ
	{
		cout << bs[i] << '\t';
		
	}



	cin.get();




}