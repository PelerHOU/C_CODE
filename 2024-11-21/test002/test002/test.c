#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//9 * 9 �˷���
int main()
{
	int i = 0;
	int j = 0;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%d\t", j, i, j * i);
		}
		printf("\n");
	}
	return 0;
}