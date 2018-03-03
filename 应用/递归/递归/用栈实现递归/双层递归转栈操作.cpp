#include<iostream>
#include<stack>

using namespace std;

int Fibonacci(int n)
{

	if (n==1||n==2)
	{
		return 1;
	}
	else
	{
		return Fibonacci(n - 1) + Fibonacci(n - 2);//Ê÷×´µÄ½á¹¹
	}


}

int Fibonaci_array(int n)
{
	int *p = new int[n];
	p[0] = p[1] = 1;

	for (int i = 2; i < n; i++)
	{
		p[i] = p[i - 1] + p[i - 2];
	}
	return p[n-1];
	
}


int Fibonacci_spell(int n)//ÂÖÌæ
{

	int f1, f2, f3;
	f1 = f2 = 1;
	for (int  i = 2; i <n; i++)
	{
		f3 = f1 + f2;
		f1 = f2;
		f2 = f3;
	}

	return f3;
}

int Fibonacci_stack(int n)
{

	stack<int>mystack;
	int f1, f2, f3;
	f1 = f2 = 1;
	int i = 2;

AAA:
	if (i<n)
	{

		mystack.push(f1);
		mystack.push(f2);
		f3 = 0;
		while (!mystack.empty())
		{
			f3 += mystack.top();
			mystack.pop();
		}

		f1 = f2;
		f2 = f3;
		i++;
		goto AAA;
	}


	return f3;

}




void main()
{
	/*cout << Fibonacci(20) << endl;
	cout << Fibonaci_array(20) << endl;*/
	cout << Fibonacci_spell(10) << endl;
	cout << Fibonacci_stack(10) << endl;
	cin.get();
}
