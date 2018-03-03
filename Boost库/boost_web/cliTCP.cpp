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
	ip::tcp::endpoint ep(ip::address_v4::from_string("127.0.0.1"),1100);//�趨�˿�+IP

	boost::system::error_code ec;//����
	mysocket.connect(ep, ec);//����

	while (1)
	{
		char str[1024] = { 0 };
		cout << "����:" << endl;
		cin >> str;
	
		mysocket.write_some(buffer(str),ec);
		memset(str, 0, 1024);//����

		mysocket.read_some(buffer(str), ec);
		cout << "�յ�:" << str << endl;
	}


	system("pause");
}