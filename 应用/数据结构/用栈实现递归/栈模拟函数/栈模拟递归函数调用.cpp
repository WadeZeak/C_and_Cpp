#include<iostream>
#include<stack>

using namespace std;

struct data
{

	int n;
	void(*p)(int);//º¯ÊýÖ¸Õë

};


void  printN(int n)
{

	if (n>0)
	{
		cout << n << "\t";
	 	printN(--n);
	}

}


void print(int n)
{
	cout << n << "\t";
}


void printall(int n)
{

	stack<data>mystack;
AAA:
	if (n>0)
	{
		data s1;
		s1.n = n;
		s1.p = print;
		mystack.push(s1);
		while (!mystack.empty())
		{

			data stmp=mystack.top();
			stmp.p(stmp.n);
			mystack.pop();
		}

		n--;
		goto AAA;

	}


}



void main()
{


	printN(10);
	cout << endl;
	printall(10);
	cin.get();


}