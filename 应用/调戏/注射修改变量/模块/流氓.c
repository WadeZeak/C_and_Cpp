#include<stdlib.h>
#include<Windows.h>

void main()
{
	int num = 5;
	printf("%x", &num);

	*(&num) = 10;

	printf("\n%d", &num);
	system("pause");
}