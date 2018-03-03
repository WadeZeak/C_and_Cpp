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
struct stack {
	int iway, jway;
	int direction;
};

stack q[MAX];
int top;

char **arg;
char **Mark;
char **path;

int FindPrincess(int m, int n, int xW, int yW, int xOut, int yOut)
{
	vector<int> ivec;//存储所有路径的时间
	top = 0;
	int count = 0;//通路的条数
	int time = 0, MinTime = 0;
	q[top].iway = xW;
	q[top].jway = yW;
	q[top].direction = -1;
	arg[xW][yW] = 'S';
	int i, j, di, find;
	while (top>-1)//栈为空
	{
		i = q[top].iway;
		j = q[top].jway;
		di = q[top].direction;
		if (i == xOut&&j == yOut)//一条出路,求取时间
		{
			count++;
			for (int val = 1; val<top + 1; val++)
			{
				if (Mark[q[val].iway][q[val].jway] == '.')
					time = time + 1;
				else if (Mark[q[val].iway][q[val].jway] == '1')
					time = time + 2;
				else if (Mark[q[val].iway][q[val].jway] == '2')
					time = time + 3;
				else if (Mark[q[val].iway][q[val].jway] == '3')
					time = time + 4;
				else if (Mark[q[val].iway][q[val].jway] == '4')
					time = time + 5;
				else if (Mark[q[val].iway][q[val].jway] == '5')
					time = time + 6;
				else if (Mark[q[val].iway][q[val].jway] == '6')
					time = time + 7;
				else if (Mark[q[val].iway][q[val].jway] == '7')
					time = time + 8;
				else if (Mark[q[val].iway][q[val].jway] == '8')
					time = time + 9;
				else if (Mark[q[val].iway][q[val].jway] == '9')
					time = time + 10;
			}
			ivec.push_back(time);
			if (ivec.size() == 1)//只有一条路径的情况下
			{
				MinTime = ivec[0];
				for (int val = 0; val < top + 1; val++) //标记可走的路段
				{
					path[q[val].iway][q[val].jway] = 'P';
				}
			}
			if (ivec.size() >= 2)//拥有多条通路
			{
				if (ivec[ivec.size() - 1]<MinTime) {
					MinTime = ivec[ivec.size() - 1];

					//重新获取迷宫
					for (int i = 0; i < m; i++) 
					{
						for (int j = 0; j < n; j++) 
						{
							path[i][j] = Mark[i][j];
						}
					}
					for (int val = 0; val < top + 1; val++)//标记可走的路段
					{
						path[q[val].iway][q[val].jway] = 'P';
					}
				}
			}
			arg[q[top].iway][q[top].jway] = Mark[q[top].iway][q[top].jway];
			top--;
			//获取上一步
			i = q[top].iway;
			j = q[top].jway;
			di = q[top].direction;//走的方向
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
			switch (di)
			{
			case(0) :
				i = q[top].iway + 1;//往下
				j = q[top].jway;
				break;
			case(1) ://往左
				i = q[top].iway;
				j = q[top].jway - 1;
				break;
			case(2) : //往上
				i = q[top].iway - 1;
				j = q[top].jway;
				break;
			case(3) : //往右
				i = q[top].iway;
				j = q[top].jway + 1;
				break;
			}
			if (arg[i][j] == '.' || arg[i][j] == '1' || arg[i][j] == '2' || arg[i][j] == '3' || arg[i][j] == '4' || arg[i][j] == '5' || arg[i][j] == '6' || arg[i][j] == '7' || arg[i][j] == '8' || arg[i][j] == '9')//位置没有走过
			{
				find = 1;//有一个方向可走
			}

		}
		if (find == 1)//存储此可走的位置
		{
			q[top].direction = di;//记录方向
			top++;
			//存储该位置
			q[top].iway = i;
			q[top].jway = j;
			q[top].direction = -1;
			arg[i][j] = 'S';//标记此路走过
		}
		else//四个方向都不可走
		{
			arg[q[top].iway][q[top].jway] = Mark[q[top].iway][q[top].jway];
			top--;
		}
	}
	if (count == 0)//无路可走
		return -1;
	else
		return MinTime;
}

int main()
{
	int m, n;
	int xWallace = 0, yWallace = 0;
	int xOut, yOut;
	int Min;
	char **map;
	cout << "请输入迷宫的行数M与列数N(用空格隔开)：";
	cin >> m >> n;
	xOut = m - 1;
	yOut = n - 1;
	map = new char*[m];
	Mark = new char*[m + 2];
	path = new char*[m + 2];//存储路径
	for (int i = 0; i<m; ++i)
	{
		map[i] = new char[n];
		Mark[i] = new char[n + 2];
		path[i] = new char[n + 2];
	}
	cout << "请输入迷宫的地图:" << endl;

	for (int i = 0; i<m; i++)
	{
		for (int j = 0; j<n; j++)
		{
			cin >> map[i][j];
			Mark[i][j] = map[i][j];
			path[i][j] = map[i][j];

		}
	}
	arg = map;
	Min = FindPrincess(m, n, xWallace, yWallace, xOut, yOut);//最短时间


	cout << "最短时间为" << Min << "\n";

	if (Min == -1) {
		cout << "God ,please help the poor Wallance!";
	}
	else {
		cout << "最短路径为：" << "\n";
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				cout << path[i][j];
			}
			cout << "\n";
		}
	}


	delete[]Mark;
	delete[]map;
	delete[]path;
	cin.get();
	cin.get();
	return 0;
}
