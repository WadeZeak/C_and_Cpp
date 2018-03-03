#include<iostream>
#include<stdlib.h>
#include"myvector.h"
#include "myvector.cpp"//没有此文件,链接时会报错
#include<string>

using namespace std;



void main425()
{



	

	myvector<int>myv;
	myv.push_back(2);
	myv.push_back(3);
	myv.push_back(4);
	myv.push_back(5);
	myv.show();


	int *p = myv.find(4);
	myv.change(p,10);
	myv.show();

	myv.del(10);
	myv.del(5);
	myv.del(1);
	myv.show();

	cin.get();

}


void main2()
{

	myvector<double>myv;

	myv.push_back(1.1);
	myv.push_back(2.2);
	myv.push_back(3.3);
	myv.push_back(4.4);
	myv.push_back(5.5);
	myv.show();

	cin.get();


}


void main3()
{

	myvector<char *>myv;

	myv.push_back("abc");
	myv.push_back("def");
	myv.push_back("hij");
	myv.push_back("klm");
	myv.push_back("nop");
	myv.show();

	cin.get();


}


void mai4535n()
{

	myvector<string>myv;//string 内部含有delete 释放

	myv.push_back("abc");
	myv.push_back("def");
	myv.push_back("hij");
	myv.push_back("klm");
	myv.push_back("nop");
	myv.show();

	cin.get();


}

void main()
{


		myvector<int>myv;

		myv.push_back(1);
		myv.push_back(2);
		myv.push_back(3);
		myv.push_back(4);
		myv.push_back(5);
		myv.show();

		myv.insert(4, 10);
		myv.show();
		myv.del(3);
		myv.insert(1, 51);
		myv.show();


		cout << myv[3] << endl;



		cin.get();

}



void main()
{

	myvector<int> myv1;
	myv1.push_back(11);
	myv1.push_back(12);
	myv1.push_back(13);
	myv1.push_back(14);
	myv1.push_back(15);
	myvector<int> myv2;
	myv2.push_back(31);
	myv2.push_back(32);
	myv2.push_back(33);

	myvector<int> myv3;
	myv3.push_back(131);
	myv3.push_back(132);
	myv3.push_back(133);
	myv3.push_back(1337);

	myvector< myvector<int>* > myvv;//自己写的模板嵌套用指针

	myvv.push_back(&myv1);
	myvv.push_back(&myv2);
	myvv.push_back(&myv3);
	myvv[0]->show();
	myvv[1]->show();
	myvv[2]->show();


	cin.get();
}