

//源文件存放实体
#include"动态数组.h"

//初始化
void init(struct data *pdata)
{
		pdata->p = NULL;
		pdata->length = 0;
		pdata->stat = 0;//代表无序
		pdata->reallength = 0;
}



//使用之后,释放内存
void reinit(struct data *pdata)
{
	if (pdata->p == NULL)
		return;
	else
	{
		free(pdata->p);//释放内存
		//没有初始化，直接释放内存会报错
		pdata->p = NULL;
		pdata->length = 0;
		pdata->stat = 0;//代表无序
		pdata->reallength = 0;
	}

}




//增加一个数据
void addobject(struct data *pdata, int num)
{
	if (pdata->p == NULL)
	{
		pdata->p = (int *)malloc(sizeof(int));//增加一个元素
		pdata->p[pdata->length] = num;
		pdata->length++;
		pdata->reallength++;
	}
	else
	{
		if (pdata->length == pdata->reallength)
		{

			pdata->p = (int *)realloc(pdata->p, (sizeof(int)*(pdata->length + 1)));//拓展内存
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


//增加一个数组
void addobjects(struct data *pdata, int *pnum, int n)//数组作为参数退化为指针
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
			pdata->p = (int *)realloc(pdata->p, (sizeof(int)*(pdata->length + n)));//拓展内存空间
			for (int i = 0; i <n; i++)
			{
				pdata->p[i + pdata->length] = pnum[i];//拷贝数组
			}
			pdata->length += n;//数组长度增加
			pdata->reallength += n;
		}
		
	}
}


//打印数组

void printall(struct data *pdata)
{
	for (int i = 0; i < pdata->reallength; i++)
	{
		printf("%d\n", pdata->p[i]);//打印数组元素
	}

}



//55 5 82 71 520 

void sort(struct data *pdata, int obj)
{

	if (obj == 0)//从小到大
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
					pdata->p[j] = pdata->p[j] ^ pdata->p[j + 1];//异或交换数据
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
	else//从大到小
	{
		for (int i = 0; i < pdata->length - 1; i++)
		{
			for (int j = 0; j < pdata->length - i-1; j++)
			{
				if (pdata->p[j]<pdata->p[j + 1])
				{
					pdata->p[j] = pdata->p[j] ^ pdata->p[j + 1];//异或交换数据
					pdata->p[j + 1] = pdata->p[j] ^ pdata->p[j + 1];
					pdata->p[j] = pdata->p[j] ^ pdata->p[j + 1];
				}
			}
		}
		pdata->stat = 2;
	}

}




int *finddata(struct data *pdata, int num)//返回找到的一个的数据的地址
{

	if (pdata->stat == 0)//无序时查找
	{
		for (int i = 0; i < pdata->length; i++)
		{
			if (pdata->p[i] == num)//找到
			{
				//	printf("\n\n\ni=%d\n",i);
				return &pdata->p[i];//返回地址
				break;
			}
		}
	
	}
	else if (pdata->stat == 1)//从小到大排列
	{
		
		int i = 0;
		int head = 0;
		int end = pdata->length - 1;

		int mid = (end + head) / 2;
		while (head <= end)
		{
			i++;//查找次数
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
	else //从大到小排列
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
	return NULL;//没有找到
}



void change(struct data *pdata, int oldnum, int newnum)//实现数据修改
{
	int *p = finddata(pdata, oldnum);
	if (p==NULL)
	{
		printf("\n没有找到,数据修改失败\n");
	}
	else
	{
		*p = newnum;
	}

}



void insert(struct data *pdata, int num, int insertnum, int fb)//插入数据,fb代表前面插入还是后面插入
{

	int *p = finddata(pdata, num);//查找被插数据是否存在
	if (p==NULL)
	{
		printf("\n插入失败\n");
		return;
	}
	else
	{
		int curr = p - pdata->p;//获取插入位置的下标
		if (fb==1)//前叉
		{
			//是否与需要重新分配内存
			if (pdata->length < pdata->reallength)//不需要重新分配内存
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
				pdata->p = (int *)realloc(pdata->p, (sizeof(int)*(pdata->length + 1)));//拓展内存空间
				pdata->reallength += 1;

				for (int i = pdata->length-1; i >=curr; i--)
				{
					pdata->p[i+1] = pdata->p[i];
				}
				pdata->p[curr] = insertnum;
				pdata->length += 1;


			}
		}
		else//后插
		{
        	//是否与需要重新分配内存
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

			
				pdata->p = (int *)realloc(pdata->p, (sizeof(int)*(pdata->length + 1)));//拓展内存空间
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




int *find(int *p, int num,int n)//从指定p开始查找,长度为n
{

	for (int i = 0; i <= n ; i++)
	{
		if (p[i] == num)
			return (p+i);
	}
	return NULL;//没有找到

}




struct findres finddallata(struct data *pdata, int num)//返回一片内存,包含所有找到的数据的地址
{
	struct findres res1;//构建结构体变量
	int i = 0;//计数
	for (int *p = find(pdata->p, num, pdata->length); p != NULL; p = find(p+1, num, pdata->length-(p-pdata->p)-1))
	{
		i++;
	}
	//printf("\n指定数据的个数:%d\n\n", i);


	res1.length = i;
	int **pint = (int **)malloc(sizeof(int *)*i);//保存地址
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






void deleteone(struct data *pdata, int num)//删除一个找到的数据
{

	int *p = finddata(pdata, num);//查找被插数据是否存在
	if (p == NULL)
	{
		printf("\n没有找到指定数据,删除失败\n");

	}
	else
	{
		int curr = p - pdata->p;
		//验证
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




void deleteall(struct data *pdata, int num)//删除所有指定的数据
{
	
		for (int *p = finddata(pdata, num); p != NULL; p = finddata(pdata, num))
			deleteone(pdata, num);
}






