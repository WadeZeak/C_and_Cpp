#include<iostream>

using namespace std;




//�ֻ��� Ƕ��ʽ���� λ����

//�������
class Addition;//����,ֻ������ָ���������
Addition *pa1;
Addition *& pa2 = pa1;

Addition &a =*pa1;//���ñ����ʼ��
///Addition a;//������������

int x = 41;


class  Addition
{

private:
	int x;
	int y;

public:
	Addition(int a, int b) :x(a), y(b)
	{


	}

	int add()
	{
		return x + y;
	}

	int getx()
	{
		return x;
	}

	int gety()
	{

		return y;
	}

	int newadd(int a, int b)
	{
		//����������Ϊ0
		if (a == 0)
			return b;
		else if (b == 0)
			return a;
		else
		{
			int res = a^b;//���
			int bit = (a&b) << 1;//��λ ���� ��2
			//a+b=a^b+(a&b)<<1
			cout << " res=" << res << "\t" << "bit=" << bit << endl;
			return newadd(res, bit);
		}

	}


};

//�ӷ��������������  ��λ�������

int newadd(int a, int b)
{
	//����������Ϊ0
	if (a == 0)
		return b;
	else if (b == 0)
		return a;
	else
	{
		int res = a^b;//���
		int bit = (a&b) << 1;//��λ ���� ��2
		//a+b=a^b+(a&b)<<1
		cout << " res=" << res << "\t" << "bit=" << bit << endl;
		return newadd(res, bit);
	}
}

//	101 5
//  111 7
//��һ��
//   010 2 res
//  1010 10  bit  


//�ڶ���
// 1000 8 res
// 0100 4 bit


//������
//1100 12
//0000  0





void main1()
{

	//cout << newadd(11, 13) << endl;


	Addition addtion(11, 22);
	cout << addtion.add() << endl;
	cout << addtion.newadd(addtion.getx(), addtion.gety()) << endl;

	cin.get();

}




void main2()
{

	int num;
	cin >> num;

	int count = 0;//ͳ�ƶ����Ʊ�ʾ��1�ĸ���

	while (num)
	{
		count++;
		num &= num-1;//������������0
	}

	cout << count << endl;


	system("pause");



}


int Get1(int num)
{

	int count = 0;
	unsigned int flag = 1;
	//0000001  flag
	//   1111  num

	//0000001      1
	//flag  000001
	//num     1111

	//flag   0000010
	//num      1111

	//  0000010
	//flag   0000100
	//num      1111

	//  00000100
	//flag   0001000
	//num       1111

	//  000001000
	//flag   00010000
	//num       1111
	//0

	while (flag)//��λ�Ƚ� �ƶ���16λ
	{
		if (num&flag)//���λ���ϲ���0 �����+1
		{
			count++;
		}
		cout <<num <<"\t" <<flag << endl;
		flag = flag << 1;//����
	}


	return count;


}



void main()
{


	int num;
	cin >> num;


	cout << Get1(num) << endl;


	system("pause");




}










