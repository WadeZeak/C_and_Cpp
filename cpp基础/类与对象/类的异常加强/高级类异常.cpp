#include<iostream>
#include<string>

using namespace std;



class Box //�޶�Ϊ������
{


public:
	Box(int data)
	{

		cout << "Start to structure" << endl;

		if (data==0)
		{

			zero Z1;
			Z1.errcode = 20;//������
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

	int a;//�߳�


};








void main()
{

	
	try
	{
		Box newbox(0);
		cout << newbox.Cube() << endl;
	}
	catch (Box::zero Z)//�������Ͳ���
	{
		if (Z.errcode==20)
		{
			cout << "����20���쳣" << endl;
		}
		else
		{
			cout << "���ַ�20���쳣" << endl;
		}
	}
	catch (Box::small)
	{
		cout << "�߳�̫��" << endl;
	}
	catch (Box::big)
	{
		cout << "�߳�̫��" << endl;
	}
	catch (Box::wrong)
	{
		cout << "�߳�����ֵ����" << endl;
	}

	
	cin.get();


}