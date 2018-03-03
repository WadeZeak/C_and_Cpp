#include<iostream>
#include<math.h>
using namespace std;


void frist(int x)
{
	int i, sum = 0, j;
	for (i = 2; i <= x; i++)
	{
		for (j = 2; j <= sqrt(i); j++)
		{
			if (i%j==0)
				break;
		}
		sum += i;
	}
	cout << "x=" << x << endl;
	cout << "sum=" << sum << endl;
}



void second(int y)
{
	int i, j, t = 0, sum = 0;
	cout << "y=" << y << endl;
	for (i = 2; i <= y; i++)
	{
		for (j = 1; j<=i/2; j++)
		{
			if (i%j == 0)
				t += j;
		}
		if (i == t)
		{
			sum += i;
			cout << "i=" << i << endl;
		}
		t = 0;
		
	}
	cout << "sum=" << sum << endl;
}





void third(int m, int n)
{
	int i, j, r, s;
	i = 1;
	j = 0;
	int arr[50];
	while (i <=m &&i <= n)
	{
		r = m%i;
		s = n%i;
		if (r == 0 && s == 0)
		{
			arr[j] = i;
			j++;
		}
		i++;
	}
	cout << " 最大公约数:" << " ";
	cout << arr[j - 1] << endl;
	cout << "最小公倍数:" << " ";
	r = (m / arr[j - 1])*(n / arr[j - 1])*arr[j - 1];
	cout << r<<endl;

}




void main()
{
	frist(500);
	cout << "\n\n---------------------------------------------------------------\n\n";
	second(1000);
	cout << "\n\n---------------------------------------------------------------\n\n";
	third(36, 24);
	system("pause ");
}

