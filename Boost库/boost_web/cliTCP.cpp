#include<boost/asio.hpp>
#include<iostream>
#include<stdlib.h>
#include<string>

using namespace std;
using namespace boost::asio;


void main()
{

	io_service io_serv;
	ip::tcp::socket mysocket(io_serv);
	ip::tcp::endpoint ep(ip::address_v4::from_string("127.0.0.1"),1100);//设定端口+IP

	boost::system::error_code ec;//错误
	mysocket.connect(ep, ec);//连接

	while (1)
	{
		char str[1024] = { 0 };
		cout << "输入:" << endl;
		cin >> str;
	
		mysocket.write_some(buffer(str),ec);
		memset(str, 0, 1024);//清零

		mysocket.read_some(buffer(str), ec);
		cout << "收到:" << str << endl;
	}


	system("pause");
}