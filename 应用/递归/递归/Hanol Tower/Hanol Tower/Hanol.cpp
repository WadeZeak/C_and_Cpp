#include<iostream>

using namespace std;

//��ŵ��
void Hanol(int n,char A,char B,char C)//A�ϵĵ�Ƭ����B��C
{
	static int num = 1;
	cout << "��" << num << "��" << endl;
	num++;
	if (n<1)
	{
		return;
	}
	else
	{
		//˫��ݹ�
		Hanol(n - 1, A,C,B);//A�ϵĵ�Ƭ����C��B
		cout << A << "->" << C << endl;
		Hanol(n - 1, B, A, C);//B�ϵĵ�Ƭ����A��C
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