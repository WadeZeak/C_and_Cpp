#include<string>
#include<iostream>

using namespace std;


void main432()
{
	//C语言写法
	//char str[123];
	//str = "123456789;


	//字符串初始化
	char str[123]="China is great";

	string str1(str);
	str1 = "gfcisaugvigv";
	cout << str1 << endl;




	cin.get();

}


void mainasfa()
{


	string str1("12345");
	string str2("678910");
	string str3 = str1 + str2;//两个char 类型 不允许加法操作



	cout << str3 << endl;

	cin.get();
}


void mainfhfh()
{
	string str1("12345");
	string str2("678910");

	str1.append(str2);//字符串追加

	//str1 = str1 + str2;//相当于追加

	cout << str1<<endl;
	cin.get();


}





void mainlkfskv()
{

	string str1("12345");

	//任意插入字符串
	str1.insert(str1.begin(), 'a');
	cout << str1 << endl;

	str1.insert(str1.end(), 'b');
	cout << str1 << endl;

	str1.insert(str1.begin()+2,3, 'c');
	cout << str1 << endl;


	cin.get();
}




void mainsgsgs()
{
	string str1("12345abcd");


//	str1.erase(str1.begin());//删除


	str1.erase(3, 4);//从第3个字符开始,删除了4个字符
	auto ibeg = str1.begin();
	auto iend = str1.end();

	//遍历
	while (ibeg!=iend)
	{
		cout << *ibeg << endl;
		ibeg++;

	}


	cin.get();
}



void mainsdvsonvo()
{

	string str = "123456789abcdef";

	str.replace(0, 3, "China");//从第0个字符到第3个字符替换为China

	cout << str << endl;

	cin.get();


}



void maindfhdh()
{


	string str ("“江上一笼统，井上黑窟窿。黄狗身上白，白狗身上肿");

	cout << (int)str.find("井上黑窟窿") << endl;
	
	//int pos = str.find("，");//找到第一个匹配的,否则返回-1

	int pos = str.rfind("黄狗");
	cout << pos << endl;


	cin.get();

}




void maindbsfbs()
{

	string str = "fa123sdf";

	//int pos = str.find_first_of("789");

	//find_first_of 找到第一个与字符串匹配的字符位置

	//int noposs = str.find_first_not_of("123");
//find_first_not_of 找到第一个与字符串不匹配的字符

	//int pos = str.find_last_of("789");
	//find_last_of 找到最后一个与字符串匹配的字符位置

	int pos = str.find_last_not_of("123");
	//find_last_not_of 找到最后一个与字符串不匹配的字符的位置
	cout << pos << endl;

	cin.get();

}



void maindfgdfh()
{
	string str1 = "ABC";
	string str2 = "ABCD";
	cout << (str1 == str2) << endl;//重载运算符 比较字符串是否一致
	

	char strA[] = "1234";
	char strB[] = "7894";

	cout << (strA == strB) << endl;//比较地址是否一致

	cin.get();
}


void main()
{
	string str("abc is abc china is china");


	/*int pos = str.find('a',0);
	cout << pos << endl;

	pos = str.find('a', pos + 1);
	cout << pos << endl;

*/

	//int pos = str.find("AB",0);//没有找到,返回-1
	//cout << pos << endl;

	int pos = str.find("china",0);
	cout << pos << endl;
	pos = str.find("china", pos+5);
	cout << pos << endl;

	cin.get();



}