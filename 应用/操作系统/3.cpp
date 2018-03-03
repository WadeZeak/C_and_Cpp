#include<iostream>
#include<iomanip>
#define m 10               //�ٶ�ϵͳ����Ŀ����������Ϊm
#define n 10               //�ٶ�ϵͳ����������ҵ����Ϊn
#define minsize 100
#define SADDRESS 1           //���з��������ʼ��ַ
#define SLENGTH 102400      //���з�����ĳ���

using namespace std;

struct
{
	float address;            //�ѷַ�����ʼ��ַ
	float length;             //�ѷַ������ȣ���λΪ�ֽ�
	int flag;               //�ѷ�������Ǽ�����־����0��ʾ����Ŀ
}used_table[n];            //�ѷ�������

struct
{
	float address;                //��������ʼ��ַ
	float length;                 //����������
	int flag;                       //��������Ǽ���Ŀ,��0��ʾ����Ŀ��1��ʾδ����
}free_table[m];                   //��������

void allocate(char, float);       //��������Ϊ��ҵ����ռ�
void reclaim(char);               //���տռ�
void main3463()
{
	int i, a;
	float xk;
	char J;                             	//��ʼ����������
	free_table[0].address = SADDRESS;           //�����������ʼ��ַ
	free_table[0].length = SLENGTH;         //��������ĳ���
	free_table[0].flag = 1;               //��־λ��1��ʾδ����
	for (i = 1; i<m; i++)
		free_table[i].flag = 0;            //0��ʾ����Ŀ
	//��ʼ���ѷ�����
	for (i = 0; i<n; i++)
		used_table[i].flag = 0;
	while (1)
	{
		cout << "��ѡ�����" << endl
			<< "1-�����ڴ�" << endl
			<< "2-��������" << endl
			<< "3-��ʾ����" << endl
			<< "ѡ�����0-3��:";
		cin >> a;
		cin.ignore();
		switch (a)
		{
		case 0:                       //��ѡ��0ʱ�˳�����
			return;
		case 1:
		{                             //a=1��������ռ�
			cout << "��������ҵ��J����ҵ���賤��xk����ҵ��Ϊһ���ַ�������xkҪС��" << SLENGTH << "��:" << endl;
			cin >> J >> xk;
			allocate(J, xk);         //Ϊ��ҵJ��������ռ�
			break;
		}
		case 2:
		{//a=2��������ռ�
			cout << "������Ҫ���շ�������ҵ��:";
			cin >> J;
			reclaim(J);                           //������ҵJ������ռ�
			break;
		}
		case 3:
		{//a=3��ʾ����������������������ѷ�������
			cout << "�����������:" << endl
				<< "    ��ʼ��ַ    ��������    ��־" << endl;
			for (i = 0; i<m; i++)
				cout << setw(10) << free_table[i].address << setw(10) << free_table[i].length
				<< setw(10) << free_table[i].flag << endl;
			cout << "�������������ѷ�������......";
			cin.get();
			cout << "����ѷ�������:" << endl
				<< "    ��ʼ��ַ    ��������    ��־" << endl;
			for (i = 0; i<n; i++)
			{
				if (used_table[i].flag != 0)//����ѷ������ҵ�ı�Ŀ
					cout << setw(10) << used_table[i].address << setw(10) << used_table[i].length
					<< setw(10) << (char)used_table[i].flag << endl;
				else //����ձ�Ŀ
					cout << setw(10) << used_table[i].address << setw(10) << used_table[i].length
					<< setw(10) << used_table[i].flag << endl;
			}
			break;
		}
		default:
		{
			cout << "û�и�ѡ��!" << endl;
			break;
		}
		}//switch
	}//while
	cin.get();
}//main

/*�������ŷ����㷨Ϊ��ҵJ����xk��С�Ŀռ�*/
void allocate(char J, float xk)
{
	int i, k;
	float ad;
	k = -1;
	for (i = 0; i<m; i++)
	{//�ҿռ����xk����С�������Ǽ���k
		if (free_table[i].length >= xk&&free_table[i].flag == 1)
			if (k == -1 || free_table[i].length<free_table[k].length)//��֤�Ǽ���k�Ŀ���������
				k = i;
	}//for
	if (k == -1)
	{//δ�ҵ����ÿ�����������
		cout << "�޿��ÿ���������" << endl;
		return;
	}
	/*�ҵ����ÿ���������ʼ���䣺����������С����ҵҪ�����Ŀռ��С��minsize�����ҵ���
	������ȫ�����������ҵ������������С��Ҫ�����Ŀռ�Ĳ����minsize����ӿ���������һ
	���ַ������ҵ��*/
	if (free_table[k].length - xk <= minsize)
	{
		free_table[k].flag = 0;
		ad = free_table[k].address;
		xk = free_table[k].length;//��free_table[k].length���ȿռ�ȫ�������J
	}
	else
	{
		free_table[k].length = free_table[k].length - xk;
		ad = free_table[k].address + free_table[k].length;
	}
	/*�޸��ѷ�������*/
	i = 0;
	while (used_table[i].flag != 0 && i<n)
		i++;//�ҿձ�Ŀ
	if (i >= n)
	{
		cout << "�ޱ�Ŀ��д�ѷַ���������" << endl;//�޸Ŀ��з���������ָ���δ����ǰ
		if (free_table[k].flag == 0)//��free_table[k].length-xk<minsizeʱ����ҵJӦȫ���黹�ռ�
			free_table[k].flag = 1;//���Ǽ����еı�־λ��Ϊδ�����־1��黹�˿ռ�
		else
			free_table[k].length = free_table[k].length + xk;
		return;
	}//if
	else
	{
		used_table[i].address = ad;
		used_table[i].length = xk;
		used_table[i].flag = J;
	}//else
	return;
}//allocate

//������ҵ��ΪJ����ҵ��ռ����ռ�

void reclaim(char J)
{
	int i, k, j, s, t;
	float S, L;
	s = 0;
	while (used_table[s].flag != J || used_table[s].flag == 0 && s<n)
		s++;//�ҵ���ҵJ���ѷ�����еı�Ŀs
	if (s >= n)
	{
		cout << "�Ҳ�������ҵ��" << endl;
		return;
	}
	used_table[s].flag = 0;//�޸��ѷ�����Ŀs��־Ϊ�ձ�Ŀ
	S = used_table[s].address;//ȡ��ҵJ���ڴ��е��׵�ַ
	L = used_table[s].length;//ȡ��ҵJ�����䵽���ڴ�ĳ���
	j = -1;
	k = -1;
	i = 0;//Ѱ�һ��շ����������ڿ����������ڱ�Ŀk�����ڱ�Ŀj
	while (i<m&&j == -1 || k == -1)
	{
		if (free_table[i].flag == 1)
		{
			if (free_table[i].address + free_table[i].length == S)k = i;
			if (free_table[i].address == S + L)j = i;
		}
		i++;
	}
	if (k != -1){    //�����ڿ�����
		if (j == -1)
		{//�����ڿ����������������ڿ�����������ϲ�
			free_table[k].length = free_table[k].length + free_table[j].length + L;
			free_table[j].flag = 0;
		}
		else//���ڿ����������ڷǿ������������ںϲ�
			free_table[k].length = free_table[k].length + L;
	}//if
	else
	{//k==-1 �����ڿ�����
		if (j != -1)
		{//�����ڿ������������ڿ������������ںϲ�
			free_table[j].address = S;
			free_table[j].length = free_table[j].length + L;
		}
		else
		{//j==-1�����ھ�Ϊ�ǿ���������������ֱ������
			t = 0;//�ڿ���������Ѱ�ҿ���Ŀ
			while (free_table[t].flag == 1 && t<m)
				t++;
			if (t>m)
			{//���������������տռ�ʧ�ܣ����ѷ�������ԭ
				cout << "������б�û�пռ䣬����ʧ�ܣ���" << endl;
				used_table[s].flag = J;
				return;
			}
			free_table[t].address = S;
			free_table[t].length = L;
			free_table[t].flag = 1;
		}//else
	}//else
}
