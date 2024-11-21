#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//1+2+3...+100
int main()
{
	int i = 0;
	int sum = 0;
	for (i = 1; i <= 100; i++)
	{
		sum += i;
	}
	printf("%d\n", sum);
	return 0;
}