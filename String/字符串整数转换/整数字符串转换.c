#include<stdlib.h>
#include<stdio.h>


int test(char *str)
{
	int shu=0;

	while (*str)
	{
		if (*str > '9' || *str < '0')
			return -1;
			shu = shu * 10 + (*str - '0');
		str++;

	}
	return shu;

}

int tonum(char *str)
{
	int num = 0;//����
	char *istr = str;//��������
	while (*istr != '\0')
	{
		//printf("%c,%d\n",*str, *str);��ӡÿһ���ַ�
		if (*istr > '9' || *istr < '0')
			return -1;//����ʧ��
		num++;
		istr++;
	}
	int wei = 0;
	int lastnum = 0;
	for (int i = 0; i < num; i++)
	{

		wei = str[i] - 48;
		lastnum = lastnum * 10 + wei;
		//printf("wei=%d\n", wei);
	}
	
	return lastnum;
}
//�ַ�ת����
void main2()
{
	char str[10] = "123a45";	
	if (tonum(str)!=-1)
//	printf("%d\n",tonum(str));
printf("%d\n", test(str));
	else
	{
		printf("���ݲ����Ϲ淶\n");
	}
	system("pause");

}



void main1()
{

	//printf("%d,%c\n", 1, 1);//1,ASCII�б���Ϊ1���ַ�
	//printf("%d,%c\n", '1', '1');//49��1��ASCII�ı��룩,1
	printf("%d", '1' - 1);//48
	system("pause");
}


void tostr(int num, char *str)
{
	int wei = 0;
	int inum = num;
	while (inum)
	{
		wei++;
		inum /= 10;
	}

	while (num)
	{
		str[wei - 1] = num % 10 + '0';
		num /= 10;
		wei--;
	}

}



//����ת�ַ�



void main()
{

	int num = 1234567;
	char str[10] = { 0 };
	tostr(num, str);
	printf("%s\n",str );
	system("pause");

}