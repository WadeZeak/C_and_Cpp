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

	ip::udp::endpoint local_add(ip::address::from_string("127.0.0.1"), 1080);//�趨ip  �˿�
	 
	udp_socket.open(local_add.protocol());//���Э��
	//�ͻ��˲���Ҫ��P�ڶ˿�,���������Ҫ���а�

	char receive_str[1024] = { 0 };


	while (1)
	{
		string send_str;
		cout << "������:" << endl;
		cin >> send_str;
		cout << endl;

		udp_socket.send_to(buffer(send_str.c_str(), send_str.size()), local_add);//������Ϣ
		udp_socket.receive_from(buffer(receive_str, 1024), local_add);//����
		cout << "�յ�" << receive_str << endl;
	
		send_str.clear();
	}


	system("pause");
}