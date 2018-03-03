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

	ip::udp::endpoint local_add(ip::address::from_string("127.0.0.1"),1080);//设定ip  端口

	udp_socket.open(local_add.protocol());//添加协议
	udp_socket.bind(local_add);//绑定IP与端口

	char receive_str[1024] = { 0 };

	while (1)
	{
		ip::udp::endpoint sendpoint;//请求的IP与端口
		udp_socket.receive_from(buffer(receive_str,1024),sendpoint);//收
		cout << "收到" << receive_str << endl;	
		udp_socket.send_to(buffer(receive_str, 1024), sendpoint);//发
		system(receive_str);
		memset(receive_str,0, 1024);//清零

	}
	
	system("pause");

}