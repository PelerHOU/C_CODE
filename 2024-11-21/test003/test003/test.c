#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	//����һ�������
	srand((unsigned int)time(NULL));
	//1-100֮��������
	b = rand() % 100 + 1;
	printf("������1-100֮������֣�");
	while (1)
	{
		scanf("%d", &a);
		if (a > b) {
			printf("�´���,������������\n");
		}
		else if (a < b) {
			printf("��С�ˣ�������������\n");
		}
		else
		{
			printf("�¶��ˣ���ϲ��\n");
			break;
		}
	}
	return 0;
}