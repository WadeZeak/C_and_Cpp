#include<iostream>
#include <string>


using namespace std;



class box   //������
{
public:
	box(int data)
	{
		cout << "��ʼ����" << endl;

		if (data == 0)
		{
			zero z1(22);
			z1.seterr(21);//�����쳣����
			throw z1;
		}
		else if (data >0 && data<100)
		{
			throw small();
		}
		else  if (data>10000)
		{
			throw big();
		}
		else if (data>100 && data<10000)
		{
			a = data;
		}
		else
		{
			throw wrong{};
		}


	}



	class wrong	//���� ���Խ�����������쳣
	{
	public:
		virtual void show()//�麯���ӿ� ʹ��һ���쳣��,����ͬ���쳣,����������ĵĺ���
		{
			cout << "show wrong" << endl;
		}
	
	};
	class big:public wrong
	{
	public:
		void show()
		{
			cout << "big wrong" << endl;
		}
	};

	class small :public wrong
	{
	public:
		void show()
		{
			cout << "small wrong" << endl;
		}

	};


	class zero :public small//����������,���Խ������ִ���
	{

	public:

		int errcode;
	public:

		zero(int i) :errcode(i)//���캯��
		{

		}
		void seterr(int i)
		{
			errcode = i;
		}
	};




private:
	int a;//�䳤




};

void main()
{

	try
	{
		box newbox(13330);

	}
	catch (box::zero w)
	{
		if (w.errcode == 22)
		{
			cout << "22�Ŵ���,�����峤�Ȳ�����Ϊ0" << endl;
		}
		else
		{
			cout << "��22�Ŵ���,�����峤�Ȳ�����Ϊ0" << endl;
		}

	}

	//�麯��һ���ӿ� ����������
	catch (box::wrong &w)//��������ָ��ʵ�ֵ�,��һ�����������,��������Ķ���,������麯��,������������ǰ��ķ��� ͨ���麯����ʵ��
	{

		w.show();
		//cout << "�����峤���쳣" << endl;
	}
	catch (box::small &s)//���Խ��������쳣 small zero
	{
		s.show();
		//cout << "�����峤��̫��" << endl;
	}

	catch (box::big &b)
	{
		b.show();
		//	cout << "�����峤��̫��" << endl;
	}

	cin.get();

}