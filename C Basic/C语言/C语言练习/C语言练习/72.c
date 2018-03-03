/*
74.	八皇后问题。
在一个8×8的国际象棋棋盘上放入8个皇后，且这八个皇后互不相吃，即这8个皇后的任意两个都不在同一行、同一列及同一斜线上。
编程序找出所有放法。
其中一个答案是：（*表示皇后）
提示：
1) 可用一维数组（8个元素）存贮上述答案:
1	  5	  8	  6      	  3	  7  	  2  	 4
2) 为了使问题简单，可先做5×5棋盘上的5皇后问题。
*/


#include<stdio.h>
#include<stdlib.h>

static int methods = 0;

int isSafe(int k,int col,int equeen[])
{

	//是否同一行
	for (int i = 0; i < k; i++)
	{
		if (equeen[k]==equeen[i])
		{
			return 0;
		}
	}


	//是否同一列

	for (int i = 0; i < k; i++)
	{
		if (equeen[k] == equeen[i])
		{
			return 0;
		}
	}


	//是否同一斜线





}

void Allmethods(int equeen[])
{





}





void main()
{
	int equeen[8] = { 0 };//8个旗子均未放置

	Allmethods(equeen);


	system("pause");

}
