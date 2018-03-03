#include<iostream>

using namespace std;

//汉诺塔
void Hanol(int n,char A,char B,char C)//A上的碟片借助B到C
{
	static int num = 1;
	cout << "第" << num << "次" << endl;
	num++;
	if (n<1)
	{
		return;
	}
	else
	{
		//双层递归
		Hanol(n - 1, A,C,B);//A上的碟片借助C到B
		cout << A << "->" << C << endl;
		Hanol(n - 1, B, A, C);//B上的碟片借助A到C
	}

}



void main()
{

	int n;
	cin >> n;
	cout << "n=" << n << endl;
	Hanol(n,'A','B','C'); 
	cin.get();
	cin.get();

}