#include<iostream>

using namespace std;


class Area
{
public:
	friend class Complex;//����

	Area()
	{
		this->cx = 0;
		this->cy = 0;
	}

	void setxy(int a, int b)
	{
		this->cx = a;
		this->cy = b;
	}
	
private:
	int cx;
	int cy;



};



class Complex
{
private:
	int x;
	int y;

public:

	//���캯��ʵ��������ת��
	Complex(Area area)
	{
		this->x = area.cx;
		this->y = area.cy;
	}

	void Show()
	{
		cout << this->x << "+" << this->y << "i" << endl;
	}
	operator Area()//������ת������
	{

		Area temp;
		temp.cx = x;
		temp.cy = y;
		return temp;
	}


};

void main()
{

	Area area;

	//û������ת���������߹��캯��,�޷�ʵ������ת��
	//Complex complex = (Complex)area;
	Area area1;
	area1.setxy(10, 20);
	Complex complex = static_cast<Complex>(area);//ͨ�����캯��ʵ��������ת��
	
	complex.Show();
	complex = area1;
	complex.Show();
	system("pause");





}