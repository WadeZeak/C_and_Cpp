#include<iostream>
#include<vector>//����

#include<array>
#include<algorithm>//�����㷨


using namespace std;


template<class T>//��ģ��ʵ���˷���
class MyClass
{
public:
	void  operator ()(const T &t)//����() ʹ�����Ž��д�ӡ
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

	MyClass<int>myclass;//������ģ�����ʵ����

	for_each(myvector.begin(), myvector.end(),myclass);
	//begin end ������,��һ��ָ��
	array<int, 10>myarray = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	for_each(myarray.begin(), myarray.end(), myclass);

	//�㷨�������κ����� for_each ����һ���㷨

	cin.get();

}




