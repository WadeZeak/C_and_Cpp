/*���ȹ��� I
��ʵ������
������ħ��ץ���ˣ���ʿ Wallace ��ǹƥ��ɱ��ħ����Ӫ�����ֳǱ�֮ǰ
�и��Թ�����Ҫ˳��ͨ���Թ��ſ����ҵ�����������Թ��� N*M ��������ɣ�
������ڱ����(0, 0)�����ڱ����(N - 1, M - 1)���Թ��в���һЩ���ޣ�Wallace ��
�����������Ҫ�������ǡ��������Թ��еĻ�������
1. Wallace ֻ�����ĸ������ƶ����ϡ��¡����ң���ÿ����ʱһ���ӡ�
ÿ���Ķ������£������ǰλ����(x, y)������һ��ֻ����(x - 1, y), (x + 1, y), (x, y - 1)
��(x, y + 1)��
2. �Թ����������ű��
.��ʾ��ǰλ�ÿ�ͨ
X ��ʾ��ǰλ�������壬�߽�ȥ�������ɡ�
n(1 <= n <= 9)�����ֱ�ʾ��ǰλ���й��ޣ����ֵĴ�С��ʾ���޵�ǿ���̶ȣ�
��ͬ�� Wallace ������޵�ʱ�䡣
��������Ǽ���� Wallace �߳��Թ������ʱ�䡣��������ںͳ��ڶ��ǿ�
ͨ����û�й��ޣ�
���������������
����� 1 �а����������֣��ֱ����Թ������� M ������ N(2 <= N <= 100,
2 <= M <= 100) �������� M ���������Թ���״̬��ǩ��
����ҵ����·�����������һ��Ϊ�ܵ�ʱ����ۣ��������� P �滻·����
����Ϣ������Ҳ���·��������� God please help our poor Wallace!
�ﷶ��
���룺
5 6
.XX.1.
..X.2.
2...X.
...XX.
XXXXX.
�����
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

struct Mystack//ջ
{
	Position q[MAX];
	int top;

	//ѹ��ջ
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

	//���ջ�Ƿ�Ϊ����
	bool isFull(void)
	{
		return top > MAX ? true : false;
	}

	//�³�ջ��Ԫ��
	Position Pop(void)
	{
		if (!isEmpty())
		{
			int ebp = top;
		top -= 1;
			return q[ebp];
		}

	}


	//���׵ջ�Ƿ�Ϊ��
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
		vector<int> vectime;//�洢����·����ʱ��
		S.Init();
		int count = 0;//ͨ·������
		int time = 0, Mintime = 0;
		Position p = { xW, yW, -1 };
		S.Push(p);
		arg[xW][yW] = 'S';
		int i, j, di, find;
		while (!S.isEmpty())//ջ��Ϊ��
		{
			i = S.q[S.top].x;
			j = S.q[S.top].y;
			di = S.q[S.top].direction;
			if (i == xOut&&j == yOut)//�������,��ȡʱ��ͨ·��ʱ��
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

				if (vectime.size() == 1)//ֻ��һ��·���������
				{
					Mintime = vectime[0];
					for (int k = 0; k < S.top + 1; k++) //��ǿ��ߵ�·��
					{
						path[S.q[k].x][S.q[k].y] = 'P';
					}
				}
				if (vectime.size() >= 2)//ӵ�ж���ͨ·
				{
					if (vectime[vectime.size() - 1]<Mintime) 
					{
						Mintime = vectime[vectime.size() - 1];

						//���»�ȡ�Թ�
						for (int i = 0; i < m; i++)
						{
							for (int j = 0; j < n; j++)
							{
								path[i][j] = Maze[i][j];
							}
						}
						for (int k = 0; k < S.top + 1; k++)//��ǿ��ߵ�·��
						{
							path[S.q[k].x][S.q[k].y] = 'P';
						}
					}
				}
				arg[S.q[S.top].x][S.q[S.top].y] = Maze[S.q[S.top].x][S.q[S.top].y];
				//��ȡ��һ��
				S.Pop();
				i = S.q[S.top].x;
				j = S.q[S.top].y;
				di = S.q[S.top].direction;//�ߵķ���	
				time = 0;
			}
			find = 0;
			while (find == 0 && di<4)//�ҳ����ߵķ���
			{
				di++;
				//�߽����
				if (di == 0 && i == m - 1)//������
					di++;
				if (di == 1 && j == 0)//������
					di++;
				if (di == 2 && i == 0)//������
					di++;
				if (di == 3 && j == n - 1)//������
					di++;

				//��ǰ��
				if (di==0)
				{
					i = S.q[S.top].x + 1;//����
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
				

				if (arg[i][j] == '.' || arg[i][j] == '1' || arg[i][j] == '2' || arg[i][j] == '3' || arg[i][j] == '4' || arg[i][j] == '5' || arg[i][j] == '6' || arg[i][j] == '7' || arg[i][j] == '8' || arg[i][j] == '9')//λ��û���߹�
				{
					find = 1;//��һ���������
				}
			}
			if (find == 1)//�洢�˿��ߵ�λ��
			{
				S.q[S.top].direction = di;//��¼����
				Position p = { i, j, -1 };
				////�洢��λ��
				S.Push(p);
				arg[i][j] = 'S';//��Ǵ�·�߹�
			}
			else//�ĸ����򶼲�����
			{
				arg[S.q[S.top].x][S.q[S.top].y] = Maze[S.q[S.top].x][S.q[S.top].y];
				S.Pop();
			}
		}
		if (count)//��·����
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
	cout << "�������Թ�������M������N(�ÿո����):";
	cin >> m >> n;
	xOut = m - 1;
	yOut = n - 1;
	map = new char*[m];
	Maze = new char*[m];
	path = new char*[m];//�洢·��
	int i=0;
	while (i<m)
	{
		map[i] = new char[n];
		Maze[i] = new char[n];
		path[i] = new char[n];
		i++;
	}
	
	
	cout << "�������Թ��ĵ�ͼ:" << endl;

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
	Mintime = FindPrincess(m, n, xWallace, yWallace, xOut, yOut);//���ʱ��


	

	if (Mintime) 
	{
		cout << "���ʱ��Ϊ" << Mintime << "\n";
		cout << "���·��Ϊ:" << "\n";
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
		cout << "û����̵�·��!!!";
	}


	delete[]Maze;
	delete[]map;
	delete[]path;
	system("pause");

}
