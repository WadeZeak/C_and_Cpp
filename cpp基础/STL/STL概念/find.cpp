#include<algorithm>
#include<iostream>

using namespace std;

struct Display
{

	void operator() (int x)//����()
	{
		cout << x << endl;

	}



};


void show(int x)
{

	cout << x << endl;
}


void main1()
{
	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	//���� ���о����㷨
	int *p = find(a, a + 10, 10);

	cout << (void *)a <<'\t' <<(void *)(a + 10) << endl;

	cout << *p << endl;
	cout << p << endl;

	if (p==(a+10))
	{
		cout << "û���ҵ�" << endl;
	}


	//for_each(a, a + 10, Display());//for_each ����

	for_each(a, a + 10, show);
	//���һ�����������Ǻ�������


	cin.get();

}
