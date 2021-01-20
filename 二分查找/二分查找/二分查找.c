#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr1[] = { 1,4,5,7,9,22,34,56,87,99,123,144,167 };
	int sz = sizeof(arr1)/sizeof(arr1[0]);
	//printf("%d ", sz);
	//printf("%d %d", sizeof(int), sizeof(char));
	int left = 0;
	int right = sz - 1;
	int k = 0;
	printf("请输入你想找的数>:");
	scanf("%d", &k);
	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (arr1[mid] == k)
		{
			printf("找到了，下标是%d ", mid);
			break;
		}
		else if (arr1[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr1[mid] > k)
		{
			right = mid - 1;
		}
		else
			printf("找不到！");
	}
	return 0;
}
