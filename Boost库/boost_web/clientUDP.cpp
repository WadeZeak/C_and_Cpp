#include<iostream>
#include<boost/asio.hpp>
#include<string>
#include<stdlib.h>



using namespace std;
using	namespace boost::asio;



void main()
{

	io_service ios_servoceA;//一个服务的类,给udp通信初始化
	ip::udp::socket udp_socket(ios_servoceA);//初始化

	ip::udp::endpoint local_add(ip::address::from_string("127.0.0.1"), 1080);//设定ip  端口
	 
	udp_socket.open(local_add.protocol());//添加协议
	//客户端不需要绑定P于端口,而服务端需要进行绑定

	char receive_str[1024] = { 0 };


	while (1)
	{
		string send_str;
		cout << "请输入:" << endl;
		cin >> send_str;
		cout << endl;

		udp_socket.send_to(buffer(send_str.c_str(), send_str.size()), local_add);//发送消息
		udp_socket.receive_from(buffer(receive_str, 1024), local_add);//接收
		cout << "收到" << receive_str << endl;
	
		send_str.clear();
	}


	system("pause");
}