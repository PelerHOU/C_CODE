#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int gad(int a, int b)
{
	while (b != 0)
	{
		int temp = b;
		b = a % b;
		a = temp;
	}
}
int main()
{
	int num1, num2;
	printf("请输入两个数：");
	scanf("%d %d", &num1, &num2);
	int reuslt = gad(num1, num2);
	printf("%d %d 最大公约数是 : %d\n", num1,num2, reuslt);
	return 0;
}