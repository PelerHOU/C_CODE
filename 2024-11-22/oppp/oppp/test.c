#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int arr[] = { 9,7,4,1 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int max = arr[0];
	int min = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	printf("最大数：%d,最小数：%d", max, min);
	return 0;
}