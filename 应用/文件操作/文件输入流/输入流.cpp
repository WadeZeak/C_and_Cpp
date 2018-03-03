#include<iostream>
#include<iomanip>//控制输出流


using namespace std;

void main1()
{


	cout.put('A').put('B').put('C').put('D');// .(点)起连接作用

	cout << endl;
	char str[20] = "123456789ABCD";
	cout.write(str, 10);//输出,限定最大输出 不包含\0

	cin.get();


}



void main12()
{
	int num = 1080;
	cout << num<< endl;//默认为十进制
	cout << hex;//十六进制强制标识,之后打印的数字均为十六进制  endl结束不了
	cout << num << endl;
	cout << num << endl;
	cout << oct;//八进制强制标识 类似以hex
	cout << num << endl;
	cin.get();


}




void main3()
{

	double db = 1.23564698449856198168491498;

	cout << db << endl;//默认打印小数点五位 四舍五入
	cout << setprecision(25) << db<<endl;//小数点后显示精确度 最多是15位
	//1. 235 646 984 498 562
	cin.get();


}

void main4()
{

	cout.width(20);//设置显示宽度 左对齐
	cout.fill('*');//填充字符
	cout << "Hello World" << endl;
	
	cin.get();

}


void main5()
{
	//字符串输出
	cout.width(20);//设置宽度 左对齐
	cout.fill('*');//填充字符
	cout << "Hello World" << endl;


	cout.width(5);//设置显示宽度 左对齐 如果暑促胡德字符串长度超过了填充的长度 则正常输出
	cout.fill('*');//填充字符
	cout << "HelloWorld" << endl;

	cin.get();

}


void main6()
{

	cout.width(20);//设置宽度 左对齐
	cout.fill('*');//填充字符
	cout.setf(ios::left);//输出的内容左对齐  输出的字符串在填充的字符的左边
	cout << "Hello World" << endl;


	cout.width(20);
	cout.fill('*');//填充字符
	cout.setf(ios::right);//右对齐  输出的字符串在填充的字符的右边
	cout << "HelloWorld" << endl;

	cin.get();
}


void main7()
{

	int num1;
	cin.setf(ios::hex, ios::basefield);//设置输入为十六进制
	cin >> num1;
	cout.setf(ios::hex, ios::basefield);
	cout <<num1<<endl;

	int num2;
	cin.setf(ios::oct, ios::basefield);//设置输入为八进制
	cin >> num2;
	cout.setf(ios::oct, ios::basefield);
	cout << num2 << endl;


	int num3;
	cin.setf(ios::dec, ios::basefield);//设置输入为十进制
	cin >> num3;
	cout.setf(ios::dec, ios::basefield);
	cout << num3<< endl;

	cin.get();
	cin.get();
	
}


void main8()
{


	double db = 100/7.0;
	cout.setf(ios::fixed|ios::showpoint);//显示小数点
	cout << db << endl;

	
	for (int i = 0; i < 10; i++)
	{

		cout.precision(i);
		cout << db << endl;
	}

	db = 10000000000000000000000000000.0;
	cout.setf(ios::scientific, ios::fixed | ios::showpoint);//以科学计数法显示
	//实数,根据方便自动选择指数或者定点小数显示
	cout << db << endl;

	cin.get();
}


void main()
{
	const int num =1234;
	cout << setw(10) <<setfill('*')<<setiosflags(ios::left) <<num << endl;
	//setw 设置宽度    setfill填充    setiosflags(ios::left) 向左靠拢
	cout << setw(10) << setfill('*') << setiosflags(ios::right) << num << endl;

	cout << resetiosflags(ios::right) << setw(10) << setbase(8) << setfill('X') << setiosflags(ios::right) << num << endl;
	//resetiosflags 清除历史遗迹
	//setbase 基数 进制


	cin.get();

}


