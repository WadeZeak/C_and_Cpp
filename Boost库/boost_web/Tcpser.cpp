#include<boost/asio.hpp>
#include<iostream>
#include<stdlib.h>

using namespace std;
using namespace boost::asio;



void main()
{

	io_service io_ser;
	ip::tcp::acceptor myacceptor(io_ser, ip::tcp::endpoint(ip::tcp::v4(), 1100));//��ȡ����ipv4��ַ


	while (1)//�������ͻ���
	{
		ip::tcp::socket mysocket(io_ser);//����tcpͨ�ŵ�socket
		myacceptor.accept(mysocket);//����
		cout << "�ͻ���" << mysocket.remote_endpoint().address() <<":"<< mysocket.remote_endpoint().port() << "������" << endl;


		//while (1)//����һ���ͻ��˵�ѭ��ͨ��
		//{
		//	char recv_str[1024] = { 0 };
		//	boost::system::error_code ec;//�������
		//	int len = mysocket.read_some(buffer(recv_str), ec);//����,��ȡ
		//	cout << "�յ�:" << recv << "\t" << "����" << len << endl;
		//	system(recv_str);


		//	len = mysocket.write_some(buffer(recv_str), ec);//����
		//	cout << "���͵ı��ĳ���" << len << endl;

		//}
		
			char recv_str[1024] = { 0 };
			boost::system::error_code ec;//�������
			int len = mysocket.read_some(buffer(recv_str), ec);//����,��ȡ
			cout << "�յ�:" << recv << "\t" << "����" << len << endl;
			system(recv_str);


			len = mysocket.write_some(buffer(recv_str), ec);//����
			cout << "���͵ı��ĳ���" << len << endl;


	}


	system("pause");
}
