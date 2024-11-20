#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	printf("输入三个整数：");
	scanf("%d %d %d", &a, &b, &c);
	if ((a + b > c) && (a + c > b) && (b + c > a))
	{
		if (a == b && b == c)
		{
			printf("等边三角形！！！");
		}
	}
	else if (a == c || b == c || a == b)
	{
		if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
		{
			printf("等腰直角三角形");
		}
		else
		{
			printf("普通等腰三角形");
		}
	}
	else if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
	{
		printf("直角三角形");
	}
	else
	{
		printf("无法构成三角形");
	}
	return 0;
}