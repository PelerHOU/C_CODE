#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void Insertion_Sort(int arr[], int n)
{
	int i = 0, key = 0, j = 0;
	for (i = 1; i < n; i++)
	{
		key = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}

}
int main()
{
	int arr[] = { 5,7,0,2,4,1,6 };
	int n = sizeof(arr) / sizeof(arr[0]);
	Insertion_Sort(arr, n);
	for (int i = 0; i < n; i++)
	{
		printf("%d", arr[i]);
	}
	return 0;
}