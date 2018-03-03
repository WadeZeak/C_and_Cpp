#include<stdlib.h>
#include<stdio.h>

void main()
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (j == 3)
			{
				goto end;//goto跳出多层循环
				//break;跳出一层循环
				//break;
			}
			printf("%2d,%d", i, j);
		}
	
		printf("\n");
	}
end:system("echo 结束循环");
	system("pause");


}

//整数不能做标签

void mainjgj()
{
	int sum=0;
	int i = 1;
add:while (i <= 100)
{
	sum += i;
	i++;
	printf("%d,%d\n", i, sum);
	goto add;
}
	system("pause");
	
}

void main22()
{

	
//cmd1,cmd2,cmd3 语句的标签
cmd1:system("color 02");
cmd2:system("title HelloWorld");
cmd3:system("tasklist");
cmd4:system("HelloWorld");
	goto cmd4;//执行相应的标签
system("pause");

}