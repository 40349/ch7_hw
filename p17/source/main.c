#include<stdlib.h>
#include<stdio.h>
#define MAX 10
int main(void)
{
	FILE *fptr;
	char str[MAX];
	int bytes;
	fptr = fopen("C://c_code/CH7_hw/p17/output.txt", "r");
	while (!feof(fptr))
	{
		bytes = fread(str, sizeof(char), MAX - 1, fptr);
		str[bytes] = '\0';
		printf("%s", str);
	}
	printf("\n");
	fclose(fptr);
	system("pause");
	return 0;
}