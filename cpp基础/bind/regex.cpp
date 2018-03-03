#include<iostream>
#include<regex>
#include<locale>
#include<string>

using namespace std;


//正则表达式

void main46536()
{
	locale::global(locale("English"));
	string str = "China 8English";
	regex exper("\\w+\\s\\d\\w+");//  \w+ 至少有一个单词  \s  空格    \d 数字
	//匹配就是1，不匹配就是0
	cout << regex_match(str, exper) << endl;
	cin.get();


}


void main41251()
{
	locale::global(locale("English"));
	string str = "China8English9abc";
	regex exper("(\\w+)\\d(\\w+)");
	smatch what;


	if (regex_search(str,what,exper))//按照正则表达式检索
	{
		cout << what[0] << endl;
		cout << what[1] << endl;
		cout << what[2] << endl;
		cout << what[3] << endl;


	}
	else//检索失败
	{
		cout << "err_search" << endl;
	}



	cin.get();


}






void main()
{



	locale::global(locale("English"));
	string str = "China English9abc";
	regex exper("\\d");
	string rstr = "___";

	cout << regex_replace(str, exper, rstr);

	cin.get();

}
