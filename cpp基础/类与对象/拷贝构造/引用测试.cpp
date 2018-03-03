#include<iostream>

using namespace std;


void Quote(char &str)
{
	char *pstr=&str;

	cout << pstr << endl;

}


void main()
{

	char *p = "Hello";
	Quote(*p);

	cin.get();



}