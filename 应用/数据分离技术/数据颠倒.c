#define _CRT_SECURE_NO_WARNINGS

#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int getwei(int num)//���������ж���λ
{

	int wei = 0;
	while (num)
	{
		wei++;
		num = num / 10;
	}
	return wei;
}





int getnum(int m,int n)
{

	if (n==0)
	{
		return  m ;
	}
	 else
	{
		
		 m *= 10;
		 getten(m, n-1);
	}

}
int getten(int n)//��ȡ10^n
{
	int res=1;
	for (int i = 0; i < n; i++)
	{
		res *= 10;
	}

	return res;

}


void main3()
{
	int num;
	scanf("%d", &num);
	printf("num=%d", num);//scanf()����©��
	int wei = getwei(num);
	printf("\nwei=%d\n", wei);
	int shu = 0;//ÿһλ����
	int inum = 0;
		while (num!=0)
		{
			shu = num % 10;
			num /= 10;
		//	inum += getnum(shu,wei-1); 
			inum += shu*getten( wei - 1);
			wei--;
			printf("%d,%d,%d\n", shu,  num,wei);
		}
		printf("\ninum=%d\n", inum);
	system("pause");
}


void main4()
{
	int num;
	scanf("%d", &num);
	printf("num=%d\n", num);//scanf()����©��
	int wei = 0;
	
AAA:
if (num)
{
	wei++;
	num = num / 10;
	goto AAA;
}



goto AAA;

printf("wei=%d\n",wei);
system("pause");


}