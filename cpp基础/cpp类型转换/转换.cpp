#include<iostream>


using namespace std;

class Complex
{
private:
	int x;
	int y;
public:
	//���ι��첻�ܰ�������ת��Ϊ��������
	explicit Complex(int num)//explicit ������ʽת������������  �޷�����=���г�ʼ��  
	{
		x = num;
		y = num;
	}

	void Show()
	{

		cout << this->x << "+" << this->y << "i" << endl;

	}


	//������ת������
	//����û�в�����û�з���ֵ���ͣ���һ��Ҫ�з���ֵ
	//ֻ��Ϊ��Ա����������Ϊ��Ԫ����

	operator int();
	operator double()
	{
		return (double)(this->x + this->y);

	}

};


Complex::operator int()
{

	return x + y;

}

//ת�������ַ�ʽ = ��ֵ, () ����



void main3()
{

	int num(10.55);
	Complex complex1(num);

	complex1.Show();

	int data = (int)complex1 + 10;//����ת�����԰�һ���Զ�������ת��Ϊ��������������
	cout << data << endl;

	system("pause");



}




void main2()
{
	int num = 100;

	Complex complex=(Complex)num;//ʹ�ù��캯��
	complex.Show();


	//����ת����ʽ
	int data1 = complex;//��ֵ
	cout << data1 << endl;

	int data2(complex);//����
	cout << data2 << endl;

	int data3 = (int)complex;//(int)���п���
	cout << data3 << endl;

	//int data((int) complex);

	system("pause");




}




void main1()
{
	//��ʽת������ʽת��,�Ƿ�Я��ת������

	int num = (int)10.8;//������������ת��

	//û�к��ι���ʱ
//	Complex complex = (Complex)10.8; �﷨����,�޷��� double ת��Ϊ Complex
//	Complex complex = static_cast<Complex>(10.7);�﷨����,�޷��� double ת��Ϊ Complex



	Complex complex1 = (Complex)10;//��ʽת��
	complex1.Show();
	Complex complex(10);//ʹ�ù��캯��
	complex.Show();

	system("pause");

}