#include<stdlib.h>
#include<stdio.h>

void main()
{
	while (1)
	{
		char ch = getchar();
		getchar();//����س�
		if (ch >= '0' && ch <= '9')
		{
			printf("�����������");
		}
		else if (ch >= 'A'&&ch <= 'Z')
		{
			printf("������Ǵ�д��ĸ");
		}
		else if (ch >= 'a'&&ch <= 'a')
		{
			printf("�������Сд��ĸ");
		}
		else
		{
			printf("������������ַ�");
		}
	}


}