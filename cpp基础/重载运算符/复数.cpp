#include<iostream>

using namespace std;



class Complex
{
public:
	int x;
	int y;

public:

	//û�й����޷�ʹ��this
	//�ڲ�����ʹ��this
	Complex(int x, int y) :x(x), y(y)
	{
		/*this->x += 1;
		this->y += 1;*/
		
	}

	Complex()
	{
		this->x = 0;
		this->y = 0;

	}


	~Complex()
	{



	}

	void Show()
	{
		cout << this->x << "+" << this->y<<"i" << endl;
	}

	//��������ؿ�������Ϊ����Ԫ����������ͨ��Ա����
	//������Ҫ���������Ԫ�����޷�ʹ��thisָ��

	//���������
	//ostream ���ñ�׼�����
	friend ostream & operator << (ostream &out, Complex &complex);

	//istream ���ñ�׼������
	friend istream & operator >> (istream &in, Complex &complex); 


	//��Ԫ�������س��������Ҳ�������ͬ���͵������



	//������
	void operator ++()//++����
	{
		this->x++;
		this->y++;
	}

		void operator --();//���Լ�

 //��������
		int operator()(int num)//���غ�����������������������Ե���һ���������ò��������ؽ��
		{
			cout << num << endl;
			return num * 2;

		}


		//��Ԫ�����
		Complex operator + (Complex addtada)
		{
			Complex temp;//��ʱ����
			temp.x = this->x + addtada.x;
			temp.y = this->y + addtada.y;
			return temp;
		}
		//��Ԫ�������Դ���ͬ�����ͽ���
		//��Ա������ʵ�֣���Ԫ����������ʵ��
		//��Ԫ����
		friend Complex operator +(Complex cimplex1, int x);//��Ԫ����ʵ�����������
};



void Complex::operator --()//����--
{
	this->x--;
	this->y--;
}


//cout ����
ostream & operator << (ostream &out, Complex &complex)//������������
{
	out << complex.x << "+" << complex.y <<"i"<< endl;
	return out;
}


//cin����
istream & operator >> (istream &in, Complex &complex)
{

	cout << "������X,Y" << endl;
	in >> complex.x;
	in>>complex.y;

	return in;
}


Complex operator +(Complex complex1, int x)
{
	Complex temp;
	temp.x = complex1.x + x;
	temp.y = complex1.y + x;
	return temp;
}




void main()
{

	Complex complex1(10,20), complex2(30,40);
	/*cin >> complex1;
	cin >> complex2;*/

	cout << complex1 + complex2 << endl;//��ʱ����complex1�������� �����ݵ�һ�����������в���
	cout << complex1 + 50 << endl;

	system("pause");

}



void main200()
{

	Complex complex;
	cin >> complex;
	cout << complex;
	//complex++;

	/*int num;
	cin >> num;
	*/
	complex--;

	cout << complex;

	cout << complex(10) << endl;
	cout << complex(20) << endl;

	cin.get();

	system("pause");


}



void main500()
{

	Complex complex1(7, 8);
	//complex1.Show();

	cout << complex1;
	cin >> complex1;
	cout<<complex1;
	system("pause");

}