
/*
���ܣ�25.	Bessel����Jn(X)�����µĵ��ƹ�ϵ��


J[n+1](x)=(2n+1)/x*J[n](x)-J[n-1](x)
������֪��J[0]��x��=sinx/x
J[1](x)=sinx/x^2-cosx/x
��д�������õ��ƹ�ϵ���������n��x��0��Jn(X)��
ע������������ʹ�����顣


ʱ�䣺16:00 2013/10/24
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<time.h>


double  Bessel(int n,int x)
{
	if (n==0)
	{
		return sin(x) / x;
	}
	else if (n == 1)
	{
		return sin(x) / (x*x) - cos(x) / x;
	}
	else
	{
		return (2*n - 1) / x*Bessel(n-1,x) - Bessel(n-2,x);
	}

}


void main25()
{
	int n = 0;
	scanf("%d", &n);

	int x = 0;
	scanf("%d", &x);
	if (!x)
	{
		printf("��������ݲ��Ϸ�\n");
	}

	printf("J[n](x)=%f\n", Bessel(n, x));

	system("pause");



}

