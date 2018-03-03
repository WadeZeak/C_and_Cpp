#include<iostream>
#include<fstream>

using namespace std;


struct MyStruct
{

	int num;
	double db;

};




void main()
{
	ofstream   fout("C:\\Users\\Zeak_K\\Desktop\\big.txt",ios::binary);
	
	MyStruct Ss[5] = { { 1, 1.1 }, {2,2.2}, {3,3.3}, {4,4.4}, {5,5.5} };
	fout.write((char *)Ss, sizeof(MyStruct)*5);//只接受按照字节拷贝
	fout.close();



	ifstream   fin("C:\\Users\\Zeak_K\\Desktop\\big.txt", ios::binary);
	MyStruct *p = new MyStruct[5];//分配长度
	fin.read((char *)p, sizeof(MyStruct) * 5);

	for (int i = 0; i < 5; i++)
	{
		cout << p[i].db << '\t';
		cout << p[i].num << endl;
	}

	cin.get();
}