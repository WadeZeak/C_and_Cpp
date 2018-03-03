#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

template<class T>//实现对某些容器元素的操作
class Add
{
public:
	void operator () (T num)//重载括号运算符,进行操作
	{
		num *= 12;
		cout << num << endl;
	}


};

void Go(int num)
{
	num *= 12;
	cout << num << endl;


}



void main()
{

	vector<int>myvector;

	myvector.push_back(10);
	myvector.push_back(9);
	myvector.push_back(5);
	myvector.push_back(2);
	Add<int> add;

	//for_each(myvector.begin(),myvector.end(),add);//add 在此处自动加上() 自动重载()
	//for_each(myvector.begin(), myvector.end(), Add<int>());
//	for_each(myvector.begin(), myvector.end(), Go);


	auto fun = [](int a, int b){return a + b; };//R表达式

	cout<<fun(1, 2) << endl;


	auto funA = [](int a){	a *= 2; cout << a << endl; };
	//std::for_each(myvector.begin(), myvector.end(), funA);

	std::for_each(myvector.begin(), myvector.end(), [](int a){	a *= 2; cout << a << endl; });

	std::cin.get();

}