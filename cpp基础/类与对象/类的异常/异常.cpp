

#include<iostream>

using namespace std;


class wrong
{


};
class wrongA
{


};


class Array
{

public:

	Array(int num)
	{

		if (num <= 0)
		{
			throw wrong();
		}
			
		p = new int[num];//正确的代码放在抛出异常之后

			for (int i = 0; i < num; i++)
			{
				p[i] = 0;
			}


	}

	int & operator [](int num)
	{
		if (num<0||num>=n)
		{
			throw wrongA();		
		}		
		return p[num];
	}



private:
	int *p;
	int n;

};



void main324()
{

	try//尝试执行,出现异常,自动抛出异常
	{
		Array myarray(-5);

	}
	catch (wrong  e)
	{
		cout << "程序发生异常,数组大小必须不小于0" << endl;

	}

	cin.get();

}



void main()
{

	int a[3] = { 1, 2, 3 };

	//printf("%d", 2[a]);//*(2+a)

//	printf("%d", a[1234]);


	//try catch 是一个整体,之间不能有其他内容

	try//尝试执行,出现异常,自动抛出异常
	{
		Array myarray(-1);
		//myarray[-1];
	}
	catch (wrongA  e)
	{
		cout << "程序发生异常,访问时下标出错" << endl;

	}
	catch (wrong  e)
	{
		cout << "程序发生异常,数组大小必须不小于1" << endl;

	}

	getchar();


}