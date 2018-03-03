

//Դ�ļ����ʵ��
#include"��̬����.h"

//��ʼ��
void init(struct data *pdata)
{
		pdata->p = NULL;
		pdata->length = 0;
		pdata->stat = 0;//��������
		pdata->reallength = 0;
}



//ʹ��֮��,�ͷ��ڴ�
void reinit(struct data *pdata)
{
	if (pdata->p == NULL)
		return;
	else
	{
		free(pdata->p);//�ͷ��ڴ�
		//û�г�ʼ����ֱ���ͷ��ڴ�ᱨ��
		pdata->p = NULL;
		pdata->length = 0;
		pdata->stat = 0;//��������
		pdata->reallength = 0;
	}

}




//����һ������
void addobject(struct data *pdata, int num)
{
	if (pdata->p == NULL)
	{
		pdata->p = (int *)malloc(sizeof(int));//����һ��Ԫ��
		pdata->p[pdata->length] = num;
		pdata->length++;
		pdata->reallength++;
	}
	else
	{
		if (pdata->length == pdata->reallength)
		{

			pdata->p = (int *)realloc(pdata->p, (sizeof(int)*(pdata->length + 1)));//��չ�ڴ�
			pdata->p[pdata->reallength] = num;
			pdata->length++;
			pdata->reallength++;
			
		}
		else
		{
			pdata->p[pdata->length] = num;
		pdata->length++;
		}	
	}
}


//����һ������
void addobjects(struct data *pdata, int *pnum, int n)//������Ϊ�����˻�Ϊָ��
{
	if (pdata->p == NULL)
	{
		pdata->p = (int *)malloc(sizeof(int)*n);
		pdata->length = n;
		pdata->reallength = n;
		for (int i = 0; i < n; i++)
		{
			pdata->p[i] = pnum[i];
		}
		
	}
	else
	{
		if (pdata->length + n <= pdata->reallength)
		{

			for (int i = 0; i < n; i++)
			{
				pdata->p[i] = pnum[i];
			}
			pdata->length += n;

		}
		else
		{
			pdata->p = (int *)realloc(pdata->p, (sizeof(int)*(pdata->length + n)));//��չ�ڴ�ռ�
			for (int i = 0; i <n; i++)
			{
				pdata->p[i + pdata->length] = pnum[i];//��������
			}
			pdata->length += n;//���鳤������
			pdata->reallength += n;
		}
		
	}
}


//��ӡ����

void printall(struct data *pdata)
{
	for (int i = 0; i < pdata->reallength; i++)
	{
		printf("%d\n", pdata->p[i]);//��ӡ����Ԫ��
	}

}



//55 5 82 71 520 

void sort(struct data *pdata, int obj)
{

	if (obj == 0)//��С����
	{
		for (int i = 0; i < pdata->length-1; i++)
		{
			for (int j = 0; j < pdata->length-i-1; j++)
			{
				if (pdata->p[j]>pdata->p[j+1])
				{
					/*int temp = pdata->p[j + 1];
					pdata->p[j + 1] = pdata->p[j];
					pdata->p[j] = temp;*/
					pdata->p[j] = pdata->p[j] ^ pdata->p[j + 1];//��򽻻�����
					pdata->p[j+1] = pdata->p[j] ^ pdata->p[j + 1];
					pdata->p[j] = pdata->p[j] ^ pdata->p[j + 1];

				//3  0000 0011 p[j]
				//1  0000 0001 p[j+1]
			//p[j]   0000 0010
		   //p[j+1]= 0000 0011
           //p[j]=   0000 0001
				}
			}
		}
		pdata->stat = 1;
	}
	else//�Ӵ�С
	{
		for (int i = 0; i < pdata->length - 1; i++)
		{
			for (int j = 0; j < pdata->length - i-1; j++)
			{
				if (pdata->p[j]<pdata->p[j + 1])
				{
					pdata->p[j] = pdata->p[j] ^ pdata->p[j + 1];//��򽻻�����
					pdata->p[j + 1] = pdata->p[j] ^ pdata->p[j + 1];
					pdata->p[j] = pdata->p[j] ^ pdata->p[j + 1];
				}
			}
		}
		pdata->stat = 2;
	}

}




int *finddata(struct data *pdata, int num)//�����ҵ���һ�������ݵĵ�ַ
{

	if (pdata->stat == 0)//����ʱ����
	{
		for (int i = 0; i < pdata->length; i++)
		{
			if (pdata->p[i] == num)//�ҵ�
			{
				//	printf("\n\n\ni=%d\n",i);
				return &pdata->p[i];//���ص�ַ
				break;
			}
		}
	
	}
	else if (pdata->stat == 1)//��С��������
	{
		
		int i = 0;
		int head = 0;
		int end = pdata->length - 1;

		int mid = (end + head) / 2;
		while (head <= end)
		{
			i++;//���Ҵ���
			printf("%d,%d,%d\n", head, mid,end);
			if (pdata->p[mid] == num)
			{
				printf("mid=%d,i=%d\n", mid, i);
				return &pdata->p[mid];
			}
			else if (pdata->p[mid] < num)
			{
				head = mid + 1;
			}
			else
			{
				end = mid - 1;
			}
			mid = (end + head) / 2;
		}
	}
	else //�Ӵ�С����
	{
		int i = 0;
		int head = 0, end = pdata->length - 1;
		int mid = (end + head) / 2;

		while (head <= end)
		{
			printf("%d,%d,%d\n", head, mid, end);

					i++;
				if (pdata->p[mid] == num)
				{
					printf("mid=%d,i=%d\n", mid, i);
					return &pdata->p[mid];
					break;
				}
				else if (pdata->p[mid] > num)
				{
					head = mid + 1;
				}
				else
				{
					end = mid - 1;
				}
				mid = (end + head) / 2;
		}

	}
	return NULL;//û���ҵ�
}



void change(struct data *pdata, int oldnum, int newnum)//ʵ�������޸�
{
	int *p = finddata(pdata, oldnum);
	if (p==NULL)
	{
		printf("\nû���ҵ�,�����޸�ʧ��\n");
	}
	else
	{
		*p = newnum;
	}

}



void insert(struct data *pdata, int num, int insertnum, int fb)//��������,fb����ǰ����뻹�Ǻ������
{

	int *p = finddata(pdata, num);//���ұ��������Ƿ����
	if (p==NULL)
	{
		printf("\n����ʧ��\n");
		return;
	}
	else
	{
		int curr = p - pdata->p;//��ȡ����λ�õ��±�
		if (fb==1)//ǰ��
		{
			//�Ƿ�����Ҫ���·����ڴ�
			if (pdata->length < pdata->reallength)//����Ҫ���·����ڴ�
			{
				for (int i = pdata->length-1; i >=curr; i--)
				{
					pdata->p[i+1] = pdata->p[i];
				}
				pdata->p[curr + 1] = insertnum;
				pdata->length += 1;
			}

			else
			{
				pdata->p = (int *)realloc(pdata->p, (sizeof(int)*(pdata->length + 1)));//��չ�ڴ�ռ�
				pdata->reallength += 1;

				for (int i = pdata->length-1; i >=curr; i--)
				{
					pdata->p[i+1] = pdata->p[i];
				}
				pdata->p[curr] = insertnum;
				pdata->length += 1;


			}
		}
		else//���
		{
        	//�Ƿ�����Ҫ���·����ڴ�
			if (pdata->length < pdata->reallength)
			{
				for (int i = pdata->length-1; i >curr; i--)
				{
					pdata->p[i+1] = pdata->p[i];

				}
				pdata->p[curr] = insertnum;
				pdata->length += 1;

			}
			else
			{

			
				pdata->p = (int *)realloc(pdata->p, (sizeof(int)*(pdata->length + 1)));//��չ�ڴ�ռ�
				pdata->reallength += 1;
				for (int i = pdata->length - 1; i >curr; i--)
				{
					pdata->p[i+1] = pdata->p[i];

				}
				pdata->p[curr+1] = insertnum;
				
				pdata->length += 1;

			}

		}
	}

}




int *find(int *p, int num,int n)//��ָ��p��ʼ����,����Ϊn
{

	for (int i = 0; i <= n ; i++)
	{
		if (p[i] == num)
			return (p+i);
	}
	return NULL;//û���ҵ�

}




struct findres finddallata(struct data *pdata, int num)//����һƬ�ڴ�,���������ҵ������ݵĵ�ַ
{
	struct findres res1;//�����ṹ�����
	int i = 0;//����
	for (int *p = find(pdata->p, num, pdata->length); p != NULL; p = find(p+1, num, pdata->length-(p-pdata->p)-1))
	{
		i++;
	}
	//printf("\nָ�����ݵĸ���:%d\n\n", i);


	res1.length = i;
	int **pint = (int **)malloc(sizeof(int *)*i);//�����ַ
	/*for (*pint = find(pdata->p, num, pdata->length); *pint != NULL; *pint = find((*pint) + 1, num, pdata->length - ((*pint)- pdata->p) - 1))
		{
		printf("%p,%p,%d\n", pint, *pint, **pint);
		pint++;
		}*/
	res1.pp = pint;

	for (int *p = find(pdata->p, num, pdata->length),j=0; p != NULL; p = find(p + 1, num, pdata->length - (p - pdata->p) - 1))
	{
		pint[j] = p;
	//	printf("%p,%p,%d\n", pint, pint[j], *pint[j]);
		j++;
	}



	return res1;
}






void deleteone(struct data *pdata, int num)//ɾ��һ���ҵ�������
{

	int *p = finddata(pdata, num);//���ұ��������Ƿ����
	if (p == NULL)
	{
		printf("\nû���ҵ�ָ������,ɾ��ʧ��\n");

	}
	else
	{
		int curr = p - pdata->p;
		//��֤
		//printf("\n%p,%d\n", *p, p);
		//printf("\n%p,%d\n", &pdata->p[curr], pdata->p[curr]);
		for (int i = curr; i < pdata->length-1; i++)
		{
			pdata->p[i] = pdata->p[i + 1];
		}
		pdata->length -= 1;
		//pdata->length -= 1;
	}

}




void deleteall(struct data *pdata, int num)//ɾ������ָ��������
{
	
		for (int *p = finddata(pdata, num); p != NULL; p = finddata(pdata, num))
			deleteone(pdata, num);
}






