//ÿ����һ�׻������ף���50���ж������߷�
//f(1)=1
//f(2)=f(1)+1  
//f(3)=f(2)+f(1)
//......
//f(n)=f(n-1)+f(n-2) n����һ�׾����ʱ����f(n-1)�����,������ʱ����f(n-2)�����


#include<stdlib.h>
#include<stdio.h>


double go(int n)
{

	if (n == 1)
		return 1;
	else if (n == 2)
		return 2;
	else
		return go(n - 1) + go(n - 2);

}



void main2()
{

	double a[50] ;
	a[0] = 1;
	a[1] = 2;
	for (int i = 2; i < 50; i++)
	{
		a[i] = a[i - 1] + a[i - 2];
		printf("i=%d,%f\n",i+1, a[i]);
	}
	
	system("pause");
}

void main1()
{

	printf("%f\n", go(30));
	system("pause");

}