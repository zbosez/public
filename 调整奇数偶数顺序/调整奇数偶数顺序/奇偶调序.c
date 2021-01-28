#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//Å¼ÊýºóÒÆ
void soe(int* arr,int sz)
{
	int i = 0;
	for (i = 0;i < sz - 2;i++)
	{
		int j = 0;
		int flag = 0;
		for (j = 0;j < sz-2;j++)
		{
			if (*(arr + j) % 2 == 0)
			{
				int temp = *(arr +j+1);
				*(arr +j+1) = *(arr + j);
				*(arr + j) = temp;
				flag = 1;
			}
		}
		if (flag == 0)
			break;
	}
}
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	soe(&arr, sz);
	int i = 0;
	while (arr[i])
	{
		printf("%d ", arr[i]);
		i++;
	}
	return 0;
}