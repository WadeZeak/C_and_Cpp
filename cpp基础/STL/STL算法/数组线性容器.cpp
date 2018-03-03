#include<iostream>
#include<vector>
#include<array>
#include<tuple>

using namespace std;


void main1()
{

	array<int, 5>myarray = { 1, 2, 3, 4, 5 };
	//静态数组 栈上

	vector<int>myvector;
	//动态数组 堆上
	myvector.push_back(1);


	//不需要变长 容量较小  array
	//需要变长 容量较大 vector

}