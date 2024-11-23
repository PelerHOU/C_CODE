#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void Selection_Sort(int arr[], int n)
{
	int i, j, temp,min_idx;
	for (i = 0; i < n - 1; i++)
	{
		min_idx = i;
		for (j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[min_idx])
			{
				min_idx = j;
			}
		}
		temp = arr[i];
		arr[i] = arr[min_idx];
		arr[min_idx] = temp;
	}
}
int main()
{
	int arr[] = { 1,4,6,7,9,0,7,5,3 };
	int n = sizeof(arr) / sizeof(arr[0]);
	Selection_Sort(arr, n);
	for (int i = 0; i < n; i++)
	{
		printf("%d", arr[i]);
	}
	return 0;
}