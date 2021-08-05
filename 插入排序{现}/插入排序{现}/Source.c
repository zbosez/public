#include<stdio.h>

void InsertSort(int* arr, int n)
{
	for (int i = 0;i < n - 1;i++)
	{
		for (int end=i;end >= 0;end--)
		{
			int temp = arr[end + 1];
			if (temp <= arr[end])
			{
				arr[end + 1]= arr[end];
				arr[end] = temp;
			}
			else
			{
				;
			}
		}
	}
}
int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1 };
	InsertSort(arr, sizeof(arr) / sizeof(arr[0]));
	for (int i = 0;i < sizeof(arr) / sizeof(arr[0]);i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}