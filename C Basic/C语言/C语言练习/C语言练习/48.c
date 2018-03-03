/*
48.	找规律填写N×N方阵。如N=8时, 其方阵为:
1       1       1       1       1       1       1       1
1       2       2       2       2       2       2       1
1       2       3       3       3       3       2       1
1       2       3       4       4       3       2       1
1       2       3       4       4       3       2       1
1       2       3       3       3       3       2       1
1       2       2       2       2       2       2       1
1       1       1       1       1       1       1       1
*/


#include<stdlib.h>
#include<stdio.h>

#define N 9
void main10048()//逆时针
{
	int a[N][N];
	for (int data = 1, i = 0, j = 0, k = 0; k<(N + 1) / 2; k++, data++)
	{
		while (i<N - k)
		{
			a[i][j] = data;
			i = i + 1;
		}
		i--;
		j++;

		while (j<N - k)
		{
			a[i][j] = data;
			j = j + 1;
		}
		j--;
		i--;

		while (i>k - 1)
		{
			a[i][j] = data;
			i = i - 1;
		}
		i++;
		j--;
		

		while (j>k)
		{
			a[i][j] = data;
			j = j - 1;
		}
		i++;
		j++;

	}

	for (int u = 0; u<N; u++)
	{

		for (int v = 0; v<N; v++)
		{
			printf("%d\t", a[u][v]);

		}
		printf("\n");
	}
	system("pause");
}

void main48()//顺时针
{
	int arr[N][N] = { 0 };

	for (int data = 1, i = 0, j = 0, k = 0; k<(N + 1) / 2; k++, data++)
	{
		while (j<N-k)
		{
			arr[i][j] = data;
			j++;
		}

		i++;
		j--;

		while (i<N-k)
		{
			arr[i][j] = data;
			i++;
		}

		i--;
		j--;
		while (j>k-1)
		{
			arr[i][j] = data;
			j--;
		}
		j++;
		i--;

		while (i>k)
		{
			arr[i][j] = data;
			i--;
		}

		i++;
		j++;

	}


	for (int u = 0; u<N; u++)
	{

		for (int v = 0; v<N; v++)
		{
			printf("%d\t", arr[u][v]);

		}
		printf("\n");
	}
	system("pause");

}