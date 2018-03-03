#include<iostream>
#include<stdlib.h>
#include<vector>
#include<algorithm>//算法头文件 lambda表达式，不仅仅适用与array ,也适用于vector

using namespace std;

//vector 用于管理不规则的结构  可以实现动态无规则


void main1()
{
	vector<int>myvector;
	myvector.push_back(11);//推入数组
	myvector.push_back(22);//lambda表达式
	myvector.push_back(33);
	myvector.push_back(44);
	myvector.push_back(55);
	int result=0;//必须初始化


	//求和
	for_each(myvector.begin(), myvector.end(), [&result](int x){  result += x; });
	//[&result](int x){  result += x; }函数包装器   &result 直接操作一个外部变量,等价于一个返回值   x 充当每一次迭代器指向的元素
	//[ ]( ){  }  [ ]穿传递一个外部变量,等价于返回值    (  ) 参数   {  } 操作

	cout << result << endl;
	cin.get();

}

void main()
{

	vector<int>myvector(5);//指定数组大小,默认初始化为0 

	//增
	myvector.push_back(10);//在尾部推入元素
	myvector.push_back(20);
	myvector.push_back(30);
	myvector.push_back(40);
	myvector.push_back(50);

	myvector.pop_back();//弹出最后一个 也就是删除最后一个


	//插入
	myvector.insert(myvector.begin() + 2, 1000);//在头部插入
	myvector.insert(myvector.begin() + 2,9999);//在第三个位置插入

	//删除
	//myvector.erase(myvector.begin());//删除第1个元素
	//myvector.erase(myvector.begin()+3);//删除第4个元素
	//myvector.erase()  根据迭代器删除元素



	for (int i = 0; i < myvector.size(); i++)
	{
		//查询 修改 if判断 修改数据
		cout << myvector.at(i) << endl;//打印元素
	}
	myvector.clear();//清空所有元素
	system("pause");
}



void main3()
{
	vector<int>myvector1;
	myvector1.push_back(1);
	myvector1.push_back(2);
	myvector1.push_back(3);

	vector<int>myvector2;
	myvector2.push_back(11);
	myvector2.push_back(12);
	myvector2.push_back(13);
	myvector2.push_back(14);

	vector<int>myvector3;
	myvector2.push_back(111);
	myvector2.push_back(122);
	myvector2.push_back(133);
	myvector2.push_back(144);
	myvector2.push_back(135);
	myvector2.push_back(146);

	vector<vector<int>>allvector;//可变数组的元素是可变数组
	allvector.push_back(myvector1);
	allvector.push_back(myvector2);
	allvector.push_back(myvector3);

	for (int i = 0; i < allvector.size(); i++)
	{
		for (int j = 0; j < allvector[i].size(); j++)
		{
			cout << allvector[i][j] << '\n';
		}
		cout << '\n';
	}

	system("pause");
}





