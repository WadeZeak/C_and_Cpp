#include<algorithm>
#include<iostream>

using namespace std;

struct Display
{

	void operator() (int x)//重载()
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

	//查找 自行决定算法
	int *p = find(a, a + 10, 10);

	cout << (void *)a <<'\t' <<(void *)(a + 10) << endl;

	cout << *p << endl;
	cout << p << endl;

	if (p==(a+10))
	{
		cout << "没有找到" << endl;
	}


	//for_each(a, a + 10, Display());//for_each 遍历

	for_each(a, a + 10, show);
	//最后一个参数必须是函数类型


	cin.get();

}
