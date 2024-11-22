#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += i;
	}
	printf("%d",sum);
		return 0;
}