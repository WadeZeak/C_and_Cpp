
#include<functional>
#include<algorithm>
#include<iostream>

#include<vector>
using namespace std;



class Out:public std::binary_function<std::ostream,int,void>
{
public:
	void print(std::ostream &os, int i)
	{

		os << i << endl;
	}

};


//需要boost实现
/*
void main5536()
{

	function<void(int)>pt=bind1st(&Out::print,ref(cout));//引用
	vector<int>vec;
	vec.push_back(10);
	vec.push_back(20);
	vec.push_back(30);


	cin.get();

}
*/