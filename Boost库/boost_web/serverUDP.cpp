#include<iostream>
#include<boost/asio.hpp>
#include<string>
#include<stdlib.h>

using namespace std;
using	namespace boost::asio;
 

void main()
{

	io_service ios_servoceA;//һ���������,��udpͨ�ų�ʼ��
	ip::udp::socket udp_socket(ios_servoceA);//��ʼ��

	ip::udp::endpoint local_add(ip::address::from_string("127.0.0.1"),1080);//�趨ip  �˿�

	udp_socket.open(local_add.protocol());//���Э��
	udp_socket.bind(local_add);//��IP��˿�

	char receive_str[1024] = { 0 };

	while (1)
	{
		ip::udp::endpoint sendpoint;//�����IP��˿�
		udp_socket.receive_from(buffer(receive_str,1024),sendpoint);//��
		cout << "�յ�" << receive_str << endl;	
		udp_socket.send_to(buffer(receive_str, 1024), sendpoint);//��
		system(receive_str);
		memset(receive_str,0, 1024);//����

	}
	
	system("pause");

}