#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i = 0;
	int sum = 0;
	for (i = 0; i <= 100; i++)
	{
		sum += i; 
	}
	printf("%d\n", sum);
	return 0;
}