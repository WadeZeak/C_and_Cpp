
#include <iostream> 
#include <iomanip> 

using namespace std;

float minsize = 5;
int count1 = 0;
int count2 = 0;
#define  m  10 
#define  n  10
struct
{
	float address;
	float length;
	int flag;
}used_table[n];
struct
{
	float address;
	float length;
	int flag;
}free_table[m];
void initialize(void);
int distribute(int, float);
int recycle(int);
void show();
void initialize(void)
{
	int a;
	for (a = 0; a <= n-1; a++)
		used_table[a].flag = 0;
	free_table[0].address = 1000;
	free_table[0].length = 1024;
	free_table[0].flag = 1;
}
int distribute(int process_name, float need_length)
{
	int i, k = -1;
	float  ads, len;
	int count = 0;
	i = 0;
	while (i <= m - 1)
	{
		if (free_table[i].flag == 1 && need_length <= free_table[i].length)
		{
			count++;
			if (count == 1 || free_table[i].length < free_table[k].length)
				k = i;
		}
		i = i + 1;
	}
	if (k != -1)
	{
		if ((free_table[k].length - need_length) <= minsize)
		{
			free_table[k].flag = 0;
			ads = free_table[k].address;
			len = free_table[k].length;
		}
		else
		{
			ads = free_table[k].address;
			len = need_length;
			free_table[k].address += need_length;
			free_table[k].length -= need_length;
		}
		i = 0;
		while (used_table[i].flag != 0)
		{
			i = i + 1;
		}
		if (i <= n - 1)
		{
			used_table[i].address = ads;
			used_table[i].length = len;
			used_table[i].flag = process_name;
			count1++;
		}
		else
		{
			if (free_table[k].flag == 0)
			{
				free_table[k].flag = 1;
				free_table[k].address = ads;
				free_table[k].length = len;
			}
			else
			{
				free_table[k].address = ads;
				free_table[k].length += len;
			}
			cout << "�ڴ����������������ʧ�ܣ�\n";
			return 0;
		}
	}
	else
	{
		cout << "�޷�Ϊ����ҵ�ҵ����ʷ�����\n";
		return 0;
	}
	return process_name;
}
int recycle(int process_name)
{
	int y = 0;
	float recycle_address, recycle_length;
	int i, j, k;
	int x;
	while (y <= n - 1 && used_table[y].flag != process_name)
	{
		y = y + 1;
	}
	if (y <= n - 1)
	{
		recycle_address = used_table[y].address;
		recycle_length = used_table[y].length;
		used_table[y].flag = 0;
		count2++;
	}
	else
	{
		cout << "����ҵ�����ڣ�\n";
		return 0;
	}
	j = k = -1;
	i = 0;
	while (!(i >= m || (k != -1 && j != -1)))
	{
		if (free_table[i].flag == 1)
		{
			if ((free_table[i].address + free_table[i].length) == recycle_address)
				k = i;
			if ((recycle_address + recycle_length) == free_table[i].address)
				j = i;
		}
		i = i + 1;
	}
	if (k != -1)
	{
		if (j != -1)
		{
			free_table[k].length += free_table[j].length + recycle_length;
			free_table[j].flag = 0;
		}
		else
			free_table[k].length += recycle_length;
	}
	else if (j != -1)
	{
		free_table[j].length += recycle_length;   free_table[j].address = recycle_address;
	}
	else
	{
		x = 0;
		while (free_table[x].flag != 0)    x = x + 1;    if (x <= m - 1)
		{
			free_table[x].length = recycle_length;    free_table[x].flag = 1;
		}
		else
		{
			used_table[y].flag = process_name;
			cout << "����������������ʧ�ܣ�\n";
			return 0;
		}
	}
	return process_name;
}

void show()
{
	cout << " ��  ��  ��\n";
	for (int i = 0; i <= count2; i++)
		cout << "��ַ��" << free_table[i].address << "   " << "��ҵ���ȣ�"<<free_table[i].length<<"   "<<"״  ̬��"<<free_table[i].flag<<endl;   
	cout<<"�ѷ�����\n";   
		for (int j = 0; j<count1; j++)
			cout << "��ַ��" << used_table[j].address << "   " << "��ҵ���ȣ�" << used_table[j].length << "   " << "��ҵ����" << used_table[j].flag << endl;
}

void main()
{
	int choice;
	int job_name;  float need_memory;  bool exitFlag = false;
	cout << "       ��̬�������䷽ʽ��ģ��       \n";
	initialize();   while (!exitFlag)
	{
		cout << "1: �����ڴ�        2: �����ڴ�\n";
		cout << "3: �鿴����        0: ��    ��\n";
		cin >> choice;   switch (choice)
		{
		case 0:      exitFlag = true;
			break;
		case 1:
			cout << "��������ҵ���������ڴ棺";
			cin >> job_name >> need_memory;
			distribute(job_name, need_memory);
			break;
		case 2:
			int ID;
			cout << "��������Ҫ�ͷŵķ����ţ�";
			cin >> ID;
			recycle(ID);
			break;
		case 3:
			show();
			break;
		}
	}
}




