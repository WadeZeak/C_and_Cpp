
#define _CRT_SECURE_NO_WARNINGS

#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int getdata(int n)
{
	if (n == 0)
		return 0;
	else
	{
		
		return 1 + getdata(n/10);
	}


}
void main()
{
	int num;
	scanf("%d", &num);
	printf("num=%d\n", num);//scanf()´æÔÚÂ©¶´
	int wei = 0;
	wei = getdata(num);
	printf("wei=%d\n", wei);
	system("pause");


}