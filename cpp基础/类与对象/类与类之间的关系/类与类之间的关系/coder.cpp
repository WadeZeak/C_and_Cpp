#include "coder.h"
using namespace std;

coder::coder()
{
	this->num = 10;

	cout << "Creat coder Obj" << endl;


}


coder::~coder()
{
	cout << "Delete coder Obj" << endl;
}


void  coder::GirFriend()
{
	cout << "You have a girlfirend!!" << endl;
}




void coder::Coding()
{

	cout << "Hello World!!!" << endl;

}


void coder:: CodePrivate()
{

	cout << "子类禁止调用父类的私有成员" << endl;

}