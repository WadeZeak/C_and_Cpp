#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define n  64    //ģ��ʵ���мٶ���ҳ����
#define length 10

struct {
	int  lnumber;   //ҳ��
	int flag;       //��ʾҳ�Ƿ�������,"1"��ʾ��,"0"��ʾ����
	int pnumber;    //��ҳ���������Ŀ��
	int write;      //��ҳ�Ƿ��޸Ĺ�,"1"��ʾ�޸Ĺ�,"0"��ʾû���޸Ĺ�
	int dnumber;    //��ҳ����ڴ����ϵ�λ��,�����̿��
}page[n];      //ҳ����

int m;          //mΪ��ҵ�������е���������
int page_length;//ҳ��ʵ�ʳ���
//int p[length];  //�����������ҳ��ҳ��
//int head;       //������ҳ�Ŷ���ͷָ��
int LRU[length];//�����������ҳ��ҳ�Ű����ʹ���������
int LRU_tail;//LRU����β 

void page_interrupt(int lnumber)
{
	int j;
	printf("����ȱҳ�ж�*%d\n", lnumber);
	//��̭ҳ(����LRU����)
	j = LRU[LRU_tail];
	for (int i = LRU_tail; i>0; i++)
		LRU[i] = LRU[i - 1];
	LRU[0] = lnumber;

	if (page[j].write == 1)
		printf("��ҳ%dд�ش��̵�%d��\n", j, page[j].dnumber);
	page[j].flag = 0;        //��jҳ���ڱ�־��Ϊ"0"
	page[lnumber].pnumber = page[j].pnumber;
	page[lnumber].flag = 1;  //��lnumberҳ���ڱ�־��Ϊ"0"
	page[lnumber].write = 0;  //��lnumberҳ�޸ı�־��Ϊ"1"
	printf("��̭�����%2d�е�ҳ%2d,�Ӵ��̵�%d���е���%2d\n", page[j].pnumber, j, page[lnumber].dnumber, lnumber);
}//ȱҳ�жϴ���������

void command(unsigned int laddress, int write)
{
	unsigned int paddress, ad, pnumber, lnumber;
kk:
	//ȡ���߼���ַladdress��ҳ��lnumber(��6λ)��ҳ�ڵ�ַad
	lnumber = laddress >> 10;
	ad = laddress & 0x3ff;
	if ((int)lnumber >= page_length)
	{
		printf("�����ڸ�ҳ\n");
		return;
	}
	if (page[lnumber].flag == 1)//ҳ������
	{
		pnumber = page[lnumber].pnumber;//��ҳ����ȡ�ÿ��
		paddress = pnumber << 10 | ad;//�ϲ���źͿ��ڵ�ַ�γ������ַpaddress
		printf("�߼���ַ��:%x ��Ӧ�����ַ��:%x\n", laddress, paddress);
		if (write == 1) //�����Ҫд,�޸�ҳ���޸ı�־λ
			page[lnumber].write = 1;
		//����LRU����
		int a = LRU[pnumber];
		for (int i = pnumber; i>0; i++)
			LRU[i] = LRU[i - 1];
		LRU[0] = a;
	}
	else
	{
		page_interrupt(lnumber);//ȱҳ�ж�
		goto kk;
	}
}//�����������

void main3542()
{
	int lnumber, pnumber, write, dnumber;
	unsigned laddress;
	int i;
	//����ҳ�����Ϣ,����ҳ��page
	printf("����ҳ�����Ϣ,����ҳ��(��ҳ��Ϊ-1,���������)\n");
	printf("����ҳ�ź͸����ַ:");
	scanf("%d%d", &lnumber, &dnumber);
	i = 0;
	while (lnumber != -1)
	{
		page[i].lnumber = lnumber;
		page[i].flag = 0;
		page[i].write = 0;
		page[i].dnumber = dnumber;
		i++;
		printf("����ҳ�ź͸����ַ:", i);
		scanf("%d%d", &lnumber, &dnumber);
	}
	page_length = i;
	printf("����������,�������ҪС��%d,(��-1����):", i);
	scanf("%d", &pnumber);
	m = 0;
	//head=0;
	while (pnumber != -1)
	{
		if (m <= i)
		{
			page[m].pnumber = pnumber;
			page[m].flag = 1;
			//p[m]=m;
			LRU[m] = m;
			LRU_tail = m;
			m++;
		}
		scanf("%d", &pnumber);
	}
	printf("����ָ������(1-�޸�,0-����Ҫ,����-������������)���߼���ַ");
	scanf("%d%x", &write, &laddress);
	while (write == 0 || write == 1)
	{
		command(laddress, write);
		printf("����ָ������(1-�޸�,0-����Ҫ,����-������������)���߼���ַ");
		scanf("%d%x", &write, &laddress);
	}
}//main()����


