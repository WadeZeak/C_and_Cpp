#include<bitset>
#include<iostream>


using namespace std;

void main5()
{

	//8位 255表示构造的数据
	//bitset<8>bs (255);
	bitset<8>bs(215);
	for (int i = 0; i < 8; i++)//倒着排列 最高位在第7位
	{
		cout << bs[i] <<'\t';
		cout << ~bs[i] << endl;
	}



	cin.get();




}


void main543()
{

	float f = 1046461161611.5534;
	bitset<32>myset(f);//阶码
	
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
	bitset<32>myset(num);//阶码

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

	bs.set(7, 0);//操作二进制位

	bs.set(0, 0);


	cout << bs.size() << endl;//位数

	//bs.reset();//清零

	//cout << bs.none() << endl;;//测试是否有越位

	for (int i = 0; i < 8; i++)//倒着排列 最高位在第7位
	{
		cout << bs[i] << '\t';
		
	}



	cin.get();




}