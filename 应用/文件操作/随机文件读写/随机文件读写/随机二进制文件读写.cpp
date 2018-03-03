#include<iostream>
#include<fstream>

using namespace std;

void main4()
{
	double db[10] = {1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9,10.10};	

	
	ofstream fout("XYZ.txt", ios::binary);

	fout.write((char *)db, sizeof(double) * 10);
	fout.close();

	ifstream fin("XYZ.txt", ios::binary);

	fin.seekg(-40,ios::end);//随机位置读取
	double *p = new double[80];
	fin.read((char *)p, 80);

	for (int i = 0; i < 5; i++)
	{
		cout << *(p + i) << endl;
	}
	

	fin.close();
	system("pause");
}



void main()
{

	double db[10] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.10 };


	ofstream fout("XYZ.txt", ios::binary);//ios::in | ios::out不再清零文件，否则会清零

	fout.write((char *)db, sizeof(double) * 10);

	double dbX[5] = { 12.2, 20.5, 30.6, 70.8, 6.9 };//写入

	fout.seekp(40, ios::beg);

	fout.write((char *)dbX, sizeof(double) * 5);

	fout.close();





	ifstream fin("XYZ.txt", ios::binary);
	double *p = new double[80];
	fin.read((char *)p, 80);

	for (int i = 0; i < 10; i++)
	{
		cout << *(p + i) << endl;
	}

	fin.close();

	
	system("pause");

}