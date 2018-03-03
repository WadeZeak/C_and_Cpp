#include<iostream>


using namespace std;

//标识错误的类型
class wrong
{


};

int intdivV(int a,int b)
{


	try//检测异常
	{
		

		if (b==0)
		{
			throw wrong();//抛出异常
		}
		int c = a / b;
		return c;

	}
	catch (wrong)
	{
		cout << "除法异常已经处理" << endl;
		return -1;
	}



	//异常处理 abort()
	//if (b==0)
	//{
	//	abort();
	//}

	

}


int intdivA(int a, int b)
{

	return a / b;
}



int intdiv(int a, int b)
{


	try//检测异常
	{


		if (b == 0)
		{
			throw 10;//可以是任何对象
		}
		int c = a / b;
		return c;

	}
	catch ( int)//类型名
	{
		cout << "除法异常已经处理" << endl;
		return -1;
	}


}





void main1()
{

	int x,y;

	cin >> x >> y;

	cout << intdiv(x, y) << endl;
	cin.get();
	cin.get();



}


void main()
{


	int x, y;

	cin >> x >> y;
	

	try
	{
		if (y==0)
		{
			throw "被除数为0";
		}
		else if (x==0)
		{
			throw "除数为0";
	
		}

	}
	catch (const char * s)
	{
		if (strcmp(s, "被除数为0")==0)
		{
			cout << "被除数为0,请重新输入" << endl;
			cin >> x >> y;
		}
		else if (strcmp(s, "除数为0") == 0)
		{
			cout << "除数为0,请重新输入" << endl;
			cin >> x >> y;
		}
		
	}



	cout << intdiv(x, y) << endl;
	cin.get();
	cin.get();

}