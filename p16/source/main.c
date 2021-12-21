#include<stdlib.h>
#include<stdio.h>
#define MAX 80
#define ENTER 13
int main(void)
{
	FILE *fptr;
	char str[MAX], ch;
	int i = 0;
	fptr = fopen("C://c_code/CH7_hw/p16/output.txt", "a");
	printf("請輸入字串，ENTER結束:\n");
	while ((ch = getche()) != ENTER && i < MAX)
	{
		str[i++] = ch;
	}
	putc('\n', fptr);
	fwrite(str, sizeof(char), i, fptr);
	fclose(fptr);
	printf("\n檔案附加完成\n");
	system("pause");
	return 0; 
}