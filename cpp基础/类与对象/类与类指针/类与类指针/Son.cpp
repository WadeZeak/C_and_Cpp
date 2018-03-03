#include "Son.h"
#include<iostream>

using namespace std;

Son::Son()
{

	this->pson = "Son";
	cout << "Creat Son Obj" << endl;
}


Son::~Son()
{
	cout << "Delete Son Obj" << endl;


}

void Son::Show()
{

	cout << this->pson << endl;

}
void Son::IsSon()
{
	cout << "This is Son Class" << endl;



}


