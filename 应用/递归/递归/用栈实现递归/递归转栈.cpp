#include<iostream>
#include<stack>


using namespace std;

int get100(int n)
{
	if (!n)
	return 0;
	else
	return get100(n - 1) + n;
}


int printN(int n)
{
	if (n>0)
	{
		cout << n<<"\t";
		return printN(n-1);
	}
	
}




void printNS(int n)
{
	
	stack<int> mystack;
AAA:
	if (n>0)
	{
	
		mystack.push(n--);
		
			cout << mystack.top() << endl;
			mystack.pop();
		

		goto AAA;
		
	}


	

}

void  DectoBin(int n)
{

	if (n)
	{	
		DectoBin (n/2);
		cout << n % 2 ;

	}

}



int getN(int i)
{
	stack<int> mystack;
	int res = 0;
AAA:
	if (i)
	{
		mystack.push(i--);

		goto AAA;
	}

	while (!mystack.empty())
	{
		res += mystack.top();
		mystack.pop();
	}
	return res;


}

void to2_stack(int n)
{
	stack<int>mystack;

AAA:
	if (n)
	{
		mystack.push(n % 2);
		n /= 2;
		goto AAA;
	}

	while (!mystack.empty())
	{
		cout << mystack.top();
		mystack.pop();
	}

}



void main633()
{
	//cout << get100(100) << endl;


	//printN(10);
	//cout << getN(100) << endl;

	//printNS(10);

	DectoBin(15);
	cout << endl;
	to2_stack(15);
	cin.get();
	





}