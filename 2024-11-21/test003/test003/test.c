#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	//生成一个随机数
	srand((unsigned int)time(NULL));
	//1-100之间的随机数
	b = rand() % 100 + 1;
	printf("请输入1-100之间的数字：");
	while (1)
	{
		scanf("%d", &a);
		if (a > b) {
			printf("猜大了,请您重新输入\n");
		}
		else if (a < b) {
			printf("猜小了，请您重新输入\n");
		}
		else
		{
			printf("猜对了，恭喜您\n");
			break;
		}
	}
	return 0;
}