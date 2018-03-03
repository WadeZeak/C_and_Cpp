#include<boost/asio.hpp>
#include<iostream>
#include<stdlib.h>

using namespace std;
using namespace boost::asio;



void main()
{

	io_service io_ser;
	ip::tcp::acceptor myacceptor(io_ser, ip::tcp::endpoint(ip::tcp::v4(), 1100));//获取本机ipv4地址


	while (1)//处理多个客户端
	{
		ip::tcp::socket mysocket(io_ser);//构建tcp通信的socket
		myacceptor.accept(mysocket);//接收
		cout << "客户端" << mysocket.remote_endpoint().address() <<":"<< mysocket.remote_endpoint().port() << "连接上" << endl;


		//while (1)//处理一个客户端的循环通信
		//{
		//	char recv_str[1024] = { 0 };
		//	boost::system::error_code ec;//代码错误
		//	int len = mysocket.read_some(buffer(recv_str), ec);//接收,读取
		//	cout << "收到:" << recv << "\t" << "长度" << len << endl;
		//	system(recv_str);


		//	len = mysocket.write_some(buffer(recv_str), ec);//发送
		//	cout << "发送的报文长度" << len << endl;

		//}
		
			char recv_str[1024] = { 0 };
			boost::system::error_code ec;//代码错误
			int len = mysocket.read_some(buffer(recv_str), ec);//接收,读取
			cout << "收到:" << recv << "\t" << "长度" << len << endl;
			system(recv_str);


			len = mysocket.write_some(buffer(recv_str), ec);//发送
			cout << "发送的报文长度" << len << endl;


	}


	system("pause");
}
