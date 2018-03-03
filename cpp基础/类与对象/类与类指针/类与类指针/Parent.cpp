#include "Parent.h"
#include<iostream>

using namespace std;

Parent::Parent()
{
	this->strpar = "Parent";
	cout << "Creat Parent Obj" << endl;

}


Parent::~Parent()
{

	cout << "delete Parent Obj" << endl;

}


void Parent:: Show()
{
	cout << this->strpar << endl;


}

void Parent::IsParent()
{

	cout << "This is Parent Class" << endl;
}