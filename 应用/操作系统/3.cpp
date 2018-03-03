#include<iostream>
#include<iomanip>
#define m 10               //假定系统允许的空闲区表最大为m
#define n 10               //假定系统允许的最大作业数量为n
#define minsize 100
#define SADDRESS 1           //空闲分区表的起始地址
#define SLENGTH 102400      //空闲分区表的长度

using namespace std;

struct
{
	float address;            //已分分区起始地址
	float length;             //已分分区长度，单位为字节
	int flag;               //已分配表区登记栏标志，用0表示空栏目
}used_table[n];            //已分配区表

struct
{
	float address;                //空闲区起始地址
	float length;                 //空闲区长度
	int flag;                       //空闲区表登记栏目,用0表示空栏目，1表示未分配
}free_table[m];                   //空闲区表

void allocate(char, float);       //函数声明为作业分配空间
void reclaim(char);               //回收空间
void main3463()
{
	int i, a;
	float xk;
	char J;                             	//初始化空闲区表
	free_table[0].address = SADDRESS;           //空闲区表的起始地址
	free_table[0].length = SLENGTH;         //空闲区表的长度
	free_table[0].flag = 1;               //标志位置1表示未分配
	for (i = 1; i<m; i++)
		free_table[i].flag = 0;            //0表示空栏目
	//初始化已分区表
	for (i = 0; i<n; i++)
		used_table[i].flag = 0;
	while (1)
	{
		cout << "请选择功能项：" << endl
			<< "1-分配内存" << endl
			<< "2-回收主存" << endl
			<< "3-显示主存" << endl
			<< "选择功能项（0-3）:";
		cin >> a;
		cin.ignore();
		switch (a)
		{
		case 0:                       //当选择0时退出程序
			return;
		case 1:
		{                             //a=1分配主存空间
			cout << "请输入作业名J和作业所需长度xk（作业名为一个字符，长度xk要小于" << SLENGTH << "）:" << endl;
			cin >> J >> xk;
			allocate(J, xk);         //为作业J分配主存空间
			break;
		}
		case 2:
		{//a=2回收主存空间
			cout << "请输入要回收分区的作业名:";
			cin >> J;
			reclaim(J);                           //回收作业J的主存空间
			break;
		}
		case 3:
		{//a=3显示主存情况，输出空闲区表和已分配区表
			cout << "输出空闲区表:" << endl
				<< "    起始地址    分区长度    标志" << endl;
			for (i = 0; i<m; i++)
				cout << setw(10) << free_table[i].address << setw(10) << free_table[i].length
				<< setw(10) << free_table[i].flag << endl;
			cout << "按任意键，输出已分配区表......";
			cin.get();
			cout << "输出已分配区表:" << endl
				<< "    起始地址    分区长度    标志" << endl;
			for (i = 0; i<n; i++)
			{
				if (used_table[i].flag != 0)//输出已分配给作业的表目
					cout << setw(10) << used_table[i].address << setw(10) << used_table[i].length
					<< setw(10) << (char)used_table[i].flag << endl;
				else //输出空表目
					cout << setw(10) << used_table[i].address << setw(10) << used_table[i].length
					<< setw(10) << used_table[i].flag << endl;
			}
			break;
		}
		default:
		{
			cout << "没有该选项!" << endl;
			break;
		}
		}//switch
	}//while
	cin.get();
}//main

/*采用最优分配算法为作业J分配xk大小的空间*/
void allocate(char J, float xk)
{
	int i, k;
	float ad;
	k = -1;
	for (i = 0; i<m; i++)
	{//找空间大于xk的最小空闲区登记项k
		if (free_table[i].length >= xk&&free_table[i].flag == 1)
			if (k == -1 || free_table[i].length<free_table[k].length)//保证登记项k的空闲区最优
				k = i;
	}//for
	if (k == -1)
	{//未找到可用空闲区，返回
		cout << "无可用空闲区！！" << endl;
		return;
	}
	/*找到可用空闲区，开始分配：若空闲区大小与作业要求分配的空间差小于minsize，则将找到的
	空闲区全部分配给该作业；若空闲区大小与要求分配的空间的差大于minsize，则从空闲区划出一
	部分分配给作业。*/
	if (free_table[k].length - xk <= minsize)
	{
		free_table[k].flag = 0;
		ad = free_table[k].address;
		xk = free_table[k].length;//将free_table[k].length长度空间全部分配给J
	}
	else
	{
		free_table[k].length = free_table[k].length - xk;
		ad = free_table[k].address + free_table[k].length;
	}
	/*修改已分配区表*/
	i = 0;
	while (used_table[i].flag != 0 && i<n)
		i++;//找空表目
	if (i >= n)
	{
		cout << "无表目填写已分分区，错误！" << endl;//修改空闲分区表，将其恢复到未分配前
		if (free_table[k].flag == 0)//当free_table[k].length-xk<minsize时，作业J应全部归还空间
			free_table[k].flag = 1;//将登记项中的标志位设为未分配标志1则归还了空间
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

//回收作业名为J的作业所占主存空间

void reclaim(char J)
{
	int i, k, j, s, t;
	float S, L;
	s = 0;
	while (used_table[s].flag != J || used_table[s].flag == 0 && s<n)
		s++;//找到作业J在已分配表中的表目s
	if (s >= n)
	{
		cout << "找不到该作业！" << endl;
		return;
	}
	used_table[s].flag = 0;//修改已分配表表目s标志为空表目
	S = used_table[s].address;//取作业J在内存中的首地址
	L = used_table[s].length;//取作业J所分配到的内存的长度
	j = -1;
	k = -1;
	i = 0;//寻找回收分区的上下邻空闲区，上邻表目k，下邻表目j
	while (i<m&&j == -1 || k == -1)
	{
		if (free_table[i].flag == 1)
		{
			if (free_table[i].address + free_table[i].length == S)k = i;
			if (free_table[i].address == S + L)j = i;
		}
		i++;
	}
	if (k != -1){    //有上邻空闲区
		if (j == -1)
		{//有下邻空闲区，既有上下邻空闲区，三项合并
			free_table[k].length = free_table[k].length + free_table[j].length + L;
			free_table[j].flag = 0;
		}
		else//上邻空闲区，下邻非空闲区，与上邻合并
			free_table[k].length = free_table[k].length + L;
	}//if
	else
	{//k==-1 无上邻空闲区
		if (j != -1)
		{//无上邻空闲区，有下邻空闲区，与下邻合并
			free_table[j].address = S;
			free_table[j].length = free_table[j].length + L;
		}
		else
		{//j==-1上下邻均为非空闲区，回收区域直接填入
			t = 0;//在空闲区表中寻找空栏目
			while (free_table[t].flag == 1 && t<m)
				t++;
			if (t>m)
			{//空闲区表满，回收空间失败，将已分配区表复原
				cout << "主存空闲表没有空间，回收失败！！" << endl;
				used_table[s].flag = J;
				return;
			}
			free_table[t].address = S;
			free_table[t].length = L;
			free_table[t].flag = 1;
		}//else
	}//else
}
