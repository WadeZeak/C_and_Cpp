#include<iostream>

using namespace std;




//手机端 嵌入式开发 位运算

//类的声明
class Addition;//声明,只能声明指针或者引用
Addition *pa1;
Addition *& pa2 = pa1;

Addition &a =*pa1;//引用必须初始化
///Addition a;//不能声明对象

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
		//让相与趋势为0
		if (a == 0)
			return b;
		else if (b == 0)
			return a;
		else
		{
			int res = a^b;//相加
			int bit = (a&b) << 1;//进位 左移 乘2
			//a+b=a^b+(a&b)<<1
			cout << " res=" << res << "\t" << "bit=" << bit << endl;
			return newadd(res, bit);
		}

	}


};

//加法的相加用亦或计算  进位用与计算

int newadd(int a, int b)
{
	//让相与趋势为0
	if (a == 0)
		return b;
	else if (b == 0)
		return a;
	else
	{
		int res = a^b;//相加
		int bit = (a&b) << 1;//进位 左移 乘2
		//a+b=a^b+(a&b)<<1
		cout << " res=" << res << "\t" << "bit=" << bit << endl;
		return newadd(res, bit);
	}
}

//	101 5
//  111 7
//第一次
//   010 2 res
//  1010 10  bit  


//第二次
// 1000 8 res
// 0100 4 bit


//第三次
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

	int count = 0;//统计二进制表示中1的个数

	while (num)
	{
		count++;
		num &= num-1;//让数据趋向于0
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

	while (flag)//逐位比较 移动了16位
	{
		if (num&flag)//如果位置上不是0 则计数+1
		{
			count++;
		}
		cout <<num <<"\t" <<flag << endl;
		flag = flag << 1;//左移
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










