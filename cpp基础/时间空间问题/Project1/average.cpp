#include<iostream>

using namespace std;


int average(int a, int b)
{

	//return (a + b) / 2;//容易造成溢出
	return a + (b - a) / 2;
}


void main()
{

	int a = 20000;
	int b = 30000;
	cout << average(a, b);
	cin.get();

}
