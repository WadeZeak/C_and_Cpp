

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
			
		p = new int[num];//��ȷ�Ĵ�������׳��쳣֮��

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

	try//����ִ��,�����쳣,�Զ��׳��쳣
	{
		Array myarray(-5);

	}
	catch (wrong  e)
	{
		cout << "�������쳣,�����С���벻С��0" << endl;

	}

	cin.get();

}



void main()
{

	int a[3] = { 1, 2, 3 };

	//printf("%d", 2[a]);//*(2+a)

//	printf("%d", a[1234]);


	//try catch ��һ������,֮�䲻������������

	try//����ִ��,�����쳣,�Զ��׳��쳣
	{
		Array myarray(-1);
		//myarray[-1];
	}
	catch (wrongA  e)
	{
		cout << "�������쳣,����ʱ�±����" << endl;

	}
	catch (wrong  e)
	{
		cout << "�������쳣,�����С���벻С��1" << endl;

	}

	getchar();


}