#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a = 50;
	int b = 5;
	printf("%d\n", a % b);
	//����a�ܱ�b����������û������
	a = 19;
	b = 2;
	//���︳ֵ����a�Ǳ��������Ը���ֵ
	printf("%d\n", a % b);
	//a%b��ʵ������ѧ�ϵ�ȡ����
	return 0;
}