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
	vector<int> ivec;//�洢����·����ʱ��
	top = 0;
	int count = 0;//ͨ·������
	int time = 0, MinTime = 0;
	q[top].iway = xW;
	q[top].jway = yW;
	q[top].direction = -1;
	arg[xW][yW] = 'S';
	int i, j, di, find;
	while (top>-1)//ջΪ��
	{
		i = q[top].iway;
		j = q[top].jway;
		di = q[top].direction;
		if (i == xOut&&j == yOut)//һ����·,��ȡʱ��
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
			if (ivec.size() == 1)//ֻ��һ��·���������
			{
				MinTime = ivec[0];
				for (int val = 0; val < top + 1; val++) //��ǿ��ߵ�·��
				{
					path[q[val].iway][q[val].jway] = 'P';
				}
			}
			if (ivec.size() >= 2)//ӵ�ж���ͨ·
			{
				if (ivec[ivec.size() - 1]<MinTime) {
					MinTime = ivec[ivec.size() - 1];

					//���»�ȡ�Թ�
					for (int i = 0; i < m; i++) 
					{
						for (int j = 0; j < n; j++) 
						{
							path[i][j] = Mark[i][j];
						}
					}
					for (int val = 0; val < top + 1; val++)//��ǿ��ߵ�·��
					{
						path[q[val].iway][q[val].jway] = 'P';
					}
				}
			}
			arg[q[top].iway][q[top].jway] = Mark[q[top].iway][q[top].jway];
			top--;
			//��ȡ��һ��
			i = q[top].iway;
			j = q[top].jway;
			di = q[top].direction;//�ߵķ���
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
			switch (di)
			{
			case(0) :
				i = q[top].iway + 1;//����
				j = q[top].jway;
				break;
			case(1) ://����
				i = q[top].iway;
				j = q[top].jway - 1;
				break;
			case(2) : //����
				i = q[top].iway - 1;
				j = q[top].jway;
				break;
			case(3) : //����
				i = q[top].iway;
				j = q[top].jway + 1;
				break;
			}
			if (arg[i][j] == '.' || arg[i][j] == '1' || arg[i][j] == '2' || arg[i][j] == '3' || arg[i][j] == '4' || arg[i][j] == '5' || arg[i][j] == '6' || arg[i][j] == '7' || arg[i][j] == '8' || arg[i][j] == '9')//λ��û���߹�
			{
				find = 1;//��һ���������
			}

		}
		if (find == 1)//�洢�˿��ߵ�λ��
		{
			q[top].direction = di;//��¼����
			top++;
			//�洢��λ��
			q[top].iway = i;
			q[top].jway = j;
			q[top].direction = -1;
			arg[i][j] = 'S';//��Ǵ�·�߹�
		}
		else//�ĸ����򶼲�����
		{
			arg[q[top].iway][q[top].jway] = Mark[q[top].iway][q[top].jway];
			top--;
		}
	}
	if (count == 0)//��·����
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
	cout << "�������Թ�������M������N(�ÿո����)��";
	cin >> m >> n;
	xOut = m - 1;
	yOut = n - 1;
	map = new char*[m];
	Mark = new char*[m + 2];
	path = new char*[m + 2];//�洢·��
	for (int i = 0; i<m; ++i)
	{
		map[i] = new char[n];
		Mark[i] = new char[n + 2];
		path[i] = new char[n + 2];
	}
	cout << "�������Թ��ĵ�ͼ:" << endl;

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
	Min = FindPrincess(m, n, xWallace, yWallace, xOut, yOut);//���ʱ��


	cout << "���ʱ��Ϊ" << Min << "\n";

	if (Min == -1) {
		cout << "God ,please help the poor Wallance!";
	}
	else {
		cout << "���·��Ϊ��" << "\n";
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
