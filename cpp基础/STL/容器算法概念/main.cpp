#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

template<class T>//ʵ�ֶ�ĳЩ����Ԫ�صĲ���
class Add
{
public:
	void operator () (T num)//�������������,���в���
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

	//for_each(myvector.begin(),myvector.end(),add);//add �ڴ˴��Զ�����() �Զ�����()
	//for_each(myvector.begin(), myvector.end(), Add<int>());
//	for_each(myvector.begin(), myvector.end(), Go);


	auto fun = [](int a, int b){return a + b; };//R���ʽ

	cout<<fun(1, 2) << endl;


	auto funA = [](int a){	a *= 2; cout << a << endl; };
	//std::for_each(myvector.begin(), myvector.end(), funA);

	std::for_each(myvector.begin(), myvector.end(), [](int a){	a *= 2; cout << a << endl; });

	std::cin.get();

}