#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int isPream(int n)
{
	if (n <= 1)
	{
		return 0;
	}
	if (n <= 3)
	{
		return 1;
	}
	if (n % 2 == 0 || n % 3 == 0)
	{
		return 0;
	}
	for (int i = 5; i * i <= n; i += 6)
	{
		if (n % i == 0 || n % (i + 2) == 0) 
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int num;
	printf("请输入：");
	scanf("%d", &num);
	if (isPream(num))
	{
		printf("是素数");
	}
	else
	{
		printf("不是素数");
	}
	return 0;
}