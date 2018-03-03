#include<iostream>
#include<vector>//容器

#include<array>
#include<algorithm>//调用算法


using namespace std;


template<class T>//类模板实现了方法
class MyClass
{
public:
	void  operator ()(const T &t)//重载() 使用括号进行打印
	{

		cout << t << endl;

	}


};




void main()
{
	vector<int>myvector;
	myvector.push_back(10);
	myvector.push_back(20);
	myvector.push_back(30);
	myvector.push_back(40);
	myvector.push_back(50);

	MyClass<int>myclass;//对于类模板进行实例化

	for_each(myvector.begin(), myvector.end(),myclass);
	//begin end 迭代器,是一个指针
	array<int, 10>myarray = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	for_each(myarray.begin(), myarray.end(), myclass);

	//算法适用于任何容器 for_each 就是一种算法

	cin.get();

}




