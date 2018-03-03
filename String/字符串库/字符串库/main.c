#include"×Ö·û´®.h"

void main()
{

	MyString str;
	InitWithString(&str, "notepad");
	BackAddChar(&str, 'n');
	BackAddStr(&str, "notebad");
	PrintString(&str);
	/*char *fstr = FindFirstChr(&str, 'W');
	*fstr = 'K';*/
	/*char *fstr = FindFirstStr(&str, "QQ");
	if (fstr==NULL)
	{

		printf("Ã»ÓÐÆ¥ÅäÏî!!\n");
	}
	else
	{
		*fstr = 'X';
	}*/
//	DelFirstChr(&str, 'C');
//	DelFirstStr(&str, " World");
/*char *p = FindFirstChr(&str, 'W');
	if (p!=NULL)
	{
		AddChr(&str, 'A', p);
	}*/

	ReplaceStr(&str, "note", "QQ");

	PrintString(&str);
	system("pause");
}