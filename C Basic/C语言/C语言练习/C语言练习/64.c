/*
64.	任意两个互质的自然数, 经过若干次加减后，总可获得结果为1的数值。
所谓互质数（即互素的数），是指这两个数除 1外再没有其它公因数。
如14，9为互质数，又如187，79也是互质数。
例如：对于互质数14和9，14+14=28 9+9+9=27 因28-27=1, 目的达到。请
编程序对两个互质数验证上述结论。
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include<math.h>

void main64()
{

	int num1 = 0;
	int num2 = 0;
	printf("请输入两个质数:");
	scanf("%d", &num1);
	scanf("%d", &num2);

	int tmp1 = num1;
	int tmp2 = num2;
	while (1)
	{
		tmp2 = num2;
		while (tmp1-tmp2>=-1)
		{
			if (abs(tmp1-tmp2)==1)
			{
				printf("质数%d与质数%d经过若干次相加减后,得到结果为1\n",num1,num2);
				printf("质数%d相加%d次,质数%d相加%d次\n",num1,tmp1/num1,num2,tmp2/num2);
				goto Loop;
				return;
			}
			tmp2 += num2;
		}
		tmp1 += num1;
	}


Loop:
	system("pause");

}
