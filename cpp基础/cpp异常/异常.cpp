#include<iostream>


using namespace std;

//��ʶ���������
class wrong
{


};

int intdivV(int a,int b)
{


	try//����쳣
	{
		

		if (b==0)
		{
			throw wrong();//�׳��쳣
		}
		int c = a / b;
		return c;

	}
	catch (wrong)
	{
		cout << "�����쳣�Ѿ�����" << endl;
		return -1;
	}



	//�쳣���� abort()
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


	try//����쳣
	{


		if (b == 0)
		{
			throw 10;//�������κζ���
		}
		int c = a / b;
		return c;

	}
	catch ( int)//������
	{
		cout << "�����쳣�Ѿ�����" << endl;
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
			throw "������Ϊ0";
		}
		else if (x==0)
		{
			throw "����Ϊ0";
	
		}

	}
	catch (const char * s)
	{
		if (strcmp(s, "������Ϊ0")==0)
		{
			cout << "������Ϊ0,����������" << endl;
			cin >> x >> y;
		}
		else if (strcmp(s, "����Ϊ0") == 0)
		{
			cout << "����Ϊ0,����������" << endl;
			cin >> x >> y;
		}
		
	}



	cout << intdiv(x, y) << endl;
	cin.get();
	cin.get();

}