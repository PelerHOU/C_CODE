#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	printf("��������������");
	scanf("%d %d %d", &a, &b, &c);
	if ((a + b > c) && (a + c > b) && (b + c > a))
	{
		if (a == b && b == c)
		{
			printf("�ȱ������Σ�����");
		}
	}
	else if (a == c || b == c || a == b)
	{
		if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
		{
			printf("����ֱ��������");
		}
		else
		{
			printf("��ͨ����������");
		}
	}
	else if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
	{
		printf("ֱ��������");
	}
	else
	{
		printf("�޷�����������");
	}
	return 0;
}