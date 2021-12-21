#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	FILE *fptr;
	char ch;
	int count = 0;
	fptr = fopen("C://c_code/CH7_hw/p14/welcome.txt", "r");
	if (fptr != NULL)
	{
		while ((ch = getc(fptr)) != EOF)
		{
			printf("%c", ch);
			count++;
		}
		fclose(fptr);
		printf("\n總共有%d個字元", count);
	}
	else
	{
		printf("檔案開啟失敗");
	}
	system("pause");
	return 0;
}