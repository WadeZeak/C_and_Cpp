#include<iostream>
#include<stack>


using namespace std;

void main2()
{
	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	stack<int> mystack;
	for (int i = 0; i < 10; i++)
	{
		mystack.push(a[i]);
	}

	while (!mystack.empty())
	{
		int num = mystack.top();
		std::cout << num << " ";
		mystack.pop();
	}

	cin.get();

}








void main1()
{

	int num;
	cin >> num;


	stack<int>mystack;

	while (num)
	{
		mystack.push(num % 2);

		num /= 2;

	}

	while (!mystack.empty())//ջΪ��,����1
	{
		int num = mystack.top();
		cout<<num<<'\n';
		mystack.pop();//��������Ԫ��
	}


	cout << endl;
	system("pause");


}