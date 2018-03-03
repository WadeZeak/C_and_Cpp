#include<iostream>
#include"Hash.h"
#include"Hash.cpp"
#include"HashNode.h"
using namespace std;

void main()
{

	Hash<int> myhash;
	int a[10] = { 10, 11, 12, 13, 14, 15, 16, 17, 18, 19 };

	myhash.init(a, 10);
	cout << myhash.isin(43, 43) << endl;

	HashNode<int> *p = myhash.find(8);


	cout << p->key << endl;
	cout << p->t << endl;


	cin.get();

}


