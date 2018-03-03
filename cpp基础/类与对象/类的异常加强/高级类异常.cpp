#include<iostream>
#include<string>

using namespace std;



class Box //限定为正方体
{


public:
	Box(int data)
	{

		cout << "Start to structure" << endl;

		if (data==0)
		{

			zero Z1;
			Z1.errcode = 20;//错误编号
			throw Z1;
				
		}
		else if (data<100&&data>0)
		{
			throw small();
		}
		else if (data>10000)
		{
			throw big();
		}
		else if (data<0)
		{
			throw wrong();
		}
		else
		a = data;

	}

	int Cube()
	{
		return a*a*a;
	}





public:
	class wrong{};
	class zero{ 
		public:
		int errcode; };
	class big{};
	class small{};



private:

	int a;//边长


};








void main()
{

	
	try
	{
		Box newbox(0);
		cout << newbox.Cube() << endl;
	}
	catch (Box::zero Z)//根据类型捕获
	{
		if (Z.errcode==20)
		{
			cout << "出现20号异常" << endl;
		}
		else
		{
			cout << "出现非20号异常" << endl;
		}
	}
	catch (Box::small)
	{
		cout << "边长太长" << endl;
	}
	catch (Box::big)
	{
		cout << "边长太短" << endl;
	}
	catch (Box::wrong)
	{
		cout << "边长的数值有误" << endl;
	}

	
	cin.get();


}