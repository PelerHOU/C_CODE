#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	//2 4 6 8 10
	int i = 0;
	for (i = 1; i <= 10; i++)
	{
		if (i % 2 == 0)
		{
			printf("%d\n", i);
		}
	}
	return 0;
}