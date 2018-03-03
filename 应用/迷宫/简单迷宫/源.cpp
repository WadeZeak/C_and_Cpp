/*拯救公主 I
★实验任务
公主被魔王抓走了，骑士 Wallace 单枪匹马杀到魔王大本营，发现城堡之前
有个迷宫。需要顺利通过迷宫才可能找到公主。这个迷宫由 N*M 个方格组成，
假设入口编号是(0, 0)，出口编号是(N - 1, M - 1)。迷宫中藏着一些怪兽，Wallace 如
果碰到则必须要消灭他们。下面是迷宫中的基本规则：
1. Wallace 只能往四个方向移动（上、下、左、右），每步耗时一秒钟。
每步的定义如下：如果当前位置在(x, y)，则下一步只能在(x - 1, y), (x + 1, y), (x, y - 1)
或(x, y + 1)。
2. 迷宫用下述符号标记
.表示当前位置可通
X 表示当前位置是陷阱，走进去必死无疑。
n(1 <= n <= 9)，数字表示当前位置有怪兽，数字的大小表示怪兽的强悍程度，
等同于 Wallace 消灭怪兽的时间。
你的任务是计算出 Wallace 走出迷宫的最短时间。（假设入口和出口都是可
通，且没有怪兽）
★数据输入与输出
输入第 1 行包括两个数字，分别是迷宫的行数 M 和列数 N(2 <= N <= 100,
2 <= M <= 100) ，接下来 M 行是上述迷宫的状态标签。
如果找到最短路径，则输出第一行为总的时间代价，接下来用 P 替换路径上
的信息。如果找不到路径，则输出 God please help our poor Wallace!
★范例
输入：
5 6
.XX.1.
..X.2.
2...X.
...XX.
XXXXX.
输出：
13
PXX.1.
PPXPPP
2PPPXP
...XXP
XXXXXP
*/

#include <iostream>
#include <vector>
#define MAX 100
using namespace std;
struct Position 
{
	int x, y;
	int direction;
};

struct Mystack//栈
{
	Position q[MAX];
	int top;

	//压入栈
	void Push(const Position &item)
	{
		if (!isFull())
		{
			S.top += 1;
			q[S.top] = item;

		}
		else
			return;
	}

	//检测栈是否为满了
	bool isFull(void)
	{
		return top > MAX ? true : false;
	}

	//吐出栈顶元素
	Position Pop(void)
	{
		if (!isEmpty())
		{
			int ebp = top;
		top -= 1;
			return q[ebp];
		}

	}


	//检测椎栈是否为空
	bool isEmpty(void)
	{
		return top < 0 ? true : false;
	}
	void Init()
	{
		top = -1;
	}
}S;


char **arg;
char **Maze;
char **path;



int FindPrincess(int m, int n, int xW, int yW, int xOut, int yOut)
	{
		vector<int> vectime;//存储所有路径的时间
		S.Init();
		int count = 0;//通路的条数
		int time = 0, Mintime = 0;
		Position p = { xW, yW, -1 };
		S.Push(p);
		arg[xW][yW] = 'S';
		int i, j, di, find;
		while (!S.isEmpty())//栈不为空
		{
			i = S.q[S.top].x;
			j = S.q[S.top].y;
			di = S.q[S.top].direction;
			if (i == xOut&&j == yOut)//到达出口,求取时间通路的时间
			{
				count++;
				for (int k = 1; k<S.top + 1; k++)
				{

					switch (Maze[S.q[k].x][S.q[k].y])
					{
					case  '.':
						time += 1;
						break;
					case '1':
						time += 2;
						break;
					case  '2':
						time += 3;
						break;
					case '3':
						time += 4;
						break;
					case  '4':
						time += 5;
						break;
					case '5':
						time += 6;
						break;
					case  '6':
						time += 7;
						break;
					case '8':
						time += 9;
						break;

					case '9':
						time += 10;
						break;
					default:
						break;
					}
				}
				vectime.push_back(time);

				if (vectime.size() == 1)//只有一条路径的情况下
				{
					Mintime = vectime[0];
					for (int k = 0; k < S.top + 1; k++) //标记可走的路段
					{
						path[S.q[k].x][S.q[k].y] = 'P';
					}
				}
				if (vectime.size() >= 2)//拥有多条通路
				{
					if (vectime[vectime.size() - 1]<Mintime) 
					{
						Mintime = vectime[vectime.size() - 1];

						//重新获取迷宫
						for (int i = 0; i < m; i++)
						{
							for (int j = 0; j < n; j++)
							{
								path[i][j] = Maze[i][j];
							}
						}
						for (int k = 0; k < S.top + 1; k++)//标记可走的路段
						{
							path[S.q[k].x][S.q[k].y] = 'P';
						}
					}
				}
				arg[S.q[S.top].x][S.q[S.top].y] = Maze[S.q[S.top].x][S.q[S.top].y];
				//获取上一步
				S.Pop();
				i = S.q[S.top].x;
				j = S.q[S.top].y;
				di = S.q[S.top].direction;//走的方向	
				time = 0;
			}
			find = 0;
			while (find == 0 && di<4)//找出可走的方向
			{
				di++;
				//边界情况
				if (di == 0 && i == m - 1)//最下面
					di++;
				if (di == 1 && j == 0)//最左面
					di++;
				if (di == 2 && i == 0)//最上面
					di++;
				if (di == 3 && j == n - 1)//最右面
					di++;

				//往前走
				if (di==0)
				{
					i = S.q[S.top].x + 1;//往下
					j = S.q[S.top].y;
				}
				else if (di==1)
				{
					i = S.q[S.top].x;
					j = S.q[S.top].y - 1;
				}
				else if (di==2)
				{
					i = S.q[S.top].x - 1;
					j = S.q[S.top].y;
				}
				else if (di==3)
				{
					i = S.q[S.top].x;
					j = S.q[S.top].y + 1;
				}
				

				if (arg[i][j] == '.' || arg[i][j] == '1' || arg[i][j] == '2' || arg[i][j] == '3' || arg[i][j] == '4' || arg[i][j] == '5' || arg[i][j] == '6' || arg[i][j] == '7' || arg[i][j] == '8' || arg[i][j] == '9')//位置没有走过
				{
					find = 1;//有一个方向可走
				}
			}
			if (find == 1)//存储此可走的位置
			{
				S.q[S.top].direction = di;//记录方向
				Position p = { i, j, -1 };
				////存储该位置
				S.Push(p);
				arg[i][j] = 'S';//标记此路走过
			}
			else//四个方向都不可走
			{
				arg[S.q[S.top].x][S.q[S.top].y] = Maze[S.q[S.top].x][S.q[S.top].y];
				S.Pop();
			}
		}
		if (count)//无路可走
			return Mintime;	
		else
			return 0;
	}



void main()
{
	int m, n;
	int xWallace = 0, yWallace = 0;
	int xOut, yOut;
	int Mintime;
	char **map;
	cout << "请输入迷宫的行数M与列数N(用空格隔开):";
	cin >> m >> n;
	xOut = m - 1;
	yOut = n - 1;
	map = new char*[m];
	Maze = new char*[m];
	path = new char*[m];//存储路径
	int i=0;
	while (i<m)
	{
		map[i] = new char[n];
		Maze[i] = new char[n];
		path[i] = new char[n];
		i++;
	}
	
	
	cout << "请输入迷宫的地图:" << endl;

	for (int i = 0; i<m; i++)
	{
		for (int j = 0; j<n; j++)
		{
			cin >> map[i][j];
			Maze[i][j] = map[i][j];
			path[i][j] = map[i][j];

		}
	}
	arg = map;
	Mintime = FindPrincess(m, n, xWallace, yWallace, xOut, yOut);//最短时间


	

	if (Mintime) 
	{
		cout << "最短时间为" << Mintime << "\n";
		cout << "最短路径为:" << "\n";
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cout << path[i][j];
			}
			cout << endl;
		}
		
	}
	else
	{
		cout << "没有最短的路径!!!";
	}


	delete[]Maze;
	delete[]map;
	delete[]path;
	system("pause");

}
