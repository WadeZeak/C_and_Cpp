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
				goto end;//goto�������ѭ��
				//break;����һ��ѭ��
				//break;
			}
			printf("%2d,%d", i, j);
		}
	
		printf("\n");
	}
end:system("echo ����ѭ��");
	system("pause");


}

//������������ǩ

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

	
//cmd1,cmd2,cmd3 ���ı�ǩ
cmd1:system("color 02");
cmd2:system("title HelloWorld");
cmd3:system("tasklist");
cmd4:system("HelloWorld");
	goto cmd4;//ִ����Ӧ�ı�ǩ
system("pause");

}