/*
47.马百瓦问题。有100匹马，100块瓦，大马驮3块，
小马驮2块,两个马驹驮1块。问大马、小马、马驹各多少？
要求：① 不许用for循环;     ② 循环次数尽量少。
*/


#include<stdlib.h>
#include<stdio.h>
void main47()
{
	int i = 0, j = 0,k=0;//大马,小马,马驹

	while (i<34)
	{
		while (j<50)
		{
			k =( 100 - (3 * i + 2 * j) )* 2;
			if (k<(100-i-j))
			{

				printf("大马=%d,小马=%d,马驹=%d\n", i, j,k);
				
			}
			j++;
		}
		i++;

	}
	system("pause");
}