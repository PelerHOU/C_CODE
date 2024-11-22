#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int arr[] = { 1,4,5,7,8 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int temp;
	int i = 0;
	for (int i = 0; i < size / 2; i++)
	{
		temp = arr[i];
		arr[i] = arr[size - 1 - i];
		arr[size - 1 - i] = size;
	}
	for(i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}